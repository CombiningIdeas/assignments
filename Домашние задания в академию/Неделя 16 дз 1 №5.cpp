//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//char* Lowercase(char* str1);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	/*  char * Lowercase (char * str1); � ������� ����������� 
//	������ � ������ �������. */
//	char string[BUFFER_SIZE + 1];
//
//	cout << "������� ����� ��� �������� � ������: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//
//	Lowercase(string);
//	cout << "���������(� ��������� ����): " << string;
//
//
//	return 0;
//}
//
//char* Lowercase(char* str1)
//{
//	for (; *str1 != '\0'; str1++)
//		if (char(*str1) >= 65 && char(*str1) <= 90)
//			*str1 = char(*str1) + 32;
//
//	return str1;
//}