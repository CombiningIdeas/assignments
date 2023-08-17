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
//	/* Задание 1. Даны два массива: А[M] и B[N] (M и N вводятся
//	с клавиатуры). Необходимо создать третий массив минимально
//	возможного размера, в котором нужно собрать
//	элементы массива A, которые не включаются в массив B,
//	без повторений. */
//
//	//int lengthM, lengthN;
//	cout << "Введите M - длинну массива А: ";
//	const int lengthM = 102;
//	cout << "Введите N - длинну массива B: ";
//	const int lengthN = 102;
//	int arrayA[1025], arrayB[1025];
//	//elementType * arrayB;//*resultArray, resultArray = new elementType[]
//	//try
//	//{
//	//	//arrayA = new elementType[lengthM + 1];// +1 так как в конце терминальный ноль
//	//	//arrayB = new elementType[lengthN + 1];
//	//}
//	//catch (const bad_alloc& exception)
//	//{
//	//	cerr << "Allocation failed: " << exception.what() << endl;
//	//	return 1;
//	//}
//	cout << "Массив А: " << endl;
//	arrayFilling(arrayA, lengthM);
//	outputConsole(arrayA, lengthM);
//	cout << endl;
//
//	cout << "Массив B: " << endl;
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


