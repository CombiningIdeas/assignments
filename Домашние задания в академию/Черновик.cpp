//#include <iostream>
//
//using namespace std;
//using elementType = int;
//
//
//auto outputConsole(int Outputarray[], const int length) -> void;
//
//
//auto arrayFilling(int arrayFilling[], const int length) -> void;
//
////template <typename T>
////auto notRepeatingAnElement(T* arrayA, T* arrayB) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* ������� 1. ���� ��� �������: �[M] � B[N] (M � N ��������
//	� ����������). ���������� ������� ������ ������ ����������
//	���������� �������, � ������� ����� �������
//	�������� ������� A, ������� �� ���������� � ������ B,
//	��� ����������. */
//
//	//int lengthM, lengthN;
//	cout << "������� M - ������ ������� �: ";
//	const int lengthM = 102;
//	cout << "������� N - ������ ������� B: ";
//	const int lengthN = 102;
//	int arrayA[1025], arrayB[1025];
//	//elementType * arrayB;//*resultArray, resultArray = new elementType[]
//	//try
//	//{
//	//	//arrayA = new elementType[lengthM + 1];// +1 ��� ��� � ����� ������������ ����
//	//	//arrayB = new elementType[lengthN + 1];
//	//}
//	//catch (const bad_alloc& exception)
//	//{
//	//	cerr << "Allocation failed: " << exception.what() << endl;
//	//	return 1;
//	//}
//	cout << "������ �: " << endl;
//	arrayFilling(arrayA, lengthM);
//	outputConsole(arrayA, lengthM);
//	cout << endl;
//
//	cout << "������ B: " << endl;
//	arrayFilling(arrayB, lengthN);
//	outputConsole(arrayB, lengthN);
//	cout << endl;
//
//
//	//notRepeatingAnElement(arrayA, arrayB);
//
//
//
//	//delete[] arrayA, arrayB;
//	return 0;
//}
//
//auto outputConsole(int Outputarray[], const int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//		cout << Outputarray[ii] << ' ';
//}
//
//
//auto arrayFilling(int arrayFilling[], const int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//		arrayFilling[ii] = rand() % 90 + 10;
//}
//
////template <typename T>
////auto notRepeatingAnElement(T* arrayA, T* arrayB) -> void
////{
////
////
////
////}


