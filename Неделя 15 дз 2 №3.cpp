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
//	// Задание 3. 
//	/* Написать функцию, которая вставляет в строку
//	в указанную позицию заданный символ. */
//	char string[BUFFER_SIZE + 1];
//	char newString[BUFFER_SIZE + 1];
//	int indexString;
//	char symbolString;
//
//	cout << "Введите строку: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//	cout << "Ведите символ, который хотите вставить: ";
//	cin >> symbolString;
//	cout << "Выберете номер(индекс) символа(нумерация строки начинается с 0): ";
//	cin >> indexString;
//
//
//	insertSymbol(string, newString, symbolString, indexString);
//	cout << "Выходная строка: " << newString;
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