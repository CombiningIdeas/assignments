//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//int StringToNumber(char* str);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	/* int StringToNumber(char * str); 
//	� ������� ������������ ������ � ����� � ���������� ��� �����. */
//	char string[BUFFER_SIZE + 1];
//
//	cout << "������� ������ ��� �������� � �����: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//
//	cout << "���������(� �������� ����): " << StringToNumber(string);
//
//
//	return 0;
//}
//
//int StringToNumber(char* str)
//{
//	int number = 0;
//	int LENGTH = strlen(str);// ������ ������
//	int count = 1;
//
//	while (--LENGTH > 0)
//		count *= 10;// �������� �� 10 ������ ��� � ����� ������ � ������ ������
//	// � � ������ ������ ���� ������� ����� ����� ������� � ����� �������
//
//	for (; *str != '\0'; str++, count = count / 10)
//		number += static_cast<int>(*str - '0') * count;// ���������� ��������
//
//	return number;
//}