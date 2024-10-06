//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <conio.h>
//
//using namespace std;
//using elementType = int;
//
//const elementType LENGTH = 3; // размер игрового поля
//
//// создание двумерного вектора по принципу:
//// vector <vector<int>> a(n, vector <int> (m)); -
//// Объявление вектора на n строк по m элементов 
//
//// карта заполенная по порядку числами:
//vector<elementType> oneDimensionalRightMap(LENGTH);
//vector<vector<elementType>> CompletedInOrderMap(LENGTH, oneDimensionalRightMap);
//
//// игровая карта, которую будет видеть пользователь:
//vector<elementType> oneDimensionalGameMap(LENGTH);
//vector<vector<elementType>> GameMap(LENGTH, oneDimensionalGameMap);
//
//struct coordinate // хранилище координат нулевого элемента вертикально и горизонтально
//{
//    int x;
//    int y;
//};
//coordinate zero; // создание объекта
//
//void createCompletedInOrderMap(); // создаем карту заполенную по порядку числами
//void createGameMap(); // рандомно создаем игровую карту
//bool checkMap(); // сравнение игровой и правильной карты для определения конца игры
//
//void upMove(); // ход вверх (нулевой элемент вниз)
//void downMove(); // ход вниз (нулевой элемент вверх)
//void rightMove(); // ход вправо (нулевой элемент влево)
//void leftMove(); // ход влево (нулевой элемент вправо)
//
//void getDirection(); // определяем нажатую игроком стрелку
//void screen(); // выводим массив на экран
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//
//    // создание игровых карт:
//    createCompletedInOrderMap();
//    do
//    {
//        createGameMap();
//    } while (checkMap()); 
//    // делаем цикл чтобы создалась карта не равная начальной карте
//
//    // цикл игры:
//    do
//    {
//        screen();
//        getDirection();
//    } while (!checkMap());
//
//    // в случае выигрыша еще раз выводи уже конечную матрицу пятнашек
//    system("cls");
//    cout << "Игра пятнашки: " << endl;
//    for (int i = 0; i < LENGTH; i++)
//    {
//        for (int j = 0; j < LENGTH; j++)
//        {
//            if (GameMap[i][j] != 0)
//                cout << std::setw(3) << std::setfill('0') << GameMap[i][j] << ' ';
//            else
//                cout << "+-+ "; // нулевой элемент
//        }
//
//        cout << endl;
//    }
//
//    cout << "\nВы выиграли!\nИгра оконченна!" << endl;
//
//    return 0;
//}
//
//
//
//void createCompletedInOrderMap() // создаем карту заполенную по порядку числами
//{
//    int rightVal = 1;
//    for (int ii = 0; ii < LENGTH; ii++)
//    {
//        for (int jj = 0; jj < LENGTH; jj++)
//            CompletedInOrderMap[ii][jj] = rightVal++;
//    }
//    CompletedInOrderMap[LENGTH - 1][LENGTH - 1] = 0; // нулевой элемент в нижний правый угол
//}
//
//void createGameMap() // рандомно создаем игровую карту
//{
//    elementType SIZEARRAY = LENGTH * LENGTH;
//
//    // временный (вектор)массив из которого будем брать значения 
//    // в игровую карту:
//    vector<elementType> tmp; 
//    for (int ii = 0; ii < SIZEARRAY; ii++)
//        tmp.push_back(ii);// заполняем вектор чисами подряд
//
//    int val;
//    for (int ii = 0; ii < LENGTH; ii++)
//    {
//        for (int jj = 0; jj < LENGTH; jj++)
//        {
//            val = rand() % SIZEARRAY--; // создаем цифры в порядке от 9 до 1
//            GameMap[ii][jj] = tmp[val];// записываем в карту 
//            // одно из значений из вектора
//
//            // сохраняем координаты нулевого элемента:
//            if (tmp[val] == 0) 
//            {
//                zero.x = jj;
//                zero.y = ii;
//            }
//
//            tmp.erase(tmp.begin() + val);
//            // tmp.begin() - начало вектора
//            // val - это то где хранится само значение, 
//            // удаляем его из вектора, чтобы оно не повторялось потом
//        }
//    }
//}
//
//bool checkMap() // сравнение игровой и правильной карты для определения конца игры
//{
//    if (GameMap == CompletedInOrderMap)
//        return true;
//    return false;
//}
//
//void upMove() // ход вверх (нулевой элемент вверх)
//{
//    if (zero.y < LENGTH - 1)
//    {
//        GameMap[zero.y][zero.x] = GameMap[zero.y + 1][zero.x];
//        zero.y++;
//        GameMap[zero.y][zero.x] = 0;
//    }
//}
//
//void downMove() // ход вниз (нулевой элемент вниз)
//{
//    if (zero.y > 0)
//    {
//        GameMap[zero.y][zero.x] = GameMap[zero.y - 1][zero.x];
//        zero.y--;
//        GameMap[zero.y][zero.x] = 0;
//        // мы двигаем нулеой элемент поэтому в нижний записываем значение верхнего
//        // а в то что выше записываем ноль. 
//        // Изменяя коодинаты обоих элементов
//    }
//}
//
//void rightMove() // ход вправо (нулевой элемент вправо)
//{
//    if (zero.x > 0)
//    {
//        GameMap[zero.y][zero.x] = GameMap[zero.y][zero.x - 1];
//        zero.x--;
//        GameMap[zero.y][zero.x] = 0;
//    }
//}
//
//void leftMove() // ход влево (нулевой элемент влево)
//{
//    if (zero.x < LENGTH - 1)
//    {
//        GameMap[zero.y][zero.x] = GameMap[zero.y][zero.x + 1];
//        zero.x++;
//        GameMap[zero.y][zero.x] = 0;
//    }
//}
//
//void getDirection() // определяем нажатую игроком стрелку
//{
//    int move = static_cast<unsigned int> (_getch()); // метод _getch() - 
//    // считывает нажатую кнопку с клаиватуры:
//    // вниз = 72, вверх = 80, влево = 77, вправо = 75
//    switch (move)
//        {
//        case 72:
//        {
//            downMove();
//            break;
//        }
//        case 80:
//        {
//            upMove();
//            break;
//        }
//        case 77:
//        {
//            leftMove();
//            break;
//        }
//        case 75:
//        {
//            rightMove();
//            break;
//        }
//        default:
//        {
//            getDirection();
//        }
//    }
//}
//
//void screen() // выводим массив на экран
//{
//    system("cls");
//    cout << "Игра пятнашки: " << endl;
//    for (int i = 0; i < LENGTH; i++)
//    {
//        for (int j = 0; j < LENGTH; j++)
//        {
//            if (GameMap[i][j] != 0)
//                cout << std::setw(3) << std::setfill('0') << GameMap[i][j] << ' ';
//            else
//                cout << "+-+ "; // нулевой элемент
//        }
//
//        cout << endl;
//    }
//}
