//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//int countSymbol(char* string, const char symbolString);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	// Задание 5. 
//	/* Пользователь вводит строку символов и искомый символ, 
//	посчитать сколько раз он встречается в строке. */
//	char string[BUFFER_SIZE + 1];
//	char symbolString;
//
//	cout << "Введите строку: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//	cout << "Ведите символ, который хотите посчитать: ";
//	cin >> symbolString;
//
//	cout << "Количество введенного символа: " << countSymbol(string, symbolString);
//
//
//	return 0;
//}
//
//int countSymbol(char* string, const char symbolString)
//{
//	int counter = 0;
//	for (; *string != '\0'; string++)
//		if (*string == symbolString)
//			counter++;
//
//	return counter;
//}