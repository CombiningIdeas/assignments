//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 2. 
//	/*Задание 3. Создайте двухмерный массив. Заполните его
//	случайными числами и покажите на экран. Пользователь
//	выбирает количество сдвигов и положение (влево, вправо,
//	вверх, вниз). Выполнить сдвиг массива и показать на
//	экран полученный результат. Сдвиг циклический.
//	Например, если мы имеем следующий массив
//	1 2 0 4 5 3
//	4 5 3 9 0 1
//	и пользователь выбрал сдвиг на 2 разряда вправо, то мы
//	получим
//	5 3 1 2 0 4
//	0 1 4 5 3 9.*/
//	cout << "Будет матрица 4 на 4:" << endl;
//	srand(static_cast<unsigned int>(time(nullptr)));
//	const int N_ROWS = 4, N_COLUMNS = 4;
//	int matrix[N_ROWS][N_COLUMNS], choiceShift, shiftLength;
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//	{
//		for (int jj = 0; jj < N_COLUMNS; jj++)
//		{
//			matrix[ii][jj] = rand() % 10;
//			cout << setw(2) << matrix[ii][jj];
//		}
//		
//		cout << endl;
//	}
//
//	cout << "Выберете сдвиг: " << endl << "1 - впарво" << endl << "2 - влево"
//		<< endl << "3 - вниз" << endl << "4 - вверх" << endl;
//	cin >> choiceShift;
//	cout << "Выберет на сколько сдвиг:" << endl;
//	cin >> shiftLength;
//	int tmp;
//
//
//	switch (choiceShift)
//	{
//		case 1:
//			for (int yy = 0; yy < shiftLength; yy++)
//			{
//				for (int ii = 0; ii < N_ROWS; ii++)
//				{
//					tmp = matrix[ii][N_COLUMNS - 1];
//					for (int jj = 0; jj < N_COLUMNS - 1; jj++)
//						matrix[ii][N_COLUMNS - 1 - jj] =
//							matrix[ii][N_COLUMNS - 2 - jj];
//					matrix[ii][0] = tmp;
//				}
//			}
//
//			for (int ii = 0; ii < N_ROWS; ii++)
//			{
//				for (int jj = 0; jj < N_COLUMNS; jj++)
//				{
//					cout << setw(2) << matrix[ii][jj];
//				}
//
//				cout << endl;
//			}
//
//			break;
//
//
//		case 2:
//			for (int yy = 0; yy < shiftLength; yy++)
//			{
//				for (int ii = 0; ii < N_ROWS; ii++)
//				{
//					for (int jj = 0; jj < N_COLUMNS - 1; jj++)
//					{
//						tmp = matrix[ii][jj];
//						matrix[ii][jj] = matrix[ii][jj + 1];
//						matrix[ii][jj + 1] = tmp;
//					}
//				}
//			}
//
//			for (int ii = 0; ii < N_ROWS; ii++)
//			{
//				for (int jj = 0; jj < N_COLUMNS; jj++)
//				{
//					cout << setw(2) << matrix[ii][jj];
//				}
//
//				cout << endl;
//			}
//
//			break;
//
//		case 3:
//			for (int yy = 0; yy < shiftLength; yy++)
//			{
//				for (int ii = 0; ii < N_ROWS; ii++)
//				{
//					tmp = matrix[N_ROWS - 1][ii];
//					for (int jj = 0; jj < N_COLUMNS; jj++)
//					{
//						matrix[N_ROWS - jj][ii] =
//							matrix[N_ROWS - 1 - jj][ii];
//					}
//					matrix[0][ii] = tmp;
//				}
//			}
//
//			for (int ii = 0; ii < N_ROWS; ii++)
//			{
//				for (int jj = 0; jj < N_COLUMNS; jj++)
//				{
//					cout << setw(2) << matrix[ii][jj];
//				}
//
//				cout << endl;
//			}
//
//			break;
//
//
//		case 4:
//			for (int yy = 0; yy < shiftLength; yy++)
//			{
//				for (int ii = 0; ii < N_ROWS - 1; ii++)
//				{
//					for (int jj = -1; jj < N_COLUMNS - 1; jj++)
//					{
//						tmp = matrix[ii + 1][jj + 1];
//						matrix[ii + 1][jj + 1] = matrix[ii][jj + 1];
//						matrix[ii][jj + 1] = tmp;
//					}
//				}
//			}
//
//			for (int ii = 0; ii < N_ROWS; ii++)
//			{
//				for (int jj = 0; jj < N_COLUMNS; jj++)
//				{
//					cout << setw(2) << matrix[ii][jj];
//				}
//
//				cout << endl;
//			}
//
//			break;
//
//
//		default:
//			break;
//	}
//	
//
//
//	return 0;
//}