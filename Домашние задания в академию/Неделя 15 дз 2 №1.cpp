//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//void deletingSymbol(char* string, char* newString,
//	const char symbolString, const int indexString);
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	// ������� 1. 
//	/* �������� �������, ������� ������� �� ������
//	������ � �������� �������. */
//	char string[BUFFER_SIZE + 1];
//	char newString[BUFFER_SIZE + 1];
//	int indexString;
//	char symbolString;
//
//	cout << "������� ������: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//	cout << "������ ������, ������� ������ �������: ";
//	cin >> symbolString;
//	cout << "�������� �����(������) �������(��������� ������ ���������� � 0): ";
//	cin >> indexString;
//
//
//	deletingSymbol(string, newString, symbolString, indexString);
//	cout << "�������� ������: " << newString;
//
//
//	return 0;
//}
//
//void deletingSymbol(char* string, char* newString,
//	const char symbolString, const int indexString)
//{
//	int counter = 0;
//	for (; *string != '\0'; string++, counter++)
//	{
//		if (*string != symbolString || counter != indexString)
//		{
//			*newString = *string;
//			newString++;
//		}
//	}
//	*newString = '\0';
//}