//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//int countSymbol(char* string, const char symbolString);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	// ������� 5. 
//	/* ������������ ������ ������ �������� � ������� ������, 
//	��������� ������� ��� �� ����������� � ������. */
//	char string[BUFFER_SIZE + 1];
//	char symbolString;
//
//	cout << "������� ������: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//	cout << "������ ������, ������� ������ ���������: ";
//	cin >> symbolString;
//
//	cout << "���������� ���������� �������: " << countSymbol(string, symbolString);
//
//
//	return 0;
//}
//
//int countSymbol(char* string, const char symbolString)
//{
//	int counter = 0;
//	for (; *string != '\0'; string++)
//		if (*string == symbolString)
//			counter++;
//
//	return counter;
//}