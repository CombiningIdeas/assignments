//#include <iostream>
//using namespace std;
//
//void swap(int& a, int& b)
//{
//	a = a + b;
//	b = a - b;
//	a = a - b;
//}
//
////��� ������� ������� ���� �������� ���� � ������� ������� ����� �������� ����� �����
//bool linearSearch(int &keyNumber, const int &LENGTH, int findKeyArray[])
//{
//	int left = 0;
//	int right = LENGTH;
//	int midd = 0;
//
//	while (true)
//	{
//		midd = (left + right) / 2;
//
//		if (keyNumber < findKeyArray[midd])// ���� ������� ������ �������� � ������
//			right = midd - 1;// ������� ������ ������� ������
//		else if (keyNumber > findKeyArray[midd])// ���� ������� ������ �������� � ������
//			left = midd + 1;// ������� ����� ������� ������
//		else                // ���� �������� �����, ������ ���� ���� � �������:
//			return true;    // ������� ���������� ������
//
//		if (left > right)   // ���� ����� ������� ����� ������ ������ ������� 
//			return false;
//	}
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 2. 
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
//	// ��� ��������� ������ ����� ��������������� ������:
//	for (int ii = 1; ii < LENGTH; ii++)
//	{
//		int jj = ii - 1;
//		while (jj >= 0 && findKeyArray[jj] > findKeyArray[jj + 1])
//		{
//			swap(findKeyArray[jj], findKeyArray[jj + 1]);
//			jj--;
//		}
//	}
//	
//	if (linearSearch(keyNumber, LENGTH, findKeyArray) == true)
//		cout << "���� - " << keyNumber << " ������";
//	else
//		cout << "���� - " << keyNumber << " �� ������";
//
//	return 0;
//}