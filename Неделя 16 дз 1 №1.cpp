//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//int mystrcmp(const char* str1, const char* str2);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	/* int mystrcmp(const char* str1, const char* str2); —
//	функция сравнивает две строки, и, если строки равны
//	возвращает 0, если первая строка больше второй, то
//	возвращает 1, иначе –1. */
//	char string1[BUFFER_SIZE + 1], string2[BUFFER_SIZE + 1];
//
//	cout << "Введите первую строку: ";
//	cin.getline(string1, BUFFER_SIZE, '\n');
//	cout << "Введите вторую строку: ";
//	cin.getline(string2, BUFFER_SIZE, '\n');
//
//	cout << "Результат(если строки равны возвращает 0, если первая строка"
//		<< "больше второй, то возвращает 1, иначе –1): " << mystrcmp(string1, string2);
//
//
//	return 0;
//}
//
//int mystrcmp(const char* str1, const char* str2)
//{
//	while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	// тоесть когда один из них дошел до тернального нуля 
//	// то следующий флаг уже сравнивается с этим нулем, 
//	// если кончились обе строки то 0 - 0 = 0
//	if (*str1 - *str2 > 0) 
//		return 1;
//	else if (*str1 - *str2 < 0)
//		return -1;
//	else
//		return 0;
//}