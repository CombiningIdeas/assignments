//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//void countSymbol(char* string, int& letters, int& numbers, int& otherSymbol);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	// ������� 6. 
//	/* ������������ ������ ������. ���������� ���������� ����, 
//	���������� ���� � ���������� ���������
//	��������, �������������� � ������. */
//	char string[BUFFER_SIZE + 1];
//	char symbolString;
//	int letters = 0, number = 0, otherSymbol = 0;
//
//	cout << "������� ������: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//
//	countSymbol(string, letters, number, otherSymbol);
//	cout << "���������� ����: " << letters << ".\n���������� ����: " << number
//		<< ".\n���������� ������ ��������: " << otherSymbol;
//
//
//	return 0;
//}
//
//void countSymbol(char* string, int& letters, int& number, int& otherSymbol)
//{
//	for (; *string != '\0'; string++)
//	{
//		if ('a' <= *string && *string <= 'z' || 'A' <= *string && *string <= 'Z')
//			letters++;
//		else if ('0' <= *string && *string <= '9')
//			number++;
//		else
//			otherSymbol++;
//	}
//}