//#include <iostream>
//using namespace std;
//
//void upOffer(char* string);
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//	// ������� 2
//	/* �������� ����� ����� �������, 
//	����� ������ ����������� ���������� � ������� �����. */
//
//	const int BUFFER_SIZE = 1024;
//	char* string, *ptr;
//	try
//	{
//		string = new char[BUFFER_SIZE + 1];
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		cerr << "allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//	cout << "������� ������: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//	cout << "\n�������� ������: " << string << endl;
//
//	*string = toupper(*string); // ������ ��������� ������ ����� ������� ������������.
//
//
//	upOffer(string);
//
//	cout << "\n\n�������� ������: " << string << endl;
//
//	delete[] string;
//
//	return 0;
//}
//
//void upOffer(char* string)
//{
//
//	for (; *string != '\0'; string++)
//		if (*string == '.' || *string == '!' || *string == '?')
//		{
//			string = string + 2;
//			*string = toupper(*string);
//			string = string - 2;
//			// ���������� ���� ���� ����� ���������� �� 
//			// �� �������� ������� � �� ��������� ����� � ���������� ����� ������, 
//			// ������� ����� ���������
//		}
//}