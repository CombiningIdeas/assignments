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
//	// Задание 1. 
//	/* Написать функцию, которая удаляет из строки
//	символ с заданным номером. */
//	char string[BUFFER_SIZE + 1];
//	char newString[BUFFER_SIZE + 1];
//	int indexString;
//	char symbolString;
//
//	cout << "Введите строку: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//	cout << "Ведите символ, который хотите удалить: ";
//	cin >> symbolString;
//	cout << "Выберете номер(индекс) символа(нумерация строки начинается с 0): ";
//	cin >> indexString;
//
//
//	deletingSymbol(string, newString, symbolString, indexString);
//	cout << "Выходная строка: " << newString;
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