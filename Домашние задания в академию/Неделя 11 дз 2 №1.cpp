//#include <iostream>
//using namespace std;
//
////��� ������� ������� ���� �������� ���� � ������� ������� ����� �������� �����
//bool linearSearch(int &keyNumber, const int &LENGTH, int findKeyArray[])
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (findKeyArray[ii] == keyNumber)
//			return true;
//	}
//
//
//	return false;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 1. 
//	/*�������� �������, ����������� ��������
//	��������� ������ ��������� ����� � ���������� �������.*/
//	int keyNumber, leftBorder, rightBorder;
//	const int LENGTH = 10;
//	int findKeyArray[LENGTH];
//	cout << "B������ ���� ��� ��������� c�����: ";
//	cin >> keyNumber;
//	cout << "������� ����� � ������ ������� ���������(������� ������ ������ ��������� 10): ";
//	cin >> leftBorder >> rightBorder;
//
//	if (abs(abs(rightBorder) - abs(leftBorder)) >= 10)
//	{
//		cerr << "����� �� �������� �������, ������� ������ ������� �������!";
//		return 1;
//	}
//
//	int Countdown; // ������� ������� ������� � ����� � ����� ����� ������� ���� � ������� �������
//	if (rightBorder >= leftBorder)
//		Countdown = leftBorder;
//	else
//		Countdown = rightBorder;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (Countdown > leftBorder && Countdown > rightBorder)
//		{
//			cerr << "�� ���������� ��������� ��� �������������!(������ 10)";
//			return 1;
//		}
//		findKeyArray[ii] = Countdown++;
//		
//	}
//	
//	if (linearSearch(keyNumber, LENGTH, findKeyArray) == true)
//		cout << "���� - " << keyNumber << " ������";
//	else
//		cout << "���� - " << keyNumber << " �� ������";
//
//	return 0;
//}