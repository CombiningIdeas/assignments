//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// задание 1
//	/*написать программу, копирующую последовательно элементы
//	одного массива размером 10 элементов в 2 массива размером
//	5 элементов каждый.элементы первоначального массива можно
//	сгенерировать в произвольном диапазоне.*/
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int LENGTH = 10;
//	int initialArray[LENGTH];
//	cout << "Первоначальный массив: ";
//	cout << endl;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		initialArray[ii] = rand() % 21 - 10;
//		cout << initialArray[ii] << ' ';
//	}
//	cout << endl;
//
//	cout << "Первый массив(из двух): ";
//	cout << endl;
//	for(int jj = 0; jj < LENGTH / 2; jj++)
//		cout << initialArray[jj] << ' ';
//	cout << endl;
//
//	cout << "Второй массив(из двух) : ";
//	cout << endl;
//	for (int gg = LENGTH / 2; gg < LENGTH; gg++)
//		cout << initialArray[gg] << ' ';
//
//	return 0;
//
//}