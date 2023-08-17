/*
Задание 1. Дана строка символов. Заменить в ней все
пробелы на табуляции.
*/

//#include <iostream>
//
//void replaceSpaceWithTab(char* string);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
////	char string[] = { 'H', 'e', 'l', ' ', 'l', 'o', '\0' };
//	char string[1024 + 1];
//	std::cout << "Введите строку: ";
//	std::cin.getline(string, 1024);
//	std::cout << "исходная строка: " << string;
//	replaceSpaceWithTab(string);
//	std::cout << "\nвыходная строка: " << string;
//	return 0;
//}
//
//void replaceSpaceWithTab(char* string)
//{
//	for (; *string != '\0'; string++)
//	{
//		if (*string == ' ')
//			*string = '\t';
//	}
//}


/*
Задание 2. Дана строка символов. Определить количе-
ство букв, цифр и остальных символов, присутствующих
в строке.
*/

//#include <iostream>
//
//enum SymbolTypes { LETTERS, DIGITS, OTHER };
//
//void countSymbolByType(int result[], char* string);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	const int BUFFER_SIZE = 1024;
//	char string[BUFFER_SIZE + 1];
//	std::cout << "Введите строку: ";
//	std::cin.getline(string, BUFFER_SIZE);
//	std::cout << "исходная строка: " << string;
//	int result[SymbolTypes::OTHER + 1];
//	countSymbolByType(result, string);
//	std::cout << "\nколичество букв: " << result[SymbolTypes::LETTERS];
//	std::cout << "\nколичество цифр: " << result[SymbolTypes::DIGITS];
//	std::cout << "\nколичество остальных символов: " << result[SymbolTypes::OTHER];
//	return 0;
//}
//
//void countSymbolByType(int result[], char* string)
//{
//	result[SymbolTypes::LETTERS] = result[SymbolTypes::DIGITS]
//		= result[SymbolTypes::OTHER] = 0;
//
//	for (; *string != '\0'; string++)
//		if ('a' <= *string && *string <= 'z' || 'A' <= *string && *string <= 'Z')
//			result[SymbolTypes::LETTERS]++;
//		else
//			if ('0' <= *string && *string <= '9')
//				result[SymbolTypes::DIGITS]++;
//			else
//				result[SymbolTypes::OTHER]++;
//}


/*
Задание 3. Подсчитать количество слов во введенном
предложении.
*/

//#include <iostream>
//
//int countWords(char* string);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	const int BUFFER_SIZE = 1024;
//	char string[BUFFER_SIZE + 1];
//	std::cout << "Введите строку: ";
//	std::cin.getline(string, BUFFER_SIZE);
//	std::cout << "исходная строка: " << string;
//	std::cout << "\nколичество слов: " << countWords(string);
//	return 0;
//}
//
//int countWords(char* string)
//{
//	int nWords = 0;
//	bool inWord = false;
//
//	for (; *string != '\0'; string++)
//		if ('a' <= *string && *string <= 'z' || 'A' <= *string && *string <= 'Z')
//		{
//			if (inWord == false)
//			{
//				inWord = true;
//				nWords++;
//			}
//
//		}
//		else
//			inWord = false;
//
//	return nWords;
//}


/*
Задание 4. Дана строка символов. Необходимо проверить
является ли эта строка палиндромом.
*/

//#include <iostream>
//
//bool isPalindrome(const char* string);
//const char* findStringEnd(const char* string);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	const int BUFFER_SIZE = 1024;
//	//char string[BUFFER_SIZE + 1] = "а роза упала на лапу азора";
//	char string[BUFFER_SIZE + 1];
//	std::cout << "Введите строку: ";
//	std::cin.getline(string, BUFFER_SIZE);
//	std::cout << "исходная строка: " << string;
//	std::cout << "\nявляется палиндромом: " << std::boolalpha << isPalindrome(string);
//	return 0;
//}
//
//const char* findStringEnd(const char* string)
//{
//	for (; *string != '\0'; string++) ;
//	return string - 1;
//}
//
//bool isPalindrome(const char* string)
//{
//	const char* stringEnd = findStringEnd(string);
//
//	while (string < stringEnd)
//	{
//		if (*string == ' ')
//			string++;
//
//		if (*stringEnd == ' ')
//			stringEnd--;
//
//		if (*string != *stringEnd)
//			return false;
//		else
//		{
//			string++;
//			stringEnd--;
//		}
//	}
//
//	return true;
//}


/*
Задание 1. Создать библиотеку следующих функций:
*/

//#include <iostream>
//
//inline int mystrlen(const char* str);
//inline char* mystrcpy(char* outStr, const char* inStr);
//inline char* mystrcat(char* outStr, const char* inStr);
//inline char* mystrchr(char* str, const char c);
//inline char* mystrstr(char* str, char* subStr);
//inline bool isStringEqual(const char* left, const char* right);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	const int BUFFER_SIZE = 1024;
//	char string[BUFFER_SIZE + 1];
//	std::cout << "Введите строку: ";
//	std::cin.getline(string, BUFFER_SIZE);
//
//	std::cout << "длина исходной строки: " << string << ' '
//		<< mystrlen(string) << " символов";
//
//	char originalString[BUFFER_SIZE + 1];
//	std::cout << "\nкопия исходной строки: " << mystrcpy(originalString, string);
//
//	std::cout << "\nВведите 2-ю строку: ";
//	char string2[BUFFER_SIZE + 1];
//	std::cin.getline(string2, BUFFER_SIZE);
//	std::cout << "исходная + вторая строки: " << mystrcat(string, string2);
//
//	std::cout << "\nВведите символ: ";
//	char symbol;
//	std::cin >> symbol;
//
//	std::cout << "первое вхождение этого символа найдено в строке "
//		<< originalString << " в позиции № : "
//		<< mystrchr(originalString, symbol) - originalString;
//
//	std::cout << "\nпервое вхождение строки " << string2
//		<< " найдено в строке " << originalString << " в позиции №: "
//		<< mystrstr(originalString, string2) - originalString;
//
//	return 0;
//}
//
///*
//■ int mystrlen(const char * str); — функция определяет
//длину строки.
//*/
//
//inline int mystrlen(const char* str)
//{
//	int counter = 0;
//	for ( ; *str != '\0'; counter++, str++);
//	return counter;
//}
//
///*
//■ char * mystrcpy (char * str1, const char * str2); — функция
//копирует строку str2 в буфер, адресуемый через str1.
//Функция возвращает указатель на первую строку str1.
//*/
//
//inline char* mystrcpy(char* outStr, const char* inStr)
//{
//	char* outPointer = outStr;
//
//	while (*inStr != '\0')
//		*outStr++ = *inStr++;
//
//	*outStr = '\0';
//	return outPointer;
//}
//
///*
//■ char * mystrcat (char * str1, const char * str2); — функ-
//ция присоединяет строку str2 к строке str1. Функция
//возвращает указатель на первую строку str1.
//str1 = str1 + str2
//outStr = outStr + inStr
//*/
//
//inline char* mystrcat(char* outStr, const char* inStr)
//{
//	char* outPointer = outStr;
//
//	while (*outStr != '\0')
//		outStr++;
//
//	mystrcpy(outStr, inStr);
//	return outPointer;
//}
//
///*
//■ char * mystrchr (char * str, char s); — функция осу-
//ществляет поиск символа s в строке str. Функция
//возвращает указатель на первое вхождение символа
//в строку, в противном случае 0.
//*/
//
//inline char* mystrchr(char* str, const char c)
//{
//	for (; *str != '\0'; str++)
//		if (*str == c)
//			return str;
//
//	return nullptr;
//}
//
///*
//■ char * mystrstr (char * str1, char * str2); — функция
//осуществляет поиск подстроки str2 в строке str1.
//Функция возвращает указатель на первое вхождение
//подстроки str2 в строку str1, в противном случае 0.
//*/
//
//inline bool isStringEqual(const char* left, const char* right)
//{
//	for ( ; *left != '\0'; left++, right++)
//		if (*left != *right)
//			return false;
//
//	return true;
//}
//
//inline char* mystrstr(char* str, char* subStr)
//{
//	for ( ; *str != '\0'; str++)
//		if (*str == *subStr)
//			if (isStringEqual(subStr + 1, str + 1))
//				return str;
//
//	return nullptr;
//}


/*
Задание 1. Есть некоторый текст. Используя стандартные
строковые функции:
■ Посчитайте количество вхождений слово, заданного
пользователем;
■ Посчитайте количество предложений в тексте;
■ Количество точек и запятых;
■ Переверните весь текст целиком;
■ Переверните каждое предложение в тексте.
*/

//#include <iostream>
//#include <cstring>
//
//size_t countSubstring(const char* string, const char* substring);
//int countWord(char* string, const char* word);
//int countDotComma(const char* string);
//inline int mystrlen(const char* str);
//char* reverseString(char* string);
//int countSentences(const char* string);
//char* reverseWords(char* string);
//
//template<typename T>
//inline void reverseRAM(T* begin, T* end);
//
//template<typename T>
//inline void swap(T& a, T& b);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	const int BUFFER_SIZE = 1024;
//	char* text;
//
//	try
//	{
//		text = new char[BUFFER_SIZE + 1];
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		std::cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//	std::cout << "Введите текст: ";
//	std::cin.getline(text, BUFFER_SIZE);
//
//	char word[BUFFER_SIZE + 1];
//	std::cout << "\nВведите слово: ";
//	std::cin >> word;
//
//	std::cout << "\nКоличество точек и запятых " << countDotComma(text);
//	std::cout << "\nПодстрока " << word << " найдена " << countSubstring(text, word) << " раз";
//
//	char* textCopy;
//
//	try
//	{
//		textCopy = new char[BUFFER_SIZE + 1];
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		std::cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//	strcpy_s(textCopy, BUFFER_SIZE + 1, text);
//
//	std::cout << "\n\nПеревернутый текст целиком:\n" << reverseString(text);
//	strcpy_s(text, BUFFER_SIZE + 1, textCopy);
//
//	std::cout << "\n\nколичество предложений в тексте " << countSentences(text);
//
//	std::cout << "\n\nСлово " << word << " найдено " << countWord(text, word) << " раз";
//
//	char *const reversedByWords = reverseWords(textCopy);
//	std::cout << "\n\nПеревернутый текст пословно:\n" << reversedByWords;
//
//	delete[] reversedByWords;
//	delete[] text;
//	delete[] textCopy;
//	return 0;
//}
//
//int countWord(char* string, const char* word)
//{
//	const char delimiters[] = " \n\t,.;:!?";
//	char* next_token = nullptr;
//	int wordCounter = 0;
//	char* token = strtok_s(string, delimiters, &next_token);
//
//	while (token != nullptr)
//	{
//		if (strcmp(token, word) == 0)
//			wordCounter++;
//
//		token = strtok_s(nullptr, delimiters, &next_token);
//	}
//
//	return wordCounter;
//}
//
//size_t countSubstring(const char* string, const char* substring)
//{
//	size_t substringCounter = 0, substringLength = strlen(substring);
//	const char* ii = string, * stringEnd = string + strlen(string);
//
//	do
//	{
//		const char* foundsubstring = strstr(ii, substring);
//
//		if (foundsubstring != nullptr )
//		{
//			substringCounter++;
//			ii = foundsubstring + substringLength;
//		}
//		else break;
//
//	} while (ii < stringEnd);
//
//	return substringCounter;
//}
//
//int countDotComma(const char* string)
//{
//	int counter = 0;
//
//	for ( ; *string != '\0'; string++)
//		if (*string == '.' || *string == ',')
//			counter++;
//
//	return counter;
//}
//
//char* reverseString(char* string)
//{
//	char* stringBegin = string;
//
//	char* stringEnd = string + mystrlen(string) - 1;
//
//	while ( string < stringEnd )
//		swap(*string++, *stringEnd--);
//
//	return stringBegin;
//}
//
//inline int mystrlen(const char* str)
//{
//	int counter = 0;
//	for ( ; *str != '\0'; counter++, str++);
//	return counter;
//}
//
//template<typename T>
//inline void swap(T &a, T &b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int countSentences(const char* string)
//{
//	int sentenceCounter = 0;
//
//	for ( ; *string != '\0'; string++)
//		if (*string == '.' || *string == '!' || *string == '?')
//			sentenceCounter++;
//
//	return sentenceCounter;
//}
//
//template<typename T>
//inline void reverseRAM(T* begin, T* end)
//{
//	while (begin < end)
//		swap(*begin++, *end--);
//}
//
//char* reverseWords(char* string)
//{
//	size_t outStringLength = strlen(string) + 1;
//	char* outString = new char[outStringLength];
//	*outString = '\0';
//	const char delimiters[] = " ";
//	char* next_token = nullptr;
//	char* token = strtok_s(string, delimiters, &next_token);
//
//	while (token != nullptr)
//	{
//		reverseString(token);
//		strcat_s(outString, outStringLength, token);
//		size_t currentLength = strlen(outString) + 1;
//
//		if (currentLength < outStringLength)
//		{
//			outString[currentLength - 1] = ' ';
//			outString[currentLength] = '\0';
//		}
//
//		token = strtok_s(nullptr, delimiters, &next_token);
//	}
//
//	return outString;
//}


/*
Написать функцию, добавляющую строку
двухмерному массиву в конец.
*/

//#include <iostream>
//#include <iomanip>
//#include <ctime>
//
////typedef long double elementType;
//using elementType = int;
//
//const size_t LEFT = 0, RIGHT = 10;
//
//template<typename T>
//inline void print(const T* begin, const T* const end);
//
//template<typename T>
//void print(const T** const array2D, const size_t nRows, const size_t nColumns);
//
//template<typename T>
//inline void initialize(T* begin, T* const end, const int left = LEFT,
//												const int right = RIGHT);
//
//template<typename T>
//inline void copy(T* outBegin, T* const outEnd, const T* inBegin,
//													const T* const inEnd);
//
//template<typename T>
//T** addRowAtEnd(T** array2D, const size_t nRows, const size_t nColumns);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//
//	std::cout << "Введите размеры массива: ";
//	size_t nRows, nColumns;
//	std::cin >> nRows >> nColumns;
//
//	elementType** array2D;
//
//	try
//	{
//		array2D = new elementType * [nRows];
//
//		for (int ii = 0; ii < nRows; ii++)
//			array2D[ii] = new elementType[nColumns];
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		std::cerr << "\x1b[31mAllocation failed: " << exception.what() << "\x1b[0m\n\a";
//		return 1;
//	}
//
//	std::cout << "Исходный массив:\n";
//
//	for (decltype(array2D) ii = array2D; ii < array2D + nRows; ii++)
//	{
//		initialize(*ii, *ii + nColumns);
//		print(*ii, *ii + nColumns);
//		std::cout << std::endl;
//	}
//
//	try
//	{
//		array2D = addRowAtEnd(array2D, nRows, nColumns);
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		std::cerr << "\x1b[31mAllocation failed: " << exception.what() << "\x1b[0m\n\a";
//		return 1;
//	}
//
//	std::cout << "Новый массив:\n";
//	print(const_cast<const elementType**>(array2D), nRows + 1, nColumns);
//
//	for (int ii = 0; ii < nRows + 1; ii++)
//		delete[] array2D[ii];
//
//	delete[] array2D;
//	return 0;
//}
//
//template<typename T>
//T** addRowAtEnd(T ** array2D, const size_t nRows, const size_t nColumns)
//{
//	T** newArray2D = new T * [nRows + 1];
//	copy(newArray2D, newArray2D + nRows, array2D, array2D + nRows);
//	newArray2D[nRows] = new T[nColumns];
//	initialize(*(newArray2D + nRows), *(newArray2D + nRows) + nColumns);
//	delete[] array2D;
//	return newArray2D;
//}
//
//template<typename T>
//inline void copy(T* outBegin, T* const outEnd, const T* inBegin, const T* const inEnd)
//{
//	while ( inBegin < inEnd)
//		*outBegin++ = *inBegin++;
//}
//
//template<typename T>
//inline void initialize(T* begin, T* const end, const int left, const int right)
//{
//	for (; begin < end; begin++)
//		*begin = static_cast<T>(rand() % (right - left + 1) + left);
//}
//
//template<typename T>
//inline void print(const T* begin, const T* const end)
//{
//	while (begin < end)
//		std::cout << std::setw(3) << *begin++;
//}
//
//template<typename T>
//void print(const T** const array2D, const size_t nRows, const size_t nColumns)
//{
//	for (const T** ii = array2D; ii < array2D + nRows; ii++)
//	{
//		print(*ii, *ii + nColumns);
//		std::cout << std::endl;
//	}
//}


/*
Написать функцию, добавляющую строку
двухмерному массиву в начало.
*/

//#include <iostream>
//#include <iomanip>
//#include <ctime>
//
////typedef long double elementType;
//using elementType = int;
//
//const size_t LEFT = 0, RIGHT = 10;
//
//template<typename T>
//inline void print(const T* begin, const T* const end);
//
//template<typename T>
//void print(const T** const array2D, const size_t nRows, const size_t nColumns);
//
//template<typename T>
//inline void initialize(T* begin, T* const end, const int left = LEFT,
//												const int right = RIGHT);
//
//template<typename T>
//inline void copy(T* outBegin, T* const outEnd, const T* inBegin,
//													const T* const inEnd);
//
//template<typename T>
//T** addRowAtBegin(T** array2D, const size_t nRows, const size_t nColumns);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//
//	std::cout << "Введите размеры массива: ";
//	size_t nRows, nColumns;
//	std::cin >> nRows >> nColumns;
//
//	elementType** array2D;
//
//	try
//	{
//		array2D = new elementType * [nRows];
//
//		for (int ii = 0; ii < nRows; ii++)
//			array2D[ii] = new elementType[nColumns];
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		std::cerr << "\x1b[31mAllocation failed: " << exception.what() << "\x1b[0m\n\a";
//		return 1;
//	}
//
//	std::cout << "Исходный массив:\n";
//
//	for (decltype(array2D) ii = array2D; ii < array2D + nRows; ii++)
//	{
//		initialize(*ii, *ii + nColumns);
//		print(*ii, *ii + nColumns);
//		std::cout << std::endl;
//	}
//
//	try
//	{
//		array2D = addRowAtBegin(array2D, nRows, nColumns);
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		std::cerr << "\x1b[31mAllocation failed: " << exception.what() << "\x1b[0m\n\a";
//		return 1;
//	}
//
//	std::cout << "Новый массив:\n";
//	print(const_cast<const elementType**>(array2D), nRows + 1, nColumns);
//
//	for (int ii = 0; ii < nRows + 1; ii++)
//		delete[] array2D[ii];
//
//	delete[] array2D;
//	return 0;
//}
//
//template<typename T>
//T** addRowAtBegin(T ** array2D, const size_t nRows, const size_t nColumns)
//{
//	T** newArray2D = new T * [nRows + 1];
//	*newArray2D = new T[nColumns];
//	copy(newArray2D + 1, newArray2D + nRows, array2D, array2D + nRows);
//	initialize(*newArray2D, *newArray2D + nColumns);
//	delete[] array2D;
//	return newArray2D;
//}
//
//template<typename T>
//inline void copy(T* outBegin, T* const outEnd, const T* inBegin, const T* const inEnd)
//{
//	while ( inBegin < inEnd)
//		*outBegin++ = *inBegin++;
//}
//
//template<typename T>
//inline void initialize(T* begin, T* const end, const int left, const int right)
//{
//	for (; begin < end; begin++)
//		*begin = static_cast<T>(rand() % (right - left + 1) + left);
//}
//
//template<typename T>
//inline void print(const T* begin, const T* const end)
//{
//	while (begin < end)
//		std::cout << std::setw(3) << *begin++;
//}
//
//template<typename T>
//void print(const T** const array2D, const size_t nRows, const size_t nColumns)
//{
//	for (const T** ii = array2D; ii < array2D + nRows; ii++)
//	{
//		print(*ii, *ii + nColumns);
//		std::cout << std::endl;
//	}
//}


/*
Написать функцию, добавляющую строку
двухмерному массиву в указанную позицию.
*/

//#include <iostream>
//#include <iomanip>
//#include <ctime>
//
////typedef long double elementType;
//using elementType = int;
//
//const size_t LEFT = 0, RIGHT = 10;
//
//template<typename T>
//inline void print(const T* begin, const T* const end);
//
//template<typename T>
//void print(const T** const array2D, const size_t nRows, const size_t nColumns);
//
//template<typename T>
//inline void initialize(T* begin, T* const end, const int left = LEFT,
//												const int right = RIGHT);
//
//template<typename T>
//inline void copy(T* outBegin, T* outEnd, T* inBegin,
//													T* const inEnd);
//
//template<typename T>
//T** addRow(const T** const array2D, const size_t nRows, const size_t nColumns,
//	const size_t rowNo);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//
//	std::cout << "Введите размеры массива: ";
//	size_t nRows, nColumns;
//	std::cin >> nRows >> nColumns;
//
//	elementType** array2D;
//
//	try
//	{
//		array2D = new elementType * [nRows];
//
//		for (int ii = 0; ii < nRows; ii++)
//			array2D[ii] = new elementType[nColumns];
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		std::cerr << "\x1b[31mAllocation failed: " << exception.what() << "\x1b[0m\n\a";
//		return 1;
//	}
//
//	std::cout << "Исходный массив:\n";
//
//	for (decltype(array2D) ii = array2D; ii < array2D + nRows; ii++)
//	{
//		initialize(*ii, *ii + nColumns);
//		print(*ii, *ii + nColumns);
//		std::cout << std::endl;
//	}
//
//	size_t rowNo;
//	std::cout << "Введите номер строки для добавления: ";
//	std::cin >> rowNo;
//
//	try
//	{
//		array2D = addRow(const_cast<const elementType** const>(array2D), nRows, nColumns, rowNo);
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		std::cerr << "\x1b[31mAllocation failed: " << exception.what() << "\x1b[0m\n\a";
//		return 1;
//	}
//
//	std::cout << "Новый массив:\n";
//	print(const_cast<const elementType**>(array2D), nRows + 1, nColumns);
//
//	for (int ii = 0; ii < nRows + 1; ii++)
//		delete[] array2D[ii];
//
//	delete[] array2D;
//	return 0;
//}
//
//template<typename T>
//T** addRow(const T ** const array2D, const size_t nRows, const size_t nColumns,
//	const size_t rowNo)
//{
//	T** newArray2D = new T * [nRows + 1];
//	*(newArray2D + rowNo) = new T[nColumns];
//
//	copy(const_cast<T**>(newArray2D), const_cast<T**>(newArray2D + rowNo),
//		const_cast<T**>(array2D), const_cast<T** const>(array2D + rowNo));
//
//	initialize(*(newArray2D + rowNo), *(newArray2D + rowNo) + nColumns);
//
//	copy(const_cast<T**>(newArray2D + rowNo + 1),
//		const_cast<T**>(newArray2D + nRows), const_cast<T**>(array2D + rowNo),
//		const_cast<T** const>(array2D + nRows));
//
//	delete[] array2D;
//	return newArray2D;
//}
//
//template<typename T>
//inline void copy(T* outBegin, T* outEnd, T* inBegin, T* const inEnd)
//{
//	while ( inBegin < inEnd)
//		*outBegin++ = *inBegin++;
//}
//
//template<typename T>
//inline void initialize(T* begin, T* const end, const int left, const int right)
//{
//	for (; begin < end; begin++)
//		*begin = static_cast<T>(rand() % (right - left + 1) + left);
//}
//
//template<typename T>
//inline void print(const T* begin, const T* const end)
//{
//	while (begin < end)
//		std::cout << std::setw(3) << *begin++;
//}
//
//template<typename T>
//void print(const T** const array2D, const size_t nRows, const size_t nColumns)
//{
//	for (const T** ii = array2D; ii < array2D + nRows; ii++)
//	{
//		print(*ii, *ii + nColumns);
//		std::cout << std::endl;
//	}
//}


/*
Написать функцию, удаляющую строку двух-
мерного массива по указанному номеру.
*/

//#include <iostream>
//#include <iomanip>
//#include <ctime>
//
////typedef long double elementType;
//using elementType = int;
//
//const size_t LEFT = 0, RIGHT = 10;
//
//template<typename T>
//inline void print(const T* begin, const T* const end);
//
//template<typename T>
//void print(const T** const array2D, const size_t nRows, const size_t nColumns);
//
//template<typename T>
//inline void initialize(T* begin, T* const end, const int left = LEFT,
//												const int right = RIGHT);
//
//template<typename T>
//inline void copyRow(T* outBegin, T* const outEnd, const T* inBegin,
//													const T* const inEnd);
//
//template<typename T>
//T** removeRow(T** array2D, const size_t nRows, const size_t nColumns,
//		const size_t rowNo);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//
//	std::cout << "Введите размеры массива: ";
//	size_t nRows, nColumns;
//	std::cin >> nRows >> nColumns;
//
//	elementType** array2D;
//
//	try
//	{
//		array2D = new elementType * [nRows];
//
//		for (int ii = 0; ii < nRows; ii++)
//			array2D[ii] = new elementType[nColumns];
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		std::cerr << "\x1b[31mAllocation failed: " << exception.what() << "\x1b[0m\n\a";
//		return 1;
//	}
//
//	std::cout << "Исходный массив:\n";
//
//	for (decltype(array2D) ii = array2D; ii < array2D + nRows; ii++)
//	{
//		initialize(*ii, *ii + nColumns);
//		print(*ii, *ii + nColumns);
//		std::cout << std::endl;
//	}
//
//	size_t rowNo;
//	std::cout << "Введите номер строки для удалепния: ";
//	std::cin >> rowNo;
//
//	try
//	{
//		array2D = removeRow(array2D, nRows, nColumns, rowNo);
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		std::cerr << "\x1b[31mAllocation failed: " << exception.what() << "\x1b[0m\n\a";
//		return 1;
//	}
//	catch (const char *message)
//	{
//		std::cerr << "\x1b[31m" << message << "\x1b[0m\n\a";
//		return 2;
//	}
//
//	std::cout << "Новый массив:\n";
//	print(const_cast<const elementType**>(array2D), nRows - 1, nColumns);
//
//	for (int ii = 0; ii < nRows - 1; ii++)
//		delete[] array2D[ii];
//
//	delete[] array2D;
//	return 0;
//}
//
//template<typename T>
//T** removeRow(T ** array2D, const size_t nRows, const size_t nColumns,
//		const size_t rowNo)
//{
//	if (rowNo >= nRows)
//		throw "Wrong row number!";
//
//	T** const newArray2D = new T * [nRows - 1];
//
//	copyRow(newArray2D, newArray2D + rowNo, array2D, array2D + rowNo);
//	copyRow(newArray2D + rowNo, newArray2D + nRows, array2D + rowNo + 1, array2D + nRows);
//
//	delete[] array2D[rowNo], array2D;
//	return newArray2D;
//}
//
//template<typename T>
//inline void copyRow(T* outBegin, T* const outEnd, const T* inBegin, const T* const inEnd)
//{
//	while ( inBegin < inEnd)
//		*outBegin++ = *inBegin++;
//}
//
//template<typename T>
//inline void initialize(T* begin, T* const end, const int left, const int right)
//{
//	for (; begin < end; begin++)
//		*begin = static_cast<T>(rand() % (right - left + 1) + left);
//}
//
//template<typename T>
//inline void print(const T* begin, const T* const end)
//{
//	while (begin < end)
//		std::cout << std::setw(3) << *begin++;
//}
//
//template<typename T>
//void print(const T** const array2D, const size_t nRows, const size_t nColumns)
//{
//	for (const T** ii = array2D; ii < array2D + nRows; ii++)
//	{
//		print(*ii, *ii + nColumns);
//		std::cout << std::endl;
//	}
//}


/*
Задание 1. Создайте объединение, состоящее из целого
числа и массива символов.
Напишите следующие функции:
■ Ввести целое число;
■ Просмотреть все байты числа;
■ Просмотреть выбранный байт числа;
■ Вывод байтов числа в двоичном и шестнадцатерич-
ном виде.
*/

//#include <iostream>
//#include <bitset>
//
//using elementType = unsigned long long;
//
//template<typename T>
//union IntByBytes //наложение
//{
//	T number;
//	unsigned char bytes[sizeof(number)];
//};
//
//template<typename T>
//inline void input(IntByBytes<T>& intByBytes);
//
//template<typename T>
//inline void print(const IntByBytes<T>& intByBytes);
//
//template<typename T>
//inline void print(const IntByBytes<T>& intByBytes, const int index);
//
//template<typename T>
//void printBinHex(const IntByBytes<T>& intByBytes);
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Введите число: ";
//	IntByBytes<elementType> intByBytes;
//	input(intByBytes);
//	
//	std::cout << "Байты числа " << intByBytes.number << ":\n";
//	print(intByBytes);
//
//	std::cout << "\nВведите индекс: ";
//	int index;
//	std::cin >> index;
//	print(intByBytes, index);
//
//	printBinHex(intByBytes);
//
//	return 0;
//}
//
//template<typename T>
//inline void input(IntByBytes<T>& intByBytes)
//{
//	std::cin >> intByBytes.number;
//}
//
//template<typename T>
//inline void print(const IntByBytes<T>& intByBytes)
//{
//	for (size_t ii = 0; ii < sizeof(intByBytes.number); ii++)
//		std::cout << ii << "-й байт: "
//			<< static_cast<int>(intByBytes.bytes[ii]) << '\n';
//}
//
//template<typename T>
//void printBinHex(const IntByBytes<T>& intByBytes)
//{
//	std::cout << "\nВ двоичном виде:\n";
//
//	for (size_t ii = 0; ii < sizeof(intByBytes.number); ii++)
//		std::cout << ii << "-й байт: "
//			<< std::bitset<8 * sizeof(intByBytes.bytes[0])>(intByBytes.bytes[ii])
//				<< '\n';
//
//	std::cout << "\nВ шестнадцатеричном виде:\n";
//
//	for (size_t ii = 0; ii < sizeof(intByBytes.number); ii++)
//		std::cout << ii << "-й байт: "
//			<< std::hex << static_cast<int>(intByBytes.bytes[ii]) << '\n';
//}
//
//template<typename T>
//inline void print(const IntByBytes<T>& intByBytes, const int index)
//{
//	std::cout << index << "-й байт: "
//		<< static_cast<int>(intByBytes.bytes[index]);
//}


/*
Задание 2. Реализовать 4-х байтовую целую переменную,
к которой можно обращаться и как к знаковому целому,
и как беззнаковому целому, без явного преобразования
типов. Для этого используйте объединение.
*/

//#include <iostream>
//#include <bitset>
//
//union Variable //наложение
//{
//	short number;
//	unsigned short uNumber;
//};
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Введите число: ";
//	Variable variable;
//	std::cin >> variable.number;
//	std::cout << "Безнаковое: " << variable.uNumber;
//
//	return 0;
//}


/*
Задание 3. Создайте объединение, состоящее из целого
числа и массива логических переменных. Напишите сле-
дующие функции:
■ Ввести целое число;
■ Посчитать сколько нулевых байтов у числа;
■ Вывод информации о байтах числа (нулевой, не ну-
левой).
*/

//#include <iostream>
//#include <bitset>
//
//using elementType = long long;
//
//template<typename T>
//union Compound //наложение
//{
//	T number;
//	bool array[sizeof(number)];
//};
//
//template<typename T>
//int countZeroBytes(const Compound<T>& compound);
//
//template<typename T>
//inline void input(Compound<T>& compound);
//
//template<typename T>
//void print(const Compound<T>& compound);
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Введите число: ";
//	Compound<elementType> compound;
//	input(compound);
//
//	std::cout << "Количество нулевых байтов у числа: "
//		<< countZeroBytes(compound);
//	
//	std::cout << "\nИнформация о байтах числа:\n";
//	print(compound);
//
//	return 0;
//}
//
//template<typename T>
//inline void input(Compound<T>& compound)
//{
//	std::cin >> compound.number;
//}
//
//template<typename T>
//int countZeroBytes(const Compound<T>& compound)
//{
//	int counter = 0;
//
//	for (int ii = 0; ii < sizeof(compound.number); ii++)
//		if (!compound.array[ii])
//			counter++;
//
//	return counter;
//}
//
//template<typename T>
//void print(const Compound<T>& compound)
//{
//	for (int ii = 0; ii < sizeof(compound.number); ii++)
//		std::cout << ii << "-й байт "
//		<< (compound.array[ii] ? "не нулевой" : "нулевой") << std::endl;
//}


/*
Задание 1. С помощью директивы #define написать сле-
дующие макросы:
■ Нахождение меньшего из двух чисел;
■ Нахождение большего из двух чисел;
■ Возведение числа в квадрат;
■ Возведение числа в степень;
■ Проверка числа на четность;
■ Проверка числа на нечетность.
*/

//#include<iostream>
//
//#define min(a, b) ((a) < (b) ? (a) : (b))
//
//typedef int elementType;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Введите два числа: ";
//	elementType a, b;
//	std::cin >> a >> b;
//	std::cout << "min(" << a << "; " << b << ") = " << min(a, b);
//	return 0;
//}

//#include<iostream>
//
//struct Date
//{
//	unsigned weekDay : 3; // 2^3 = 8
//	unsigned dayNo : 5; // 2^5 = 32
//	unsigned month : 4; // 2^4 = 16
//	int year : 20; // 2^20 approximately 10^6
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "Введите номер дня недели (0 - понедельник): ";
//	unsigned weekDay;
//	std::cin >> weekDay;
//
//	std::cout << "Введите число месяца: ";
//	unsigned dayNo;
//	std::cin >> dayNo;
//
//	std::cout << "Введите номер месяца: ";
//	unsigned month;
//	std::cin >> month;
//
//	std::cout << "Введите номер года: ";
//	unsigned year;
//	std::cin >> year;
//
//	Date date;
//
//	date.weekDay = weekDay;
//	date.dayNo = dayNo;
//	date.month = month;
//	date.year = year;
//
//	std::cout << "Номер дня недели: " << date.weekDay
//		<< "\nЧисло месяца: " << date.dayNo
//		<< "\nНомер месяца: " << date.month
//		<< "\nYear: " << date.year << "\nsizeof(date) = " << sizeof(date);
//
//	return 0;
//}


/*
Задание 1. Дан текстовый файл. Необходимо создать
новый файл, в который переписать из исходного файла
все слова, состоящие не менее чем из семи букв.
*/

//#include<iostream>
//#include<fstream>
//
//const int bufferSize = 1024;
//const int wordSize = 7;
//
//int main(int argc, char **argv)
//{
//	setlocale(LC_ALL, "Russian");
//
//	const char* inFileName = "in_file.txt1";
//	const char* outFileName = "out_file.txt1";
//
//	if (argc == 3)
//	{ 
//		inFileName = argv[2];
//		outFileName = argv[1];
//	}
//
//	std::ifstream inFile;
//	inFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
//
//	try
//	{
//		inFile.open(inFileName);
//	}
//	catch (const std::ios_base::failure& error)
//	{
//		std::cerr << "\x1b[31m\nException occured when opening the file "
//			<< inFileName << ": " << error.what() << "\n\a\x1b[0m";
//
//		return 1;
//	}
//
//	std::ofstream outFile;
//	outFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
//
//	try
//	{
//		outFile.open(outFileName);
//	}
//	catch (const std::ios_base::failure& error)
//	{
//		std::cerr << "\x1b[31m\nException occured when opening the file "
//			<< outFileName << ": " << error.what() << "\n\a\x1b[0m";
//
//		return 2;
//	}
//
//	char* buffer = nullptr;
//
//	try
//	{
//		buffer = new char[bufferSize];
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		std::cerr << "\x1b[31m" << exception.what() << "\n\a\x1b[0m";
//	}
//
//	while (!inFile.eof())
//	{
//		try
//		{
//			inFile >> buffer;
//		}
//		catch (const std::ios_base::failure& error)
//		{
//			std::cerr << "\x1b[31m\nException occured when reading the file "
//				<< inFileName << ": " << error.what() << "\n\a\x1b[0m";
//
//			return 3;
//		}
//
//		if (strlen(buffer) >= wordSize)
//			try
//			{
//				outFile << buffer << ' ';
//			}
//			catch (const std::ios_base::failure& error)
//			{
//				std::cerr << "\x1b[31m\nException occured when writing the file "
//					<< outFileName << ": " << error.what() << "\n\a\x1b[0m";
//
//				return 4;
//			}
//	}
//
//	try
//	{
//		inFile.close();
//	}
//	catch (const std::ios_base::failure& error)
//	{
//		std::cerr << "\x1b[31m\nException occured when closing the file "
//			<< inFileName << ": " << error.what() << "\n\a\x1b[0m";
//
//		return 5;
//	}
//
//
//	try
//	{
//		outFile.close();
//	}
//	catch (const std::ios_base::failure& error)
//	{
//		std::cerr << "\x1b[31m\nException occured when closing the file "
//			<< outFileName << ": " << error.what() << "\n\a\x1b[0m";
//
//		return 6;
//	}
//
//	delete[] buffer;
//	return 0;
//}
