//#include <iostream>
//#include <iomanip>
//#include <string>
//
//using namespace std;
//using elementType = string;
//
//template <typename T>
//auto Swap(T& a, T& b) -> void;
//
//template <typename T>
//auto arrayFilling(T* arrayFilling, const int LENGTH) -> void;
//
//template <typename T>
//auto outputConsole(T* OutputArray, const int LENGTH) -> void;
//
//template <typename T>
//void sortedSurname(T* array, int LENGTH);
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    /* ������� 1. �������� ���������, ������� ���� ������������ ������ 
//    5 ������� ���������, � ����� ��������� �� �� ����������� */
//
//
//    const int LENGTH = 5;
//
//    elementType* arrayStudents;
//    try
//    {
//        arrayStudents = new elementType[LENGTH];
//    }
//    catch (const std::bad_alloc&exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        return 1;
//    }
//
//    cout << "������� ������� ��������� �� ����������: " << endl;
//    // ��������� ������ ��������� ���������
//    arrayFilling(arrayStudents, LENGTH);
//
//    // ���������� ������� ���������
//    sortedSurname(arrayStudents, LENGTH);
//    cout << endl;
//
//    cout << "��������� ������� ��������� �� ��������: " << endl;
//    //������� ��������������� ������� ��������� �� �����
//    outputConsole(arrayStudents, LENGTH);
//
//    delete[] arrayStudents;
//    return 0;
//}
//
//template <typename T>
//auto Swap(T& a, T& b) -> void
//{
//    T tmp = a;
//    a = b;
//    b = tmp;
//}
//
//template <typename T>
//auto arrayFilling(T* arrayFilling, const int LENGTH) -> void
//{
//    for (int ii = 0; ii < LENGTH; ii++)
//    {
//        cout << "������� ������� �������� �" << ii + 1 << ": ";
//        getline(cin, arrayFilling[ii], '\n');
//    }
//}
//
//template <typename T>
//auto outputConsole(T* OutputArrray, const int LENGTH) -> void
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//        cout << setw(2) << "������� �" << ii + 1 << ": " << OutputArrray[ii] << endl;
//}
//
//template <typename T>
//void sortedSurname(T* array, int LENGTH)
//{
//    for (int ii = 0; ii < LENGTH - 1; ii++)
//        for (int jj = 0; jj < LENGTH - ii - 1; jj++)//���������� ���������� ���������
//            if (array[jj] > array[jj + 1])
//                Swap(array[jj], array[jj + 1]);
//}