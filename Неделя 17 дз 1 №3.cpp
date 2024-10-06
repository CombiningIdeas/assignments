//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//using elementType = int;
//
//template <typename T>
//auto Swap(T& a, T& b) -> void;
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
//auto cycliSchift(T** matrix, const int LENGTHROW,
//	const int LENGTHCOLOMN, int choiceShift, int shiftLength) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* Задание 3. Дана матрица порядка M×N (M строк, N столбцов). Необходимо 
//	заполнить ее значениями и написать функцию, осуществляющую циклический сдвиг 
//	строк и/или столбцов массива указанное количество раз и в указанную сторону */
//
//
//	const int LENGTHROW = 4;
//	const int LENGTHCOLOMN = 4;
//	
//	elementType** matrix;
//	try
//	{
//		matrix = new elementType * [LENGTHROW];
//
//		for (int ii = 0; ii < LENGTHROW; ii++)
//			matrix[ii] = new elementType[LENGTHCOLOMN];
//
//    }
//    catch (const std::bad_alloc&exception)
//    {
//		cerr << "Allocation failed: " << exception.what() << '\n';
//        return 1;
//    }
//
//	arrayFilling(matrix, LENGTHROW, LENGTHCOLOMN);
//	outputConsole(matrix, LENGTHROW, LENGTHCOLOMN);
//	while (true) 
//	{
//		int choiceShift, shiftLength;
//		int choice;
//		cout << "Выберете сдвиг стобцов - 1 или строк - 2 или прекратить сдвиги - 0: ";
//		cin >> choice;
//		if (choice == 0)
//			break;
//		else if (choice == 1)
//		{
//			cout << "Выберете сдвиг: " << endl << "1 - впарво" << endl << "2 - влево"
//				<< endl << "3 - вниз" << endl << "4 - вверх" << endl;
//			cin >> choiceShift;
//			if (choiceShift < 1 || choiceShift > 4)
//			{
//				cerr << "Ошибка! нерпаильно введено значение! Попробуйте снова" << endl;
//				continue;
//			}
//			cout << "Выберет на сколько сдвиг:" << endl;
//			cin >> shiftLength;
//
//		}
//		else if (choice == 2)
//		{
//			cout << "Выберете сдвиг: " << endl << "1 - впарво" << endl << "2 - влево"
//				<< endl << "3 - вниз" << endl << "4 - вверх" << endl;
//			cin >> choiceShift;
//			if (choiceShift < 1 || choiceShift > 4)
//			{
//				cerr << "Ошибка! нерпаильно введено значение! Попробуйте снова" << endl;
//				continue;
//			}
//			cout << "Выберет на сколько сдвиг:" << endl;
//			cin >> shiftLength;
//
//		}
//		else
//		{
//			cerr << "Ошибка! нерпаильно введено значение! Попробуйте снова" << endl;
//			continue;
//		}
//
//		cycliSchift(matrix, LENGTHROW, LENGTHCOLOMN, choiceShift, shiftLength);
//	}
//
//	for (int ii = 0; ii < LENGTHROW; ii++)
//		delete[] matrix[ii];
//
//	delete[] matrix;
//
//
//	return 0;
//}
//
//template <typename T>
//auto Swap(T& a, T& b) -> void
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
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
//auto cycliSchift(T** matrix, const int LENGTHROW,
//	const int LENGTHCOLOMN, int choiceShift, int shiftLength) -> void
//{
//	if (shiftLength == 1 || shiftLength == 2)
//	{
//		if (shiftLength % LENGTHROW == 0)
//			shiftLength = 0;
//		else
//			for (int ii = shiftLength; ii > LENGTHROW; ii - LENGTHROW)
//				shiftLength = ii;
//	}
//	else if (shiftLength == 3 || shiftLength == 4)
//	{
//		if (shiftLength % LENGTHCOLOMN == 0)
//			shiftLength = 0;
//		else
//			for (int ii = shiftLength; ii > LENGTHCOLOMN; ii - LENGTHCOLOMN)
//				shiftLength = ii;
//	}
//
//	int tmp;
//
//	switch (choiceShift)
//	{
//		case 1:
//			for (int yy = 0; yy < shiftLength; yy++)
//			{
//				for (int ii = 0; ii < LENGTHROW; ii++)
//				{
//					tmp = matrix[ii][LENGTHCOLOMN - 1];
//					for (int jj = 0; jj < LENGTHCOLOMN - 1; jj++)
//						matrix[ii][LENGTHCOLOMN - 1 - jj] =
//						matrix[ii][LENGTHCOLOMN - 2 - jj];
//					matrix[ii][0] = tmp;
//				}
//			}
//
//			outputConsole(matrix, LENGTHROW, LENGTHCOLOMN);
//
//			break;
//
//		case 2:
//			for (int yy = 0; yy < shiftLength; yy++)
//				for (int ii = 0; ii < LENGTHROW; ii++)
//					for (int jj = 0; jj < LENGTHCOLOMN - 1; jj++)
//						Swap(matrix[ii][jj], matrix[ii][jj + 1]);
//
//			outputConsole(matrix, LENGTHROW, LENGTHCOLOMN);
//
//			break;
//
//		case 3:
//			for (int yy = 0; yy < shiftLength; yy++)
//				for (int ii = 0; ii < LENGTHROW; ii++)
//				{
//					tmp = matrix[LENGTHROW - 1][ii];
//					for (int jj = 0; jj < LENGTHCOLOMN; jj++)
//					{
//						matrix[LENGTHROW - jj][ii] =
//						matrix[LENGTHROW - 1 - jj][ii];
//					}
//					matrix[0][ii] = tmp;
//				}
//
//			outputConsole(matrix, LENGTHROW, LENGTHCOLOMN);
//
//			break;
//
//		case 4:
//			for (int yy = 0; yy < shiftLength; yy++)
//				for (int ii = 0; ii < LENGTHROW - 1; ii++)
//					for (int jj = -1; jj < LENGTHCOLOMN - 1; jj++)
//						Swap(matrix[ii + 1][jj + 1], matrix[ii][jj + 1]);
//
//			outputConsole(matrix, LENGTHROW, LENGTHCOLOMN);
//
//			break;
//
//		default:
//			break;
//	}
//}