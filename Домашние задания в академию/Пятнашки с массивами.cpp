//#include <iostream>
//#include <iomanip>
//#include <conio.h>
//
//using namespace std;
//using elementType = int;
//
//const elementType LENGTH = 3; // ������ �������� ����
//
//struct coordinate // ��������� ��������� �������� �������� ����������� � �������������
//{
//    int x;
//    int y;
//};
//coordinate zeroIndex; // �������� �������
//
//void createCompletedInOrderMap(int** CompletedInOrderMap); // ������� ����� ���������� �� ������� �������
//void createGameMap(int** GameMap); // �������� ������� ������� �����
//bool checkMap(int **CompletedInOrderMap, int **GameMap); // ��������� ������� � ���������� ����� ��� ����������� ����� ����
//
//void upMove(int** GameMap); // ��� ����� (������� ������� ����)
//void downMove(int** GameMap); // ��� ���� (������� ������� �����)
//void rightMove(int** GameMap); // ��� ������ (������� ������� �����)
//void leftMove(int** GameMap); // ��� ����� (������� ������� ������)
//
//void getDirection(int** GameMap); // ���������� ������� ������� �������
//void screen(int** GameMap); // ������� ������ �� �����
//
//void coprArray(int *array1, int* array2, int whichElement, int lenght);
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//    // �������� ���� ���������.
// 
//    elementType** CompletedInOrderMap;
//    elementType** GameMap;
//    try
//    {
//        CompletedInOrderMap = new elementType * [LENGTH];
// 
//        for (int ii = 0; ii < LENGTH; ii++)
//             CompletedInOrderMap[ii] = new elementType[LENGTH];
// 
// 
//        GameMap = new elementType * [LENGTH];
// 
//        for (int ii = 0; ii < LENGTH; ii++)
//             GameMap[ii] = new elementType[LENGTH];
//    }
//    catch (const std::bad_alloc&exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        return 1;
//    }
//
//    // CompletedInOrderMap, oneDimensionalRightMap
//    // GameMap, oneDimensionalGameMap
//
//
//
//    // �������� ������� ����:
//    createCompletedInOrderMap(CompletedInOrderMap);
//    do
//    {
//        createGameMap(GameMap);
//    } while (checkMap(CompletedInOrderMap, GameMap));
//    // ������ ���� ����� ��������� ����� �� ������ ��������� �����
//
//    // ���� ����:
//    do
//    {
//        screen(GameMap);
//        getDirection(GameMap);
//    } while (!checkMap(CompletedInOrderMap, GameMap));
//
//    // � ������ �������� ��� ��� ������ ��� �������� ������� ��������
//    system("cls");
//    cout << "���� ��������: " << endl;
//    for (int ii = 0; ii < LENGTH; ii++)
//    {
//        for (int jj = 0; jj < LENGTH; jj++)
//        {
//            if (GameMap[ii][jj] != 0)
//                cout << std::setw(3) << std::setfill('0') << GameMap[ii][jj] << ' ';
//            else
//                cout << "+-+ "; // ������� �������
//        }
//
//        cout << endl;
//    }
//
//    cout << "\n�� ��������!\n���� ���������!" << endl;
//
//    for (int ii = 0; ii < LENGTH; ii++)
//        delete[] CompletedInOrderMap[ii];
//
//    for (int ii = 0; ii < LENGTH; ii++)
//        delete[] GameMap[ii] ;
//
//    delete[] CompletedInOrderMap;
//    delete[] GameMap;
//    return 0;
//}
//
//void coprArray(int* array1, int* array2, int whichElement, int lenght)
//{
//    int ii = 0;
//    for (; ii < array2[whichElement]; ii++)
//        array2[ii] = array1[ii];
//
//    ii+=2;
//    for (; ii < lenght; ii++)
//        array2[ii] = array1[ii];
//
//    for (int jj = 0; jj < lenght - 1; jj++)
//        array1[ii] = array2[ii];
//
//}
//
//void createCompletedInOrderMap(int** CompletedInOrderMap) // ������� ����� ���������� �� ������� �������
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
//void createGameMap(int** GameMap) // �������� ������� ������� �����
//{
//    elementType SIZEARRAY = LENGTH * LENGTH;
//    elementType SIZEARRAY2 = LENGTH * LENGTH;
//
//    elementType* withoutRepetition;
//    elementType* tmp;
//    elementType* copyTmp;
//    try
//    {
//        tmp = new elementType[SIZEARRAY];
//        copyTmp = new elementType[SIZEARRAY];
//        withoutRepetition = new elementType[SIZEARRAY];
//    }
//    catch (const std::bad_alloc& exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        exit(1);
//    }
//
//    for (int ii = 0; ii < SIZEARRAY2; ii++)
//        tmp[ii] = ii;// ��������� ������������� ������ ������ ������
//    int counter = 0;
//    int val;
//    for (int ii = 0; ii < LENGTH; ii++)
//    {
//        for (int jj = 0; jj < LENGTH; jj++)
//        {
//            int count = 0;
//            do
//            {
//                count = 0;
//                val = rand() % SIZEARRAY2; // ������� ����� � ������� �� 8 �� 0
//
//                // �������� �� ���������� ����� � ������ ������ ������ �����:
//                for (int ll = 0; ll < counter; ll++)
//                    if (val == withoutRepetition[ll])
//                        count += 1;
//            } while (count != 0);
//
//            if (count == 0)
//            {
//                GameMap[ii][jj] = tmp[val]; // ���������� � ����� 
//                // ���� �� �������� �� �������
//                withoutRepetition[counter++] = tmp[val];
//            }
//            
//
//            // ��������� ���������� �������� ��������:
//            if (tmp[val] == 0) 
//            {
//                zeroIndex.x = jj;
//                zeroIndex.y = ii;
//            }
//            coprArray(tmp, copyTmp, val, SIZEARRAY);
//            SIZEARRAY--;
//        }
//    }
//    delete[] tmp;
//    delete[] copyTmp;
//}
//
//bool checkMap(int** CompletedInOrderMap, int** GameMap) // ��������� ������� � ���������� ����� ��� ����������� ����� ����
//{
//    int counter = 0;
//    for (int ii = 0; ii < LENGTH; ii++)
//        for (int jj = 0; jj < LENGTH; jj++)
//            if (CompletedInOrderMap[ii][jj] != GameMap[ii][jj])
//                counter += 1;
//
//    if (counter == 0)
//        return true;
//    else
//        return false;
//}
//
//void upMove(int** GameMap) // ��� ����� (������� ������� �����)
//{
//    if (zeroIndex.y < LENGTH - 1)
//    {
//        GameMap[zeroIndex.y][zeroIndex.x] = GameMap[zeroIndex.y + 1][zeroIndex.x];
//        zeroIndex.y++;
//        GameMap[zeroIndex.y][zeroIndex.x] = 0;
//    }
//}
//
//void downMove(int** GameMap) // ��� ���� (������� ������� ����)
//{
//    if (zeroIndex.y > 0)
//    {
//        GameMap[zeroIndex.y][zeroIndex.x] = GameMap[zeroIndex.y - 1][zeroIndex.x];
//        zeroIndex.y--;
//        GameMap[zeroIndex.y][zeroIndex.x] = 0;
//        // �� ������� ������ ������� ������� � ������ ���������� �������� ��������
//        // � � �� ��� ���� ���������� ����. 
//        // ������� ��������� ����� ���������
//    }
//}
//
//void rightMove(int** GameMap) // ��� ������ (������� ������� ������)
//{
//    if (zeroIndex.x > 0)
//    {
//        GameMap[zeroIndex.y][zeroIndex.x] = GameMap[zeroIndex.y][zeroIndex.x - 1];
//        zeroIndex.x--;
//        GameMap[zeroIndex.y][zeroIndex.x] = 0;
//    }
//}
//
//void leftMove(int** GameMap) // ��� ����� (������� ������� �����)
//{
//    if (zeroIndex.x < LENGTH - 1)
//    {
//        GameMap[zeroIndex.y][zeroIndex.x] = GameMap[zeroIndex.y][zeroIndex.x + 1];
//        zeroIndex.x++;
//        GameMap[zeroIndex.y][zeroIndex.x] = 0;
//    }
//}
//
//void getDirection(int** GameMap) // ���������� ������� ������� �������
//{
//    int move = static_cast<int> (_getch()); // ����� _getch() - 
//    // ��������� ������� ������ � ����������:
//    // ���� = 72, ����� = 80, ����� = 77, ������ = 75
//    switch (move)
//        {
//        case 72:
//        {
//            downMove(GameMap);
//            break;
//        }
//        case 80:
//        {
//            upMove(GameMap);
//            break;
//        }
//        case 77:
//        {
//            leftMove(GameMap);
//            break;
//        }
//        case 75:
//        {
//            rightMove(GameMap);
//            break;
//        }
//        default:
//        {
//            getDirection(GameMap);
//        }
//    }
//}
//
//void screen(int** GameMap) // ������� ������ �� �����
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
