//#include <iostream>
//
//using namespace std;
//using elementType = int;
//
//void outputConsole(int Outputarray[], const int LENGTH);
//
//void arrayFilling(int arrayFilling[], const int LENGTH);
//
//void removalOfPrimeNumbers(int array[], const int LENGTH);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* Задание 3. Написать функцию, которая получает указатель
//	на статический массив и его размер. Функция распределяет положительные, 
//	отрицательные и нулевые элементы в отдельные динамические массивы. */
//
//	const int LENGTH = 15;
//	int array[LENGTH];
//
//	arrayFilling(array, LENGTH);
//	outputConsole(array, LENGTH);
//	cout << endl;
//
//	removalOfPrimeNumbers(array, LENGTH);
//
//	return 0;
//}
//
//
//void outputConsole(int Outputarray[], const int LENGTH)
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//		cout << Outputarray[ii] << ' ';
//}
//
//void arrayFilling(int arrayFilling[], const int LENGTH)
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//		arrayFilling[ii] = rand() % 21 - 10;
//}
//
//
//void removalOfPrimeNumbers(int array[], int LENGTH)
//{
//	int positiveNumbersLength = 0;
//	for (int ii = 0; ii < LENGTH; ii++)
//		array[ii] > 0 ? positiveNumbersLength++ : positiveNumbersLength += 0;
//
//	int negativeNumbersLength = 0;
//	for (int ii = 0; ii < LENGTH; ii++)
//		array[ii] < 0 ? negativeNumbersLength++ : negativeNumbersLength += 0;
//
//	int zeroNumbersLength = 0;
//	for (int ii = 0; ii < LENGTH; ii++)
//		array[ii] == 0 ? zeroNumbersLength++ : zeroNumbersLength += 0;
//
//
//
//	elementType* newPositiveArray, * newNegativeArray, * newZeroArray;
//	try
//	{
//		newPositiveArray = new elementType[positiveNumbersLength + 1];
//		newNegativeArray = new elementType[negativeNumbersLength + 1];
//		newZeroArray = new elementType[zeroNumbersLength + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		exit(1);
//	}
//
//
//
//	int countPositiveNumbers = 0;
//	for (int ii = 0; ii < LENGTH; ii++)
//		array[ii] > 0 ? newPositiveArray[countPositiveNumbers++] = array[ii] : countPositiveNumbers += 0;
//
//	int  countNegativeNumbers = 0;
//	for (int ii = 0; ii < LENGTH; ii++)
//		array[ii] < 0 ? newNegativeArray[countNegativeNumbers++] = array[ii] : countNegativeNumbers += 0;
//
//	int  countZeroNumbers = 0;
//	for (int ii = 0; ii < LENGTH; ii++)
//		array[ii] == 0 ? newZeroArray[countZeroNumbers++] = array[ii] : countZeroNumbers += 0;
//
//	cout << "Массив с положительными числами: " << endl;
//	outputConsole(newPositiveArray, positiveNumbersLength);
//	cout << endl;
//
//	cout << "Массив с отрицательными числами: " << endl;
//	outputConsole(newNegativeArray, negativeNumbersLength);
//	cout << endl;
//
//	cout << "Массив с нулевыми числами: " << endl;
//	outputConsole(newZeroArray, zeroNumbersLength);
//	cout << endl;
//
//	delete[] newPositiveArray, newNegativeArray, newZeroArray;
//}
