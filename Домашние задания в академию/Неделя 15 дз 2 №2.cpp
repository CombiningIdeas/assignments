//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//void deletingSymbol(char* string, char* newString, const char symbolString);
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	// ������� 2. 
//	/* �������� �������, ������� ������� �� ������
//	��� ��������� � ��� ��������� �������.*/
//	char string[BUFFER_SIZE + 1];
//	char newString[BUFFER_SIZE + 1];
//	char symbolString;
//
//	cout << "������� ������: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//
//	cout << "�������� ������, ������� ���� �������: ";
//	cin >> symbolString;
//
//	deletingSymbol(string, newString, symbolString);
//	cout << "�������� ������: " << newString;
//
//
//	return 0;
//}
//
//void deletingSymbol(char* string, char* newString, const char symbolString)
//{
//	for (; *string != '\0'; string++)
//		if (*string != symbolString)
//		{
//			*newString = *string;
//			newString++;
//		}
//	*newString = '\0';
//}