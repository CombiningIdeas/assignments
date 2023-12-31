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
//	/* ������� 3. ��������� ��� ��������� �� ������� �����
//	�����, ����������� ���� ������ � ������ ���, ����� ��
//	������ ������� �������� ���������� � �������� �������.
//	������������ � ��������� ���������� ����������
//	��� ����������� �� �������, � ����� �������� �������������. */
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
//	cout << "����������� ������: " << endl;
//	arrayFilling(array);
//	outputConsole(array);
//	cout << endl;
//
//	cout << "������������� � ����������� ������: " << endl;
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