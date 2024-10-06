//#include <iostream>
//
//using elementType = int;
//using namespace std;
//
//const int LENGTH = 4;// размер карты
//
//const char XPLAYERX = 'X'; // крестик
//const char OPLAYERO = 'O'; // нолик
//const char EMPTINESS = '#'; // пустое
//
//template <typename T> // вывод игровой карты на консоль:
//auto consoleOutput(T* GameMap) -> void;
//
//
//template <typename T> // проверка на выигрышь одного из игроков:
//auto disclosureOfResults(T* GameMap, char currentPlayer) -> bool;
//
//template <typename T> // логика игры:
//auto gameProcess(T* GameMap) -> void;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//
//    // можно разрешить пользователю вводить размер поля(тогда без const):
//    // cout << "Введите размер игрового поля: ";
//    // cin >> LENGTH;
//
//    elementType** GameMap;
//    try
//    {
//        GameMap = new elementType * [LENGTH];
//
//        for (int ii = 0; ii < LENGTH; ii++)
//            GameMap[ii] = new elementType[LENGTH];
//    }
//    catch (const std::bad_alloc& exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        return 1;
//    }
//
//    // заполнение матрицы пустыми полями
//    for (int ii = 0; ii < LENGTH; ii++)
//        for (int jj = 0; jj < LENGTH; jj++)
//            GameMap[ii][jj] = EMPTINESS;
//
//    gameProcess(GameMap);
//
//    for (int ii = 0; ii < LENGTH; ii++)
//        delete[] GameMap[ii];
//
//    delete[] GameMap;
//
//    return 0;
//}
//
//template <typename T>
//auto consoleOutput(T* GameMap) -> void
//{
//    for (int ii = 0; ii < LENGTH; ii++)
//    {
//        for (int jj = 0; jj < LENGTH; jj++)
//            cout << char(GameMap[ii][jj]) << ' ';
//        // char - потому что мы работаем с символами
//        cout << endl;
//    }
//}
//
//
//template <typename T>
//auto disclosureOfResults(T* GameMap, char currentPlayer) -> bool
//{
//    // Проверяем строки и столбцы:
//    // второй цикл для того чтобы можно было выбирать любое игровое поле, 
//    // любого разрема
//    for (int ii = 0; ii < LENGTH; ii++)
//        for (int jj = 0; jj < LENGTH - 2; jj++)
//        {
//            if (GameMap[ii][jj] == currentPlayer && GameMap[ii][jj + 1] == currentPlayer
//                && GameMap[ii][jj + 2] == currentPlayer)
//                return true;
//            if (GameMap[jj][ii] == currentPlayer && GameMap[jj + 1][ii] == currentPlayer
//                && GameMap[jj + 2][ii] == currentPlayer)
//                return true;
//        }
//
//    // Проверяем диагонали
//    for (int ii = 0; ii < LENGTH - 2; ii++)
//        for (int jj = 0; jj < LENGTH - 2; jj++)
//        {
//            if (GameMap[ii][jj] == currentPlayer && GameMap[ii + 1][jj + 1] == currentPlayer
//                && GameMap[ii + 2][jj + 2] == currentPlayer)
//                return true;
//            if (GameMap[ii][jj + 2] == currentPlayer && GameMap[ii + 1][jj + 1] == currentPlayer
//                && GameMap[ii + 2][jj] == currentPlayer)
//                return true;
//        }
//
//    return false;
//}
//
//
//template <typename T>
//auto gameProcess(T* GameMap) -> void
//{
//    char currentPlayer;
//    // создаем случайность, какой игрок ходит первым
//    int diceRoll = rand() % 2 + 1;
//    if (diceRoll == 1)
//        currentPlayer = XPLAYERX;
//    else if (diceRoll == 2)
//        currentPlayer = OPLAYERO;
//
//    bool gameOver = false;// перменная отвечающая или за ничью или за победу
//    // одного из игроков
//    int emptyCells = 0; // количество заполненых на карте клеток игроками
//
//    while ((gameOver != true) && (emptyCells < LENGTH * LENGTH))
//    {
//        system("cls");
//        cout << "Ход игрока " << currentPlayer << ':' << endl;
//        consoleOutput(GameMap);// выводим на экран игрвую карту
//
//        int row, column;//строка, столбец
//        cout << "Введите номер строки (0-" << LENGTH - 1 << "): ";
//        cin >> row;
//        cout << "Введите номер столбца (0-" << LENGTH - 1 << "): ";
//        cin >> column;
//
//        // проверка, если игнрок ввел неправильное поле:
//        if (row < 0 || row >= LENGTH || column < 0 || column >= LENGTH
//            || GameMap[row][column] != EMPTINESS)
//        {
//            cout << "Недопустимый ход!" << endl;
//            system("pause");
//            continue;// выход из цикла
//        }
//
//        // присваиваем выбраному элементу матрицы крестик или нолик
//        // оно переводится в числовые значения 88 или 79
//        GameMap[row][column] = currentPlayer;
//        emptyCells++;// увеличиваем счетчик клеток на игрвой карте
//
//        // проверка на выишрышь одного из игроков:
//        if (disclosureOfResults(GameMap, currentPlayer) == true)
//        {
//            cout << "Игрок " << currentPlayer << " выиграл!" << std::endl;
//            gameOver = true;
//        }
//        else // Переключаем ход на другого игрока, если никто не выигграл
//            currentPlayer = (currentPlayer == OPLAYERO) ? XPLAYERX : OPLAYERO;
//    }
//
//
//    if (gameOver == false)// если никто не выиграл и клетки поля кончились 
//    {
//        system("cls");// еще раз ощищаем консоль
//        cout << "Ничья!" << endl;// то ничья
//    }
//
//    consoleOutput(GameMap);// вывод конечной карты на консоль
//}