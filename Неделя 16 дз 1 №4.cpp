//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//char* Uppercase(char* str1);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	/* char* Uppercase (char * str1); — функция преобразует
//	строку в верхний регистр. */
//	char string[BUFFER_SIZE + 1];
//
//	cout << "Введите число для перевода в строку: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//
//	Uppercase(string);
//	cout << "Результат(в строковом виде): " << string;
//
//
//	return 0;
//}
//
//char* Uppercase(char* str1)
//{
//	for (; *str1 != '\0'; str1++)
//		if (char(*str1) >= 90 && char(*str1) <= 122)
//			*str1 = char(*str1 - 32); 
//	// смотрим по таблице аски что заглавные буквы на 32 позиции меньше строчных букв.
//	return str1;
//}