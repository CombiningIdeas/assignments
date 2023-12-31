//#include <iostream>
//
//using elementType = int;
//using namespace std;
//
//const int LENGTH = 4;// ������ �����
//
//const char XPLAYERX = 'X'; // �������
//const char OPLAYERO = 'O'; // �����
//const char EMPTINESS = '#'; // ������
//
//template <typename T> // ����� ������� ����� �� �������:
//auto consoleOutput(T* GameMap) -> void;
//
//
//template <typename T> // �������� �� �������� ������ �� �������:
//auto disclosureOfResults(T* GameMap, char currentPlayer) -> bool;
//
//template <typename T> // ������ ����:
//auto gameProcess(T* GameMap) -> void;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//
//    // ����� ��������� ������������ ������� ������ ����(����� ��� const):
//    // cout << "������� ������ �������� ����: ";
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
//    // ���������� ������� ������� ������
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
//        // char - ������ ��� �� �������� � ���������
//        cout << endl;
//    }
//}
//
//
//template <typename T>
//auto disclosureOfResults(T* GameMap, char currentPlayer) -> bool
//{
//    // ��������� ������ � �������:
//    // ������ ���� ��� ���� ����� ����� ���� �������� ����� ������� ����, 
//    // ������ �������
//    for (int ii = 0; ii < LENGTH; ii++)
//        for (int jj = 0; jj < LENGTH - 2; jj++)
//        {
//            if (GameMap[ii][jj] == currentPlayer && GameMap[ii][jj+1] == currentPlayer
//                && GameMap[ii][jj+2] == currentPlayer)
//                return true;
//            if (GameMap[jj][ii] == currentPlayer && GameMap[jj+1][ii] == currentPlayer
//                && GameMap[jj+2][ii] == currentPlayer)
//                return true;
//        }
//
//    // ��������� ���������
//    for (int ii = 0; ii < LENGTH - 2; ii++)
//        for (int jj = 0; jj < LENGTH - 2; jj++)
//        {
//            if (GameMap[ii][jj] == currentPlayer && GameMap[ii + 1][jj + 1] == currentPlayer
//                && GameMap[ii + 2][jj + 2] == currentPlayer)
//                return true;
//            if (GameMap[ii][jj + 2] == currentPlayer && GameMap[ii+1][jj+1] == currentPlayer
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
//    // ������� �����������, ����� ����� ����� ������
//    int diceRoll = rand() % 2 + 1;
//    if (diceRoll == 1)
//        currentPlayer = XPLAYERX;
//    else if (diceRoll == 2)
//        currentPlayer = OPLAYERO;
//
//    bool gameOver = false;// ��������� ���������� ��� �� ����� ��� �� ������
//    // ������ �� �������
//    int emptyCells = 0; // ���������� ���������� �� ����� ������ ��������
//
//    while ((gameOver != true) && (emptyCells < LENGTH * LENGTH))
//    {
//        system("cls");
//        cout << "��� ������ " << currentPlayer << ':' << endl;
//        consoleOutput(GameMap);// ������� �� ����� ������ �����
//
//        int row, column;//������, �������
//        cout << "������� ����� ������ (0-" << LENGTH - 1 << "): ";
//        cin >> row;
//        cout << "������� ����� ������� (0-" << LENGTH - 1 << "): ";
//        cin >> column;
//
//        // ��������, ���� ������ ���� ������������ ����:
//        if (row < 0 || row >= LENGTH || column < 0 || column >= LENGTH
//            || GameMap[row][column] != EMPTINESS)
//        {
//            cout << "������������ ���!" << endl;
//            system("pause");
//            continue;// ����� �� �����
//        }
//        
//        // ����������� ��������� �������� ������� ������� ��� �����
//        // ��� ����������� � �������� �������� 88 ��� 79
//        GameMap[row][column] = currentPlayer;
//        emptyCells++;// ����������� ������� ������ �� ������ �����
//
//        // �������� �� �������� ������ �� �������:
//        if (disclosureOfResults(GameMap, currentPlayer) == true)
//        {
//            cout << "����� " << currentPlayer << " �������!" << std::endl;
//            gameOver = true;
//        }
//        else // ����������� ��� �� ������� ������, ���� ����� �� ��������
//            currentPlayer = (currentPlayer == OPLAYERO) ? XPLAYERX : OPLAYERO;
//    }
//
//    
//    if (gameOver == false)// ���� ����� �� ������� � ������ ���� ��������� 
//    {
//        system("cls");// ��� ��� ������� �������
//        cout << "�����!" << endl;// �� �����
//    }
//
//    consoleOutput(GameMap);// ����� �������� ����� �� �������
//}