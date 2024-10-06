//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 2. 
//	/*Напишите программу, которая создает двухмерный массив и 
//	заполняет его по следующему принципу:
//	пользователь вводит число (например, 3) первый элемент
//	массива принимает значение этого числа, последующий
//	элемент массива принимает значение этого числа + 1 (т.е.
//	4 для нашего примера), третий элемент массива предыдущий элемент + 1 
//	(т.е. 5 для нашего примера). Созданный
//	массив вывести на экран.*/
//	cout << "Будет матрица 3 на 3:" << endl;
//	const int N_ROWS = 3, N_COLUMNS = 3;
//	int inputValue;
//	int matrix[N_ROWS][N_COLUMNS];
//
//	cout << "Введите первое число матрицы: ";
//	cin >> inputValue;
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//	{
//		for (int jj = 0; jj < N_COLUMNS; jj++)
//		{
//			matrix[ii][jj] = inputValue;
//			inputValue += 1;
//			cout << setw(6) << matrix[ii][jj];
//		}
//		
//		cout << endl;
//	}
//
//	return 0;
//}