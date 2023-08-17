//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//using elementType = int;
//
//auto dynamicMemoryAllocation(const int length) -> int*;
//
//template <typename T>
//auto fillingArray(T* fillingArray, const int length) -> void;
//
//template <typename T>
//auto outputArray(T* outputArray, const int length) -> void;
//
//template <typename T>
//auto deletingDynamicArray(T* array) -> void;
//
//template <typename T>
//auto addingAnElementToTheEnd(T* array, int addedElement, int &length) -> int*;
//
//template <typename T>
//auto insertElementAtSpecifiedIndex(T* array, int Index, 
//	int element, int &length) -> int*;
//
//template <typename T>
//auto deletingAnElementByIndex(T* array, int Index, int& length) -> int*;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* Задание 1. Написать следующие функции для работы
//	с динамическим массивом:
//	1) Функция распределения динамической памяти.
//	2) Функция инициализации динамического массива.
//	3) Функция печати динамического массива.
//	4) Функция удаления динамического массива.
//	5) Функция добавления элемента в конец массива.
//	6) Функция вставки элемента по указанному индексу.
//	7) Функция удаления элемента по указанному индексу. */
//
//	int length;
//	cout << "Введите длинну массива: ";
//	cin >> length;
//
//
//	// 1) Функция распределения динамической памяти:
//	cout << "1) Функция распределения динамической памяти, функция - dynamicMemoryAllocation():"
//		<< endl;
//	int *myArray = dynamicMemoryAllocation(length);
//	cout << endl;
//
//
//	// 2) Функция инициализации динамического массива:
//	cout << "2) Функция инициализации(заполнения) динамического массива, функция - fillingArray():" 
//		<< endl;
//	fillingArray(myArray, length);
//	cout << endl;
//
//
//	// 3) Функция печати динамического массива:
//	cout << "3) Функция печати динамического массива, функция - outputArray():" 
//		<< endl;
//	outputArray(myArray, length);
//	cout << endl << endl;
//
//
//	// 5) Функция добавления элемента в конец массива.
//	cout << "5) Функция добавления элемента в конец массива, функция - deletingDynamicArray():"
//		<< endl;
//	int addedElement;
//	cout << "Введите элемент который хотите добавить в конец массива: ";
//	cin >> addedElement;
//	myArray = addingAnElementToTheEnd(myArray, addedElement, length);
//	cout << endl;
//
//
//	// 6) Функция вставки элемента по указанному индексу.
//	cout << "6) Функция вставки элемента по указанному индексу. функция - insertElementAtSpecifiedIndex()"
//		<< endl;
//	int index;
//	cout << "Введите индекс на место которого хотите вставить новый элемент: ";
//	cin >> index;
//	cout << "Введите элемент хотите вставить: ";
//	cin >> addedElement;
//	myArray = insertElementAtSpecifiedIndex(myArray, index, addedElement, length);
//	cout << endl;
//
//
//	// 7) Функция удаления элемента по указанному индексу.
//	cout << "7) Функция удаления элемента по указанному индексу, функция - deletingAnElementByIndex()"
//		<< endl;
//	cout << "Введите индекс который хотите удалить: ";
//	cin >> index;
//	myArray = deletingAnElementByIndex(myArray, index, length);
//	cout << endl;
//
//
//	// 4) функция удаления динамического массива:
//	cout << "4) функция удаления динамического массива, функция - deletingDynamicArray():"
//		<< endl;
//	deletingDynamicArray(myArray);
//	cout << endl;
//
//	return 0;
//}
//
//auto dynamicMemoryAllocation(const int length) -> int*
//{
//	elementType* newArray;
//	try
//	{
//		newArray = new elementType[length + 1];// +1 так как в конце терминальный ноль
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		exit(1);
//	}
//
//
//	return newArray;
//}
//
//
//
//template <typename T>
//auto fillingArray(T* fillingArray, const int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//		fillingArray[ii] = rand() % 90 + 10;
//}
//
//
//template <typename T>
//auto outputArray(T* outputArray, const int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//		cout << setw(2) << ' ' << outputArray[ii];
//}
//
//template <typename T>
//auto deletingDynamicArray(T* array) -> void
//{
//	delete[] array;
//}
//
//template <typename T>
//auto addingAnElementToTheEnd(T* array, int addedElement, int& length) -> int*
//{
//	length++;
//	elementType* newArray;
//	try
//	{
//		newArray = new elementType[length + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		exit(1);
//	}
//	
//	for (int ii = 0; ii < length - 1; ii++)
//		newArray[ii] = array[ii];
//
//	newArray[length-1] = addedElement;
//
//	deletingDynamicArray(array);
//
//	outputArray(newArray, length);
//
//	return newArray;
//}
//
//template <typename T>
//auto insertElementAtSpecifiedIndex(T* array, int Index,
//	int element, int& length) -> int*
//{
//	length++;
//	elementType* newArray;
//	try
//	{
//		newArray = new elementType[length + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		exit(1);
//	}
//
//	int ii = 0;
//	for (;ii < Index; ii++)
//		newArray[ii] = array[ii];
//
//	int jj = ii;
//	newArray[ii++] = element;
//
//	for (; jj < length - 1; ii++, jj++)
//		newArray[ii] = array[jj];
//
//	deletingDynamicArray(array);
//
//	outputArray(newArray, length);
//
//	return newArray;
//}
//
//template <typename T>
//auto deletingAnElementByIndex(T* array, int Index, int& length) -> int*
//{
//	length--;
//	elementType* newArray;
//	try
//	{
//		newArray = new elementType[length + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		exit(1);
//	}
//
//	int ii = 0;
//	for (; ii < Index; ii++)
//		newArray[ii] = array[ii];
//
//	int jj = ii;
//	jj++;
//	for (; ii < length; ii++, jj++)
//		newArray[ii] = array[jj];
//
//	deletingDynamicArray(array);
//
//	outputArray(newArray, length);
//
//	return newArray;
//}