//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//
//char* NumberToString(int number);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	/* char* NumberToString (int number);
//	� ������� ������������ ����� � ������ � ���������� ��������� �� ��� ������. */
//	int number;
//
//	cout << "������� ����� ��� �������� � ������: ";
//	cin >> number;
//
//	cout << "���������(� ��������� ����): " << NumberToString(number);
//
//
//	return 0;
//}
//
//char* NumberToString(int number)
//{
//	char string[BUFFER_SIZE + 1];
//	int numLenght = number, LENGTH = 1, count = 0;
//
//	while ((numLenght /= 10) > 0)
//		LENGTH = LENGTH * 10;
//
//	for (int num = number; num > 0; num %= LENGTH, count++, LENGTH /= 10)
//		string[count] = static_cast<char>((num / LENGTH) + 48);
//	// + 48 �� ������� ����
//
//	string[count] = '\0';
//
//	return string;
//}