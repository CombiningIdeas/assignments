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
//	// Задание 2. 
//	/* Написать функцию, которая удаляет из строки
//	все вхождения в нее заданного символа.*/
//	char string[BUFFER_SIZE + 1];
//	char newString[BUFFER_SIZE + 1];
//	char symbolString;
//
//	cout << "Введите строку: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//
//	cout << "Выберете символ, который надо удалить: ";
//	cin >> symbolString;
//
//	deletingSymbol(string, newString, symbolString);
//	cout << "Выходная строка: " << newString;
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