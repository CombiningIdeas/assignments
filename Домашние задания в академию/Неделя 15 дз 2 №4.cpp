//#include <iostream>
//using namespace std;
//
//void replaceSymbol(char* string);
//// char* - ������ ��� ������ ����� ������� �� char.
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	// ������� 4. 
//	/* �������� ���������, ������� �������� ���
//	������� ����� �.� � ������, ��������� �������������,
//	�� ������� ���������������� ����� �!�. */
//
//	const int BUFFER_SIZE = 1024;
//	char string[BUFFER_SIZE + 1];
//	char indexString;
//
//	cout << "������� ������: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//
//	replaceSymbol(string);
//	cout << "�������� ������: " << string;
//
//
//	return 0;
//}
//
//void replaceSymbol(char* string)
//{
//	for (; *string != '\0'; string++)
//		if (*string == '.')
//			*string = '!';
//}