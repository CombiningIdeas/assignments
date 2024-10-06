﻿//#include <iostream>
//#include <iomanip>
//
//using elementType = int;
//using namespace std;
//
//template <typename T>
//auto outputConsole(T** OutputMatrix, const int LENGTHROW,
//	const int LENGTHCOLOMN) -> void;
//
//template <typename T>
//auto arrayFilling(T** arrayFilling, const int LENGTHROW, 
//	const int LENGTHCOLOMN) -> void;
//
//template <typename T>
//auto addColomn(T** matrix, const int LENGTHROW,
//	const int LENGTHCOLOMN, int indexColomn) -> int**;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* Задание 1. Написать функцию, добавляющую столбец
//		двухмерному массиву в указанную позицию.*/
//
//	const int LENGTHROW = 4;
//	const int LENGTHCOLOMN = 4;
//
//
//	elementType** matrix;
//  try
//  {
//      matrix = new elementType * [LENGTHROW];
//
//		for (int ii = 0; ii < LENGTHROW; ii++)
//			matrix[ii] = new elementType[LENGTHCOLOMN];
//
//   }
//   catch (const std::bad_alloc&exception)
//   {
//       cerr << "Allocation failed: " << exception.what() << '\n';
//       return 1;
//   }
//
//	cout << "Матрица: " << endl;
//
//	arrayFilling(matrix, LENGTHROW, LENGTHCOLOMN);
//	outputConsole(matrix, LENGTHROW, LENGTHCOLOMN);
//
//	int indexColomn;
//	cout << "Укажите позицию в которую будет добавлен столец: ";
//	cin >> indexColomn;
//
//	if (indexColomn < 0 || indexColomn > LENGTHCOLOMN)
//	{
//		cerr << "Ошибка! Неверно введена позиция нового столбца";
//		return 1;
//	}
//
//	elementType** newMatrix = addColomn(matrix, LENGTHROW, LENGTHCOLOMN, indexColomn);
//
//
//	outputConsole(newMatrix, LENGTHROW, LENGTHCOLOMN + 1);
//
//
//	for (int ii = 0; ii < LENGTHROW; ii++)
//		delete[] newMatrix[ii];
//
//	delete[] newMatrix;
//	return 0;
//}
//
//template <typename T>
//auto arrayFilling(T** arrayFilling, const int LENGTHROW,
//	const int LENGTHCOLOMN) -> void
//{
//	for (int ii = 0; ii < LENGTHROW; ii++)
//		for (int jj = 0; jj < LENGTHCOLOMN; jj++)
//			arrayFilling[ii][jj] = rand() % 90 + 10;
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
//template <typename T>
//auto addColomn(T** matrix, const int LENGTHROW,
//	const int LENGTHCOLOMN, int indexColomn) -> int**
//{
//	elementType** newMatrix;
//	try
//	{
//		newMatrix = new elementType * [LENGTHROW];
//
//		for (int ii = 0; ii < LENGTHROW; ii++)
//			newMatrix[ii] = new elementType[LENGTHCOLOMN + 1];
//
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		exit(1);
//	}
//
//	int ii = 0;
//	for (; ii < LENGTHROW; ii++)
//		for (int jj = 0; jj < indexColomn; jj++)
//			newMatrix[ii][jj] = matrix[ii][jj];
//
//	for (ii = 0; ii < LENGTHROW; ii++)
//		for (int jj = indexColomn; jj < indexColomn + 1; jj++)
//			newMatrix[ii][jj] = 100;
//
//	for (int ii = 0; ii < LENGTHROW; ii++)
//		for (int jj = indexColomn + 1, gg = indexColomn; gg < LENGTHCOLOMN; jj++, gg++)
//			newMatrix[ii][jj] = matrix[ii][gg];
// 
// 	for (int ii = 0; ii < LENGTHROW; ii++)
//		delete[] matrix[ii];
//
//	delete[] matrix;
//	return newMatrix;
//}