//#include <iostream>
//#include <map>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 1
//	/*�������� ���������, ���������� ��������������� ��������
//	������ ������� �������� 10 ��������� � 2 ������� ��������
//	5 ��������� ������.�������� ��������������� ������� �����
//	������������� � ������������ ���������.*/
//	/*srand(static_cast<unsigned>(time(nullptr)));
//	const int LENGTH = 10;
//	int initialArray[LENGTH];
//	cout << "�������������� ������: ";
//	cout << endl;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		initialArray[ii] = rand() % 21 - 10;
//		cout << initialArray[ii] << ' ';
//	}
//	cout << endl;
//
//	cout << "������ ������(�� ����): ";
//	cout << endl;
//	for(int jj = 0; jj < LENGTH / 2; jj++)
//		cout << initialArray[jj] << ' ';
//	cout << endl;
//
//	cout << "������ ������(�� ����) : ";
//	cout << endl;
//	for (int gg = LENGTH / 2; gg < LENGTH; gg++)
//		cout << initialArray[gg] << ' ';
//	return 0;*/
//
//	// ������� 2
//	/*�������� ���������, ������� ��������� ������������
//	����� ���� �������� � ��������� ������� � ������ ������.
//	�������� �������� ����� ������������� � ������������
//	���������.*/
//	/*srand(static_cast<unsigned>(time(nullptr)));
//	const int LENGTH = 10;
//	int firstlArray[LENGTH];
//	int secondArray[LENGTH];
//	int resultArray[LENGTH];
//
//	cout << "������ ������: ";
//	cout << endl;
//	for (int jj = 0; jj < LENGTH; jj++)
//	{
//		firstlArray[jj] = rand() % 21 - 10;
//		cout << firstlArray[jj] << ' ';
//	}
//	cout << endl;
//
//	cout << "������ ������: ";
//	cout << endl;
//	for (int gg = 0; gg < LENGTH; gg++)
//	{
//		secondArray[gg] = rand() % 21 - 10;
//		cout << secondArray[gg] << ' ';
//	}
//	cout << endl;
//
//	cout << "�������� ������: ";
//	cout << endl;
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		resultArray[ii] = firstlArray[ii] + secondArray[ii];
//		cout << resultArray[ii] << ' ';
//	}
//	cout << endl;
//
//	return 0;*/
//
//	// ������� 3
//	/*������������ ������ ������ � ����� �������� � �������� �� ������(������ ����).
//	�������� ���������, ������� ��������� :
//	�������(�� ������) ����������� �����;
//	����� �����, ����������� ������������� �� ������;
//	���������� ���� � �� ��������(��������, ��������),
//	����� ����� �������(� ����) ��������� 100 ��������.*/
//	/*const int LENGTH = 7;
//	int moneyArray[LENGTH];
//	cout << "������� ������� �� ������ ���� ������(� ��������): ";
//	int sumNumber = 0, counter = 0;
//	double averageCosts = 0;
//	string count;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		cin >> moneyArray[ii];
//		sumNumber += moneyArray[ii];
//	}
//
//	averageCosts = static_cast<double>(sumNumber) / LENGTH;
//
//	map<int, string> weekArray =
//	{
//		{0, "�����������"}, {1, "�������"}, {2, "�����"},
//		{3, "�������"}, {4, "�������"}, {5, "�������"},
//		{6, "����������"}
//	};
//
//	cout << "������� ����������� �� ������ �����: " << averageCosts;
//	cout << endl;
//	cout << "����� �����, ����������� ������������� �� ������: " << sumNumber;
//	cout << endl;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (moneyArray[ii] > 100)
//		{
//			counter += 1;
//		}
//	}
//
//	if (counter == 0)
//		return 0;
//
//	cout << "���������� ���� ����� ����� ������� � ���� ��������� 100$: " << counter;
//	cout << endl << "��������� ���� ����: " << endl;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (moneyArray[ii] > 100)
//		{
//			count = static_cast<string>(weekArray[ii]);
//			cout << count << " - " << moneyArray[ii] << "$" << endl;
//		}
//	}
//
//	return 0;*/
//
//	// ������� 4
//	/*�������� ������ ����� �����(���� ������� �� ���������
//	� ����) �� ��� ������ ���� � ����������� �������� �� ������ ����� �� ���������� ����� � ����.��� ������ ��������
//	�������������, � ��� ����� � ����� �� �������� � ����.
//	�������� ���������, ������� �� ������� ������������
//	(����� ������) ������� � ������� ������ ���������� �����,
//	������� �� ����� ����������, ��� �������, ��� � ���� ���������� �����, ���������� ����� �� ����� 50 % �� �����������
//	����� � ��� ������, ���� ����������� ����� � ���� �����
//	���������� �� ����� 500$.*/
//	/*const int LENGTH = 12;
//	double monthArrayInEuro[12];
//	double monthArrayInDollar[12];
//	double cashingOutMoney[12];
//	int specialNumber;
//	cout << "���� �����: 1 ���� = 1,1 ������" << endl;
//	cout << "������� ���������� ����� ������ �����(� ����),"
//		<< "������� ����� ����������� �� ����� � �����, �� 12 �������(����� ������) :" 
//		<< endl;
//	for (int ii = 0; ii < 12; ii++)
//		cin >> monthArrayInEuro[ii];
//
//	cout << "������� ����� ������, ����� ������ ������� �� ������ ����� �������� ��� �������,"
//		<< " ��� ��� ����� �������� ���� 50 % �� ��� �����, " << endl 
//		<< "��� �� ������ � ����," << " ���� ����� ���� ������ 500 ��������: " << endl;
//	cin >> specialNumber;
//
//	int counter = 0;
//	for (int jj = 0; jj < 12; jj++)
//	{
//		monthArrayInDollar[jj] = monthArrayInEuro[jj] * 1.1;
//		if (monthArrayInDollar[jj] > 500)
//		{
//			cashingOutMoney[counter] = monthArrayInDollar[jj];
//			if (specialNumber-1 == jj)
//				cout << "�� ������ ����������: " << cashingOutMoney[counter] / 2 
//				<< " ��������.";
//			counter += 1;
//		}
//	}
//
//	return 0;*/
//
//}