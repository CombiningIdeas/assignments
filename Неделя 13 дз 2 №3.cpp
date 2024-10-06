//#include <iostream>
//
//using namespace std;
//using elementType = int;
//
//const int BUFFER_SIZE = 1024;
//const int LENGTH = 10;
//
//template <typename T>
//auto outputConsole(T* Outputarray) -> void;
//
//template <typename T>
//auto arrayFilling(T* arrayFilling) -> void;
//
//template <typename T>
//auto copingAndReverseArray(T* array, T* copyArray) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* Задание 3. Используя два указателя на массивы целых
//	чисел, скопировать один массив в другой так, чтобы во
//	втором массиве элементы находились в обратном порядке.
//	Использовать в программе арифметику указателей
//	для продвижения по массиву, а также оператор разыменования. */
//
//	elementType* array, *copyArray;
//	try
//	{
//		array = new elementType[BUFFER_SIZE + 1];
//		copyArray = new elementType[BUFFER_SIZE + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		return 1;
//	}
//	
//
//	cout << "Изначальный массив: " << endl;
//	arrayFilling(array);
//	outputConsole(array);
//	cout << endl;
//
//	cout << "Скопированный и первернутый массив: " << endl;
//	copingAndReverseArray(array, copyArray);
//	outputConsole(copyArray);
//
//	delete[] array;
//	delete[] copyArray;
//	return 0;
//}
//
//template <typename T>
//auto arrayFilling(T* arrayFilling) -> void
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//		arrayFilling[ii] = rand() % 90 + 10;
//}
//
//
//template <typename T>
//auto outputConsole(T* Outputarray) -> void
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//		cout << Outputarray[ii] << ' ';
//}
//
//template <typename T>
//auto copingAndReverseArray(T* array, T* copyArray) -> void
//{
//	int* ptrBeginArray = array;
//	int* ptrEndArray = (array + LENGTH) - 1;
//
//	int* ptrBeginCopyArray = copyArray;
//	int* ptrEndCopyArray = (copyArray + LENGTH) - 1;
//
//	while (ptrBeginArray < ptrEndArray)
//	{
//		*ptrBeginCopyArray++ = *ptrEndArray--;
//		*ptrEndCopyArray-- = *ptrBeginArray++;
//	}
//}