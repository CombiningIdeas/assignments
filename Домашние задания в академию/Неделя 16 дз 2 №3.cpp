//#include <iostream>
//using namespace std;
//
//void countSymbolByType(int& result, char* string);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 3
//	/* ���������� ������� ��� ������ ����� ����������� � ������. */
//
//	const int BUFFER_SIZE = 1024;
//	char* string;
//	try
//	{
//		string = new char[BUFFER_SIZE + 1];
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//	cout << "������� ������: ";
//	cin.getline(string, BUFFER_SIZE);
//	cout << "�������� ������: " << string;
//
//	int result = 0;
//	countSymbolByType(result, string);
//
//	cout << "\n���������� ����: " << result;
//
//	delete[] string;
//
//	return 0;
//}
//
//void countSymbolByType(int& result, char* string)
//{
//	for (; *string != '\0'; string++)
//		if ('a' <= *string && *string <= 'z' || 'A' <= *string && *string <= 'Z')
//			result++;
//}