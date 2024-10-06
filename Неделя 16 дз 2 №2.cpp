//#include <iostream>
//using namespace std;
//
//void upOffer(char* string);
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//	// задание 2
//	/* изменить текст таким образом, 
//	чтобы каждое предложение начиналось с большой буквы. */
//
//	const int BUFFER_SIZE = 1024;
//	char* string, *ptr;
//	try
//	{
//		string = new char[BUFFER_SIZE + 1];
//	}
//	catch (const std::bad_alloc& exception)
//	{
//		cerr << "allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//	cout << "введите строку: ";
//	cin.getline(string, BUFFER_SIZE, '\n');
//	cout << "\nисходная строка: " << string << endl;
//
//	*string = toupper(*string); // делаем заглавное первую букву первого предложжения.
//
//
//	upOffer(string);
//
//	cout << "\n\nитоговая строка: " << string << endl;
//
//	delete[] string;
//
//	return 0;
//}
//
//void upOffer(char* string)
//{
//
//	for (; *string != '\0'; string++)
//		if (*string == '.' || *string == '!' || *string == '?')
//		{
//			string = string + 2;
//			*string = toupper(*string);
//			string = string - 2;
//			// получается елси даже стоит многоточие то 
//			// он вернется обратно и на последнюю точку и среагирует через пробел, 
//			// сделает букву заглавной
//		}
//}