//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//char* mystrrev(char* str);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	/* char* mystrrev (char * str); — функция реверсирует 
//	строку и возвращает указатель на новую строку. */
//	char string[BUFFER_SIZE + 1];
//
//	cout << "Введите число для перевода в строку: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//
//	mystrrev(string);
//	cout << "Результат(в строковом виде): " << string;
//
//
//	return 0;
//}
//
//
//// Неоптимизированная функция, сложный алгоритм.
////char* mystrrev(char* str)
////{
////	char strCopy[BUFFER_SIZE + 1];
////	char* indicator = str;
////	int ii = 0;
////	for (; *str != '\0'; str++, ii++)
////		strCopy[ii] = *str;
////	strCopy[++ii] = '\0';
////
////	str = indicator;
////	int LENGTH = strlen(str);
////	for (int jj = LENGTH - 1;  *str != '\0'; str++, jj--)
////		*str = strCopy[jj];
////	str++;
////	*str = '\0';
////
////	return str;
////}
//
//char* mystrrev(char* str)
//{
//	int LENGTH = strlen(str); // нужна длина для того чтобы был второй указатель в конце
//	char* end = str + LENGTH - 1; // минус один так как тернальный ноль
//
//	// сравниваются указатели(адреса) на начало и конец строки str и end,
//	// а не содержимое ячеек *str и *end 
//	while (str < end) 
//		std::swap(*str++, *end--);
//
//	return str;
//}