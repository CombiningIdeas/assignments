//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 2
//	/*�������� ���������, ������� ��������� ������������
//	����� ���� �������� � ��������� ������� � ������ ������.
//	�������� �������� ����� ������������� � ������������
//	���������.*/
//	srand(static_cast<unsigned>(time(nullptr)));
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
//	return 0;
//}