//#include <iostream>
//#include <cstring>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//void replacementFunction(char* string, char* searchWord, 
//	char* enterWord, char* newString, char *ptr);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 1
//	/* Найдите и замените вхождение некоторого слова на
//	заданное пользователем слово. */
//	char* string, *searchWord, *enterWord, *newString, *ptr = 0;
//
//	try
//	{
//		string = new char[BUFFER_SIZE + 1];
//		searchWord = new char[BUFFER_SIZE + 1];
//		enterWord = new char[BUFFER_SIZE + 1];
//		newString = new char[BUFFER_SIZE + 1];
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		cerr << "allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//
//
//	cout << "Введите начальную строку: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//
//	cout << "Введите слово, которое нужно заменить: ";
//	cin.getline(searchWord, BUFFER_SIZE, '\n');
//
//	cout << "Введите слово, которое нужно вставить: ";
//	cin.getline(enterWord, BUFFER_SIZE, '\n');
//
//	int numberOfOccurrences = strlen(string);
//	while (--numberOfOccurrences > 0)
//		replacementFunction(string, searchWord, enterWord, newString, ptr);
//
//	cout << "Итоговая строка: " << newString;
//
//	delete[] string;
//	delete[] searchWord;
//	delete[] enterWord;
//	delete[] newString;
//
//	return 0;
//}
//
//void replacementFunction(char* string, char* searchWord,
//	char* enterWord, char* newString, char* ptr)
//{
//	char* cursorString = string;
//	char* cursorNewString = newString;
//	char* cursorptr = ptr;
//
//	ptr = strstr(string, searchWord);
//	if (ptr != nullptr)
//	{
//		char* cursorEnterWord = enterWord;
//		char* cursorSearchWord = searchWord;
//
//		int LENGTH = strlen(searchWord);
//
//		for (; string != ptr; string++, newString++)
//			*newString = *string;
//		string = string + LENGTH;
//
//		for (; *enterWord != '\0'; enterWord++, newString++)
//			*newString = *enterWord;
//
//		for (; *string != '\0'; string++, newString++)
//			*newString = *string;
//
//		enterWord = cursorEnterWord;
//		searchWord = cursorSearchWord;
//	}
//	else
//		for (; *string != '\0'; string++, newString++)
//			*newString = *string;
//	*newString = '\0';
//
//	string = cursorString;
//	newString = cursorNewString;
//	ptr = cursorptr;
//	strcpy_s(string, BUFFER_SIZE + 1, newString);
//	// если нужно убрать лишь первое вхождение то можно не копировать 
//	//и убрать цикл снаружи функции(main).
//}