//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//int mystrcmp(const char* str1, const char* str2);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	/* int mystrcmp(const char* str1, const char* str2); �
//	������� ���������� ��� ������, �, ���� ������ �����
//	���������� 0, ���� ������ ������ ������ ������, ��
//	���������� 1, ����� �1. */
//	char string1[BUFFER_SIZE + 1], string2[BUFFER_SIZE + 1];
//
//	cout << "������� ������ ������: ";
//	cin.getline(string1, BUFFER_SIZE, '\n');
//	cout << "������� ������ ������: ";
//	cin.getline(string2, BUFFER_SIZE, '\n');
//
//	cout << "���������(���� ������ ����� ���������� 0, ���� ������ ������"
//		<< "������ ������, �� ���������� 1, ����� �1): " << mystrcmp(string1, string2);
//
//
//	return 0;
//}
//
//int mystrcmp(const char* str1, const char* str2)
//{
//	while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	// ������ ����� ���� �� ��� ����� �� ����������� ���� 
//	// �� ��������� ���� ��� ������������ � ���� �����, 
//	// ���� ��������� ��� ������ �� 0 - 0 = 0
//	if (*str1 - *str2 > 0) 
//		return 1;
//	else if (*str1 - *str2 < 0)
//		return -1;
//	else
//		return 0;
//}