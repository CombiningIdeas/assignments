//#include <iostream>
//
//using namespace std;
//using elementType = int;
//
//const int BUFFER_SIZE = 1024;
//const int LENGTH = 9;
//
//template <typename T>
//inline auto Swap(T& a, T& b) -> void;
//
//template <typename T>
//auto outputConsole(T* Outputarray) -> void;
//
//template <typename T>
//auto arrayFilling(T* arrayFilling) -> void;
//
//template <typename T>
//auto reverseArray(T* array) -> void;
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* ������� 2. ��������� ��������� �� ������ ����� �����,
//	�������� ������� ���������� ��������� ������� �� ���������������.
//	������������ � ��������� ���������� ����������
//	��� ����������� �� �������, � ����� �������� ������������� */
//
//	elementType* array;
//	try
//	{
//		array = new elementType[BUFFER_SIZE + 1];
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
//	cout << "������������ ������: " << endl;
//	reverseArray(array);
//	outputConsole(array);
//
//	delete[] array;
//	return 0;
//}
//
//template <typename T>
//inline auto Swap(T& a, T& b) -> void
//{
//	T tmp = b;
//	b = a;
//	a = tmp;
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
//auto reverseArray(T* array) -> void
//{
//	int* ptrBegin = array;
//	int* ptrEnd = (array + LENGTH) - 1;
//
//	while (ptrBegin < ptrEnd)
//	{
//		Swap(*ptrBegin, *ptrEnd);
//		ptrBegin++, ptrEnd--;
//	}
//}