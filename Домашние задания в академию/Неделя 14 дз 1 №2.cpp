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
//	/* ������� 2. ���� ��� �������: �[M] � B[N] (M � N ��������
//	� ����������). ���������� ������� ������ ������ ���������� ���������� �������,
//	� ������� ����� ������� �������� �������� A � B, ������� �� �������� ������
//	��� ���, ��� ����������. */
//
//	int lengthM, lengthN;
//	cout << "������� M - ������ ������� �: ";
//	cin >> lengthM;
//	cout << "������� N - ������ ������� B: ";
//	cin >> lengthN;
//
//	elementType* arrayA, * arrayB;//*resultArray, resultArray = new elementType[]
//	try
//	{
//		arrayA = new elementType[lengthM + 1];// +1 ��� ��� � ����� ������������ ����
//		arrayB = new elementType[lengthN + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		return 1;
//	}
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
//	cout << "������ ������ ��� ��������� �� ������� B � ��� ����������: " << endl;
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
//	// �������� ��������  ������� �� �������� ������ ��� ����� ��������
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
//	count0 = 0;
//	for (int ii = 0; ii < lengthN; ii++)
//	{
//		for (int jj = 0; jj < lengthM; jj++)
//			if (arrayB[ii] == arrayA[jj])
//				count0 = 1;
//
//		if (count0 == 0)
//			lengthNoRepeatArrayA++;
//
//		count0 = 0;
//	}
//	
//	elementType* newArray;// ������� ������ ��� ��� ����� ���������
//	try
//	{
//		newArray = new elementType[lengthNoRepeatArrayA + 1];
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
//		// ��������� ������ ���� ��������� ������� ��� � ������� �
//		if (count1 == 0)
//			newArray[count2++] = arrayA[ii];
//
//		count1 = 0;
//	}
//
//	count1 = 0;
//	for (int ii = 0; ii < lengthN; ii++)
//	{
//		for (int jj = 0; jj < lengthM; jj++)
//			if (arrayB[ii] == arrayA[jj])
//				count1 = 1;
//		// ��������� ������ ���� ��������� ������� ��� � ������� �
//		if (count1 == 0)
//			newArray[count2++] = arrayB[ii];
//
//		count1 = 0;
//	}
//
//	//// ������������� ���������
//	//outputConsole(newArray, lengthNoRepeatArrayA);
//	//cout << endl;
//
//
//	// ��� ��� �������� ������ ������ ���� ��� ���������� 
//	// �� ����������� ��� ����� ������:
//
//	int count3 = 0, lengthResultArray = 0;
//	for (int ii = 0; ii < lengthNoRepeatArrayA; ii++)
//	{
//		for (int jj = 0; jj <= ii; jj++)
//			if (newArray[ii] == newArray[jj] && ii != jj)
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
//			if (newArray[ii] == newArray[jj] && ii != jj)
//				count4++;
//
//		if (count4 == 0)// ������ ������� ����������� ���� ��� � �������
//			resultArray[count5++] = newArray[ii];
//
//		count4 = 0;
//	}
//
//
//
//	outputConsole(resultArray, count5);
//
//	delete[] newArray, resultArray;
//}