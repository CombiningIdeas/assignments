//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//static const int LENGTH1 = 5, LENGTH2 = 5;
//
//int overloadedFunction();
//int overloadedFunction(int array[LENGTH1][LENGTH2]);
//int overloadedFuncition(int* array[LENGTH1][LENGTH2], int minNum, int maxNum);
//int overloadedFuncition(int* array[][LENGTH2]);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 1. 
//	/* �������� ������������� �������(int, double,
//	char) ��� ���������� ��������� �����:
//	1) ������������� ���������� �������;
//	2) ����� ������� �� �����;
//	3) ����������� ������������� � ������������ ��������
//		�� ������� ��������� �������;
//	4) ���������� ��������� �� ����������� �������� ���
//		������ ������ �������. */
//	srand(static_cast<unsigned int>(time(nullptr)));
//
//	overloadedFunction();
//
//
//	return 0;
//}
//
//void swap(int* num1, int* num2)
//{
//	int* tmp = num1;
//	num1 = num2;
//	num2 = tmp;
//}
//
//int overloadedFuncition(int array[][LENGTH2])
//{
//	for (int hh = 0; hh < LENGTH2; hh++)// ������ LENGTH2 ������ ��� ��� ����� �������� � ������
//		for (int ii = 0; ii < LENGTH1; ii++)
//			for (int jj = 0; jj < LENGTH2 - 1; jj++)
//				if (array[ii][jj] > array[ii][jj + 1])
//					swap(array[ii][jj], array[ii][jj + 1]);
//
//	for (int ii = 0; ii < LENGTH1; ii++)
//	{
//		for (int jj = 0; jj < LENGTH2; jj++)
//			cout << setw(4) << array[ii][jj];
//		cout << endl;
//	}
//
//	return 0;
//}
//
//int overloadedFuncition(int array[LENGTH1][LENGTH2], int minNum, int maxNum)
//{
//	for (int ii = 0, jj = 0; ii < LENGTH1 && jj < LENGTH2; ii++, jj++)
//	{
//		if (minNum > array[ii][jj])
//			minNum = array[ii][jj];
//
//		if (maxNum < array[ii][jj])
//			maxNum = array[ii][jj];
//	}
//	cout << "M����������� ������� �� ������� ��������� �������: " << maxNum << endl;
//	cout << "����������� ������� �� ������� ��������� �������: " << minNum << endl;
//
//	return 0;
//}
//
//int overloadedFunction(int array[LENGTH1][LENGTH2])
//{
//	for (int ii = 0; ii < LENGTH1; ii++)
//	{
//		for (int jj = 0; jj < LENGTH2; jj++)
//			cout << setw(4) << array[ii][jj];
//		cout << endl;
//	}
//
//	int min = array[0][0];
//	int max = array[0][0];
//	overloadedFuncition(array, min, max);
//	cout << "���������� ��������� �� ����������� �������� ��� ������ ������ �������: "
//		<< endl;
//	overloadedFuncition(array);
//
//	return 0;
//}
//
//int overloadedFunction()
//{
//	int matrixArray[LENGTH1][LENGTH2];
//
//	for (int(&ii)[LENGTH2] : matrixArray)
//		for (int& jj : ii)
//			jj = rand() % 101 - 50;
//
//	overloadedFunction(matrixArray);
//	return 0;
//}