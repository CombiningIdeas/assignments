//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//char* mystrrev(char* str);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	/* char* mystrrev (char * str); � ������� ����������� 
//	������ � ���������� ��������� �� ����� ������. */
//	char string[BUFFER_SIZE + 1];
//
//	cout << "������� ����� ��� �������� � ������: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//
//	mystrrev(string);
//	cout << "���������(� ��������� ����): " << string;
//
//
//	return 0;
//}
//
//
//// ������������������ �������, ������� ��������.
////char* mystrrev(char* str)
////{
////	char strCopy[BUFFER_SIZE + 1];
////	char* indicator = str;
////	int ii = 0;
////	for (; *str != '\0'; str++, ii++)
////		strCopy[ii] = *str;
////	strCopy[++ii] = '\0';
////
////	str = indicator;
////	int LENGTH = strlen(str);
////	for (int jj = LENGTH - 1;  *str != '\0'; str++, jj--)
////		*str = strCopy[jj];
////	str++;
////	*str = '\0';
////
////	return str;
////}
//
//char* mystrrev(char* str)
//{
//	int LENGTH = strlen(str); // ����� ����� ��� ���� ����� ��� ������ ��������� � �����
//	char* end = str + LENGTH - 1; // ����� ���� ��� ��� ���������� ����
//
//	// ������������ ���������(������) �� ������ � ����� ������ str � end,
//	// � �� ���������� ����� *str � *end 
//	while (str < end) 
//		std::swap(*str++, *end--);
//
//	return str;
//}