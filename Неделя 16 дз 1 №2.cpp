//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//int StringToNumber(char* str);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	/* int StringToNumber(char * str); 
//	— функция конвертирует строку в число и возвращает это число. */
//	char string[BUFFER_SIZE + 1] = "44431232";
//
//	cout << "Введите строку для перевода в число: ";
//	
//
//	cout << "Результат(в числовом виде): " << StringToNumber(string);
//
//
//	return 0;
//}
//
//int StringToNumber(char* str)
//{
//	int number = 0;
//	int LENGTH = strlen(str);// длинна строки
//	//cout << LENGTH << endl;
//	int count = 1;
//
//	while (--LENGTH > 0)
//		count *= 10;// умножаем на 10 потому что в цикле пойдем с начала строки
//	// а в начале строки идут сначала сотни затем десятки и потом единицы
//
//	for (; *str != '\0'; str++, count = count / 10)
//		number += static_cast<int>(*str - '0') * count;// складываем значения
//
//	return number;
//}