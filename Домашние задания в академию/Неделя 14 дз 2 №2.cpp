//#include <iostream>
//
//using namespace std;
//using elementType = int;
//
//template <typename T>
//auto outputConsole(T* Outputarray, const int length) -> void;
//
//template <typename T>
//auto arrayFilling(T* arrayFilling, const int length) -> void;
//
//template <typename T>
//auto removalOfPrimeNumbers(T* array, int& length) -> int*;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* ������� 2. �������� �������, ������� �������� ��������� �� 
//	������������ ������ � ��� ������. ������� ������ ������� �� ������� 
//	��� ������� ����� � ������� ��������� �� ����� ������������ ������. */
//
//	int length;
//	cout << "������� ������ ������������� �������: ";
//	cin >> length;
//
//	elementType* array;
//	try
//	{
//		array = new elementType[length + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		return 1;
//	}
//
//	arrayFilling(array, length);
//	outputConsole(array, length);
//	cout << endl;
//	
//	int* newArray = removalOfPrimeNumbers(array, length);
//
//	outputConsole(newArray, length);
//
//	delete[] newArray;
//	return 0;
//}
//
//template <typename T>
//auto outputConsole(T* Outputarray, const int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//		cout << Outputarray[ii] << ' ';
//}
//
//template <typename T>
//auto arrayFilling(T* arrayFilling, const int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//		arrayFilling[ii] = rand() % 9 + 1;
//}
//
//
//template <typename T>
//auto removalOfPrimeNumbers(T* array, int& length) -> int*
//{
//	int newLength = 0;
//	for (int ii = 0; ii < length; ii++)
//	{
//		int k = 2;
//		while ((k * k <= array[ii]) && (array[ii] % k != 0))
//			k += 1;
//
//		// ������ ������ ������� ���� ��� ������� ���������:
//		if ((k * k > array[ii]) == false)
//			newLength++;
//
//	}
//	cout << "������ ������ �������: " << newLength <<  endl;
//
//	elementType* newArray;
//	try
//	{
//		newArray = new elementType[newLength + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		exit(1);
//	}
//
//	int countLength = 0;
//	for (int ii = 0; ii < length; ii++)
//	{
//		int k = 2;
//		while ((k * k <= array[ii]) && (array[ii] % k != 0))
//			k += 1;
//
//		if ((k * k > array[ii]) == false)
//			newArray[countLength++] = array[ii];
//
//	}
//
//	length = newLength;
//
//	delete[] array;
//
//	return newArray;
//}
