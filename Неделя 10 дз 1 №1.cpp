//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 1. 
//	/*Напишите программу, которая создает двухмерный массив и заполняет его по следующему принципу :
//	пользователь вводит число(например, 3) первый элемент
//	массива принимает значение этого числа, последующий элемент массива 
//	принимает значение этого числа
//	умноженного на 2 (т.е. 6 для нашего примера), третий
//	элемент массива предыдущий элемент умноженный на
//	2 (т.е. 6 * 2 = 12 для нашего примера).Созданный массив
//	вывести на экран.*/
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
//			inputValue = inputValue * 2;
//			cout << setw(6) << matrix[ii][jj];
//		}
//		
//		cout << endl;
//	}
//
//	return 0;
//}