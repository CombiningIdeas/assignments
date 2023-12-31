//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <conio.h>
//
//using namespace std;
//using elementType = int;
//
//const elementType LENGTH = 3; // ������ �������� ����
//
//// �������� ���������� ������� �� ��������:
//// vector <vector<int>> a(n, vector <int> (m)); -
//// ���������� ������� �� n ����� �� m ��������� 
//
//// ����� ���������� �� ������� �������:
//vector<elementType> oneDimensionalRightMap(LENGTH);
//vector<vector<elementType>> CompletedInOrderMap(LENGTH, oneDimensionalRightMap);
//
//// ������� �����, ������� ����� ������ ������������:
//vector<elementType> oneDimensionalGameMap(LENGTH);
//vector<vector<elementType>> GameMap(LENGTH, oneDimensionalGameMap);
//
//struct coordinate // ��������� ��������� �������� �������� ����������� � �������������
//{
//    int x;
//    int y;
//};
//coordinate zero; // �������� �������
//
//void createCompletedInOrderMap(); // ������� ����� ���������� �� ������� �������
//void createGameMap(); // �������� ������� ������� �����
//bool checkMap(); // ��������� ������� � ���������� ����� ��� ����������� ����� ����
//
//void upMove(); // ��� ����� (������� ������� ����)
//void downMove(); // ��� ���� (������� ������� �����)
//void rightMove(); // ��� ������ (������� ������� �����)
//void leftMove(); // ��� ����� (������� ������� ������)
//
//void getDirection(); // ���������� ������� ������� �������
//void screen(); // ������� ������ �� �����
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//
//    // �������� ������� ����:
//    createCompletedInOrderMap();
//    do
//    {
//        createGameMap();
//    } while (checkMap()); 
//    // ������ ���� ����� ��������� ����� �� ������ ��������� �����
//
//    // ���� ����:
//    do
//    {
//        screen();
//        getDirection();
//    } while (!checkMap());
//
//    // � ������ �������� ��� ��� ������ ��� �������� ������� ��������
//    system("cls");
//    cout << "���� ��������: " << endl;
//    for (int i = 0; i < LENGTH; i++)
//    {
//        for (int j = 0; j < LENGTH; j++)
//        {
//            if (GameMap[i][j] != 0)
//                cout << std::setw(3) << std::setfill('0') << GameMap[i][j] << ' ';
//            else
//                cout << "+-+ "; // ������� �������
//        }
//
//        cout << endl;
//    }
//
//    cout << "\n�� ��������!\n���� ���������!" << endl;
//
//    return 0;
//}
//
//
//
//void createCompletedInOrderMap() // ������� ����� ���������� �� ������� �������
//{
//    int rightVal = 1;
//    for (int ii = 0; ii < LENGTH; ii++)
//    {
//        for (int jj = 0; jj < LENGTH; jj++)
//            CompletedInOrderMap[ii][jj] = rightVal++;
//    }
//    CompletedInOrderMap[LENGTH - 1][LENGTH - 1] = 0; // ������� ������� � ������ ������ ����
//}
//
//void createGameMap() // �������� ������� ������� �����
//{
//    elementType SIZEARRAY = LENGTH * LENGTH;
//
//    // ��������� (������)������ �� �������� ����� ����� �������� 
//    // � ������� �����:
//    vector<elementType> tmp; 
//    for (int ii = 0; ii < SIZEARRAY; ii++)
//        tmp.push_back(ii);// ��������� ������ ������ ������
//
//    int val;
//    for (int ii = 0; ii < LENGTH; ii++)
//    {
//        for (int jj = 0; jj < LENGTH; jj++)
//        {
//            val = rand() % SIZEARRAY--; // ������� ����� � ������� �� 9 �� 1
//            GameMap[ii][jj] = tmp[val];// ���������� � ����� 
//            // ���� �� �������� �� �������
//
//            // ��������� ���������� �������� ��������:
//            if (tmp[val] == 0) 
//            {
//                zero.x = jj;
//                zero.y = ii;
//            }
//
//            tmp.erase(tmp.begin() + val);
//            // tmp.begin() - ������ �������
//            // val - ��� �� ��� �������� ���� ��������, 
//            // ������� ��� �� �������, ����� ��� �� ����������� �����
//        }
//    }
//}
//
//bool checkMap() // ��������� ������� � ���������� ����� ��� ����������� ����� ����
//{
//    if (GameMap == CompletedInOrderMap)
//        return true;
//    return false;
//}
//
//void upMove() // ��� ����� (������� ������� �����)
//{
//    if (zero.y < LENGTH - 1)
//    {
//        GameMap[zero.y][zero.x] = GameMap[zero.y + 1][zero.x];
//        zero.y++;
//        GameMap[zero.y][zero.x] = 0;
//    }
//}
//
//void downMove() // ��� ���� (������� ������� ����)
//{
//    if (zero.y > 0)
//    {
//        GameMap[zero.y][zero.x] = GameMap[zero.y - 1][zero.x];
//        zero.y--;
//        GameMap[zero.y][zero.x] = 0;
//        // �� ������� ������ ������� ������� � ������ ���������� �������� ��������
//        // � � �� ��� ���� ���������� ����. 
//        // ������� ��������� ����� ���������
//    }
//}
//
//void rightMove() // ��� ������ (������� ������� ������)
//{
//    if (zero.x > 0)
//    {
//        GameMap[zero.y][zero.x] = GameMap[zero.y][zero.x - 1];
//        zero.x--;
//        GameMap[zero.y][zero.x] = 0;
//    }
//}
//
//void leftMove() // ��� ����� (������� ������� �����)
//{
//    if (zero.x < LENGTH - 1)
//    {
//        GameMap[zero.y][zero.x] = GameMap[zero.y][zero.x + 1];
//        zero.x++;
//        GameMap[zero.y][zero.x] = 0;
//    }
//}
//
//void getDirection() // ���������� ������� ������� �������
//{
//    int move = static_cast<unsigned int> (_getch()); // ����� _getch() - 
//    // ��������� ������� ������ � ����������:
//    // ���� = 72, ����� = 80, ����� = 77, ������ = 75
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
//void screen() // ������� ������ �� �����
//{
//    system("cls");
//    cout << "���� ��������: " << endl;
//    for (int i = 0; i < LENGTH; i++)
//    {
//        for (int j = 0; j < LENGTH; j++)
//        {
//            if (GameMap[i][j] != 0)
//                cout << std::setw(3) << std::setfill('0') << GameMap[i][j] << ' ';
//            else
//                cout << "+-+ "; // ������� �������
//        }
//
//        cout << endl;
//    }
//}
