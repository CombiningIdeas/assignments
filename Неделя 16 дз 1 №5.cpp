//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//char* Lowercase(char* str1);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	/*  char * Lowercase (char * str1); — функция преобразует 
//	строку в нижний регистр. */
//	char string[BUFFER_SIZE + 1];
//
//	cout << "Введите число для перевода в строку: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//
//	Lowercase(string);
//	cout << "Результат(в строковом виде): " << string;
//
//
//	return 0;
//}
//
//char* Lowercase(char* str1)
//{
//	for (; *str1 != '\0'; str1++)
//		if (char(*str1) >= 65 && char(*str1) <= 90)
//			*str1 = char(*str1) + 32;
//
//	return str1;
//}