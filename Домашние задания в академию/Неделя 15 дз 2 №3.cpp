//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//void insertSymbol(char* string, char* newString,
//	const char symbolString, const int indexString);
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	// ������� 3. 
//	/* �������� �������, ������� ��������� � ������
//	� ��������� ������� �������� ������. */
//	char string[BUFFER_SIZE + 1];
//	char newString[BUFFER_SIZE + 1];
//	int indexString;
//	char symbolString;
//
//	cout << "������� ������: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//	cout << "������ ������, ������� ������ ��������: ";
//	cin >> symbolString;
//	cout << "�������� �����(������) �������(��������� ������ ���������� � 0): ";
//	cin >> indexString;
//
//
//	insertSymbol(string, newString, symbolString, indexString);
//	cout << "�������� ������: " << newString;
//
//
//	return 0;
//}
//
//void insertSymbol(char* string, char* newString,
//	const char symbolString, const int indexString)
//{
//	int counter = 0;
//	for (; *string != '\0'; string++, counter++)
//	{
//		if (counter == indexString)
//		{
//			*newString = symbolString;
//			newString++;
//		}
//		else
//		{
//			*newString = *string;
//			newString++;
//		}
//	}
//	*newString = '\0';
//}