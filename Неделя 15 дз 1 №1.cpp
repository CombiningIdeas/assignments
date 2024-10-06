//#include <iostream>
//
//using namespace std;
//using elementType = int;
//
//template <typename T>
//auto findMax(T* array, const int LENGTH) -> double;
//
//template <typename T>
//auto findMin(T* array, const int LENGTH) -> double;
//
//template <typename T>
//auto findAvg(T* array, const int LENGTH) -> double;
//
//template <typename T>
//auto outputConsole(T* OutputArray, const int LENGTH) -> void;
//
//template <typename T>
//auto arrayFilling(T* arrayFilling, const int LENGTH) -> void;
//
//template <typename T>
//auto Action(T* arrayA, T* arrayB, const int LENGTHA, 
//	const int LENGTHB, double (*operation)(T*, int)) -> double;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	//system("chcp 1251");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* Задание 1. Написать программу, которая содержит функцию Action, 
//	принимающую в качестве аргумента, указатели на два массива (А и В) и 
//	размеры массивов, а также указатель на функцию. Пользователю отображается меню,
//	в котором он может выбрать max, min, avg. Если выбран max — передается указатель 
//	на функцию, которая ищет максимум, если выбран min — передается указатель 
//	на функцию, которая ищет минимум, если выбран avg — передается указатель на 
//	функцию, которая ищет среднее. Возвращаемое значение функции Action результат
//	выбора пользователя max, min, avg */
//
//	int lengthA, lengthB;
//	cout << "Введи размер массива А: ";
//	cin >> lengthA;
//	cout << "Введи размер массива B: ";
//	cin >> lengthB;
//
//	elementType* arrayA, *arrayB;
//	try
//	{
//		arrayA = new elementType[lengthA + 1];
//		arrayB = new elementType[lengthB + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		return 1;
//	}
//
//	cout << "Массив А: " << endl;
//	arrayFilling(arrayA, lengthA);
//	outputConsole(arrayA, lengthA);
//	cout << endl;
//
//	cout << "Массив B: " << endl;
//	arrayFilling(arrayB, lengthB);
//	outputConsole(arrayB, lengthB);
//	cout << endl << endl;
//
//	// Пользователю отображается меню,
//	// в котором он может выбрать max, min, avg
//
//	int choice;
//	cout << "Выберете одно из значений \n0 - max(максимуум);\n1 - min(минимум);\n2 - avg(среднее значение массива):\n";
//	cin >> choice;
//	double result;
//
//	switch (choice)
//	{
//		case 0:
//			result = Action(arrayA, arrayB, lengthA, lengthB, findMax);
//			break;
//		case 1:
//			result = Action(arrayA, arrayB, lengthA, lengthB, findMin);
//			break;
//		case 2:
//			result = Action(arrayA, arrayB, lengthA, lengthB, findAvg);
//			break;
//		default:
//			cout << "Некорректно выбрано значение! " << endl;
//			return 1;
//	}
//
//	cout << "Результат: " << result << endl;
//
//	delete[] arrayA, arrayB;
//	return 0;
//}
//
//template <typename T>
//auto outputConsole(T* OutputArray, const int LENGTH) -> void
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//		cout << OutputArray[ii] << ' ';
//}
//
//template <typename T>
//auto arrayFilling(T* arrayFilling, const int LENGTH) -> void
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//		arrayFilling[ii] = rand() % 9 + 1;
//}
//
//template <typename T>
//auto findMax(T* array, const int LENGTH) -> double
//{
//	int maxNum = array[0];
//	for (int ii = 0; ii < LENGTH; ii++)
//		if (array[ii] > maxNum)
//			maxNum = array[ii];
//
//	return maxNum;
//}
//
//template <typename T>
//auto findMin(T* array, const int LENGTH) -> double
//{
//	int minNum = array[0];
//	for (int ii = 0; ii < LENGTH; ii++)
//		if (array[ii] < minNum)
//			minNum = array[ii];
//
//	return minNum;
//}
//
//template <typename T>
//auto findAvg(T* array, const int LENGTH) -> double
//{
//	int sumNum = 0;
//	for (int ii = 0; ii < LENGTH; ii++)
//		sumNum += array[ii];
//
//	return (static_cast<double>(sumNum) / LENGTH);
//}
//
//
//template <typename T>
//auto Action(T* arrayA, T* arrayB, const int LENGTHA, 
//	const int LENGTHB, double (*operation)(T*, int)) -> double
//{
//	double resultA = operation(arrayA, LENGTHA);// передаем оба массива
//	double resultB = operation(arrayB, LENGTHB);
//
//	if (resultA == findAvg(arrayA, LENGTHA) && 
//		resultB == findAvg(arrayB, LENGTHB))// сравниваем
//	{
//		return ((resultA + resultB) / 2.0);
//	}
//	else if (resultA == findMax(arrayA, LENGTHA) && 
//		resultB == findMax(arrayB, LENGTHB))
//	{
//		if (resultA >= resultB)
//			return resultA;
//		else if (resultA < resultB)
//			return resultB;
//	}
//	else if (resultA == findMin(arrayA, LENGTHA) && 
//		resultB == findMin(arrayB, LENGTHB))
//	{
//		if (resultA <= resultB)
//			return resultA;
//		else if (resultA > resultB)
//			return resultB;
//	}
//
//}
