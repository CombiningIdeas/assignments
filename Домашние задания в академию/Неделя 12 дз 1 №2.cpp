//#include <iostream>
//using namespace std;
//
//int ArithmeticMean(int createdArray[], const int LENGTH)
//{
//	int arithmeticMeanSum = 0;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		arithmeticMeanSum += createdArray[ii];
//
//	return arithmeticMeanSum;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 2. 
//	/* �������� �������, ������������ �������
//	�������������� ��������� ������������� �� �������.*/
//	srand(static_cast<unsigned int>(time(nullptr)));
//	const int LENGTH = 10;
//	int createdArray[LENGTH];
//
//	cout << "��� ������:" << endl;
//	for (int& ii : createdArray)// & - ��������� �������� ������, ��� & � ������ �� ����� ������������ �����
//	{
//		ii = rand() % 101 - 50;
//		cout << ii << ' ';
//	}
//	cout << endl;
//
//	cout << "������ �������������� �������: " << ArithmeticMean(createdArray, LENGTH);
//
//	return 0;
//}