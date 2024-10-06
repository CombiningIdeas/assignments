//#include <iostream>
//using namespace std;
//
//void replaceSymbol(char* string);
//// char* - потому что массив чаров поэтому не char.
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	// Задание 4. 
//	/* Написать программу, которая заменяет все
//	символы точки «.» в строке, введенной пользователем,
//	на символы восклицательного знака «!». */
//
//	const int BUFFER_SIZE = 1024;
//	char string[BUFFER_SIZE + 1];
//	char indexString;
//
//	cout << "Введите строку: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//
//	replaceSymbol(string);
//	cout << "Выходная строка: " << string;
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