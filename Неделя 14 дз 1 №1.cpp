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
//auto notRepeatingAnElement(T* arrayA, T* arrayB, const int lengthM, const int lengthN) -> void;
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
//	int lengthM, lengthN;
//	cout << "Введите M - длинну массива А: ";
//	cin >> lengthM;
//	cout << "Введите N - длинну массива B: ";
//	cin >> lengthN;
//
//	elementType* arrayA, * arrayB;
//	try
//	{
//		arrayA = new elementType[lengthM + 1];// +1 так как в конце терминальный ноль
//		arrayB = new elementType[lengthN + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		return 1;
//	}
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
//	cout << "Третий массив без элементов из массива B и без повторений: " << endl;
//	notRepeatingAnElement(arrayA, arrayB, lengthM, lengthN);
//
//
//
//	delete[] arrayA, arrayB;
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
//template <typename T>
//auto notRepeatingAnElement(T* arrayA, T* arrayB, const int lengthM, const int lengthN) -> void
//{
//	// считаем длинну массива А если убрать от туда элементы из массива В
//	int count0 = 0, lengthNoRepeatArrayA = 0;
//	for (int ii = 0; ii < lengthM; ii++)
//	{
//		for (int jj = 0; jj < lengthN; jj++)
//			if (arrayA[ii] == arrayB[jj])
//				count0 = 1;
//
//		if (count0 == 0)
//			lengthNoRepeatArrayA++;
//
//		count0 = 0;
//	}
//	
//	elementType* CoppytArrayA;// создаем массив где нет элементов из массива В
//	try
//	{
//		CoppytArrayA = new elementType[lengthNoRepeatArrayA + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		exit(1);
//	}
//
//	int count1 = 0, count2 = 0;
//	for (int ii = 0; ii < lengthM; ii++)
//	{
//		for (int jj = 0; jj < lengthN; jj++)
//			if (arrayA[ii] == arrayB[jj])
//				count1 = 1;
//
//		if (count1 == 0)// заполняем только теми элеменами которых нет в массиве В
//			CoppytArrayA[count2++] = arrayA[ii];
//
//		count1 = 0;
//	}
//
//	//// промежуточный результат
//	//outputConsole(CoppytArrayA, lengthNoRepeatArrayA);
//	//cout << endl;
//
//
//	// так как итоговый массив должен быть без повторений 
//	// то отсортируем массив А:
//
//	int count3 = 0, lengthResultArray = 0;
//	for (int ii = 0; ii < lengthNoRepeatArrayA; ii++)
//	{
//		for (int jj = 0; jj <= ii; jj++)
//			if (CoppytArrayA[ii] == CoppytArrayA[jj] && ii != jj)
//				count3++;
//
//		if (count3 == 0)
//			lengthResultArray++;
//
//		count3 = 0;
//	}
//
//
//	elementType* resultArray;
//	try
//	{
//		resultArray = new elementType[lengthResultArray + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		exit(1);
//	}
//
//	int count4 = 0, count5 = 0;
//	for (int ii = 0; ii < lengthNoRepeatArrayA; ii++)
//	{
//		for (int jj = 0; jj <= ii; jj++)
//			if (CoppytArrayA[ii] == CoppytArrayA[jj] && ii != jj)
//				count4++;
//
//		if (count4 == 0)// каждый элемент встречается лишь раз в массиве
//			resultArray[count5++] = CoppytArrayA[ii];
//
//		count4 = 0;
//	}
//
//
//
//	outputConsole(resultArray, count5);
//
//	delete[] CoppytArrayA, resultArray;
//}