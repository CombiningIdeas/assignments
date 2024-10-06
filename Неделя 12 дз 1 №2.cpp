//#include <iostream>
//using namespace std;
//
//int ArithmeticMean(int createdArray[], const int LENGTH)
//{
//	int arithmeticMeanSum = 0;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		arithmeticMeanSum += createdArray[ii];
//
//	return arithmeticMeanSum;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 2. 
//	/* Написать функцию, определяющую среднее
//	арифметическое элементов передаваемого ей массива.*/
//	srand(static_cast<unsigned int>(time(nullptr)));
//	const int LENGTH = 10;
//	int createdArray[LENGTH];
//
//	cout << "Дан массив:" << endl;
//	for (int& ii : createdArray)// & - позволяет изменять массив, без & в массив не будут записываться числа
//	{
//		ii = rand() % 101 - 50;
//		cout << ii << ' ';
//	}
//	cout << endl;
//
//	cout << "Средне арифметическое массива: " << ArithmeticMean(createdArray, LENGTH);
//
//	return 0;
//}