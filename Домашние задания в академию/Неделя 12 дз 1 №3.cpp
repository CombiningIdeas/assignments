//#include <iostream>
//using namespace std;
//
//void ArithmeticMean(int createdArray[], const int LENGTH)
//{
//	int negativeNumbers = 0, positiveNumbers = 0, zeroNumbers = 0;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (createdArray[ii] < 0)
//			negativeNumbers += 1;
//
//		if (createdArray[ii] > 0)
//			positiveNumbers += 1;
//
//		if (createdArray[ii] == 0)
//			zeroNumbers += 1;
//	}
//	cout << "���������� ������������� �����: " << negativeNumbers << endl;
//	cout << "���������� ������������� �����: " << positiveNumbers << endl;
//	cout << "���������� ������� �����: " << zeroNumbers;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 3. 
//	/* �������� �������, ������������ ����������
//	�������������, ������������� � ������� ���������
//	������������� �� �������. */
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
//	ArithmeticMean(createdArray, LENGTH);
//
//	return 0;
//}