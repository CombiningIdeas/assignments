//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//using elementType = int;
//
//template <typename T>
//auto outputConsole(T** OutputMatrix, const int LENGTHROW,
//	const int LENGTHCOLOMN) -> void;
//
//template <typename T>
//auto matrixFilling(T** matrixFilling, const int LENGTHROW,
//	const int LENGTHCOLOMN) -> void;
//
//template <typename T>
//auto matrixTransposition(T** matrix, const int LENGTHROW,
//    const int LENGTHCOLOMN) -> void;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    /* Задание 1. Транспонирование матрицы — это операция, после 
//    которой столбцы прежней матрицы становятся строками, а строки столбцами. 
//    Напишите функцию транспонирования матрицы. */
//    int lengthRow, lengthColomon;
//
//    cout << "Введите количество строк матрицы: ";
//    cin >> lengthRow;
//
//    cout << "Введите количество столбцов матрицы: ";
//    cin >> lengthColomon;
//
//    elementType** matrix;
//    try
//    {
//        matrix = new elementType * [lengthRow];
//
//		for (int ii = 0; ii < lengthRow; ii++)
//            matrix[ii] = new elementType[lengthColomon];
//    }
//    catch (const std::bad_alloc&exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        return 1;
//    }
//    
//    cout << "Матрица: " << endl;
//
//    matrixFilling(matrix, lengthRow, lengthColomon);
//	outputConsole(matrix, lengthRow, lengthColomon);
//
//    matrixTransposition(matrix, lengthRow, lengthColomon);
//
//    for (int ii = 0; ii < lengthRow; ii++)
//        delete[] matrix[ii];
//
//    delete[] matrix;
//
//    return 0;
//}
//
//
//template <typename T>
//auto matrixFilling(T** matrixFilling, const int LENGTHROW,
//    const int LENGTHCOLOMN) -> void
//{
//	for (int ii = 0; ii < LENGTHROW; ii++)
//		for (int jj = 0; jj < LENGTHCOLOMN; jj++)
//            matrixFilling[ii][jj] = rand() % 90 + 10;
//}
//
//
//template <typename T>
//auto outputConsole(T** OutputMatrix, const int LENGTHROW,
//	const int LENGTHCOLOMN) -> void
//{
//	for (int ii = 0; ii < LENGTHROW; ii++)
//	{
//		for (int jj = 0; jj < LENGTHCOLOMN; jj++)
//			cout << setw(2) << ' ' << OutputMatrix[ii][jj];
//
//		cout << endl;
//	}
//}
//
//
//template <typename T>
//auto matrixTransposition(T** matrix, const int LENGTHROW,
//    const int LENGTHCOLOMN) -> void
//{
//    elementType** matrixTransposition;
//    try
//    {
//        matrixTransposition = new elementType * [LENGTHCOLOMN];
//
//        for (int ii = 0; ii < LENGTHCOLOMN; ii++)
//            matrixTransposition[ii] = new elementType[LENGTHROW];
//    }
//    catch (const std::bad_alloc& exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        exit(1);
//    }
//
//    for (int ii = 0; ii < LENGTHROW; ii++)
//        for (int jj = 0; jj < LENGTHCOLOMN; jj++)
//            matrixTransposition[jj][ii] = matrix[ii][jj];
//
//
//    cout << "Транспонированная матрица:" << endl;
//
//    outputConsole(matrixTransposition, LENGTHCOLOMN, LENGTHROW);
//
//    for (int i = 0; i < LENGTHCOLOMN; i++)
//        delete[] matrixTransposition[i];
//
//    delete[] matrixTransposition;
//}