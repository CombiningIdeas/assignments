//#include <iostream>
//#include <map>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 3
//	/*������������ ������ ������ � ����� �������� � �������� �� ������(������ ����).
//	�������� ���������, ������� ��������� :
//	�������(�� ������) ����������� �����;
//	����� �����, ����������� ������������� �� ������;
//	���������� ���� � �� ��������(��������, ��������),
//	����� ����� �������(� ����) ��������� 100 ��������.*/
//	const int LENGTH = 7;
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
//	return 0;
//}