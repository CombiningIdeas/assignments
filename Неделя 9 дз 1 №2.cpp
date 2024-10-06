//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ЗАДАНИЕ 2
//	/*Напишите программу, которая выполняет поэлементную
//	сумму двух массивов и результат заносит в третий массив.
//	Элементы массивов можно сгенерировать в произвольном
//	диапазоне.*/
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int LENGTH = 10;
//	int firstlArray[LENGTH];
//	int secondArray[LENGTH];
//	int resultArray[LENGTH];
//
//	cout << "Первый массив: ";
//	cout << endl;
//	for (int jj = 0; jj < LENGTH; jj++)
//	{
//		firstlArray[jj] = rand() % 21 - 10;
//		cout << firstlArray[jj] << ' ';
//	}
//	cout << endl;
//
//	cout << "Второй массив: ";
//	cout << endl;
//	for (int gg = 0; gg < LENGTH; gg++)
//	{
//		secondArray[gg] = rand() % 21 - 10;
//		cout << secondArray[gg] << ' ';
//	}
//	cout << endl;
//
//	cout << "Итоговый массив: ";
//	cout << endl;
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		resultArray[ii] = firstlArray[ii] + secondArray[ii];
//		cout << resultArray[ii] << ' ';
//	}
//	cout << endl;
//
//	return 0;
//}