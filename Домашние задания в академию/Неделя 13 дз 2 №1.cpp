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
//auto copingArray(T* array, T* copyArray) -> void;
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/*������� 1. ��������� ��� ��������� �� ������ �����
//	�����, ����������� ���� ������ � ������. ������������
//	� ��������� ���������� ���������� ��� �����������
//	�� �������, � ����� �������� �������������*/
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
//	cout << "������������� ������: " << endl;
//	copingArray(array, copyArray);
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
//auto copingArray(T* array, T* copyArray) -> void
//{
//	int* pointerArray = array;
//	int* pointerCopyArray = copyArray;
//
//	while (*pointerArray != '\0')
//		*pointerCopyArray++ = *pointerArray++;
//}