//#include <iostream>
//#include <string>
//
//using namespace std;
//using elementType = int;
//
//const int LENGTH = 10;
//
//struct Book
//{
//    string title;
//    string author;
//    string publisher;
//    string genre;
//};
//
//template <typename T>
//auto Swap(T& a, T& b) -> void;
//
//template <typename T>
//void creatBook(T& book);
//
//template <typename T>
//void editBook(T& book);
//
//template <typename T>
//void printBooks(const T* books, int size);
//
//template <typename T>
//void searchByAuthor(const T* books, int size, const string& author);
//
//template <typename T>
//void searchByTitle(const T* books, int size, const string& title);
//
//template <typename T>
//void sortByTitle(T* books, int size);
//
//template <typename T>
//void sortByAuthor(T* books, int size);
//
//template <typename T>
//void sortByPublisher(T* books, int size);
//
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    /* Задание 1. Разработайте программу «Библиотека». Создайте структуру «Книга» 
//    (название, автор, издательство, жанр). Создайте массив из 10 книг. Реализуйте 
//    для него следующие возможности:
//    1) Редактировать книгу;
//    2) Печать всех книг;
//    3) Поиск книг по автору;
//    4) Поиск книги по названию;
//    5) Сортировка массива по названию книг;
//    6) Сортировка массива по автору;
//    7) Сортировка массива по издательству. */
//
//  Book* books;
//	try
//	{
//        books = new Book[LENGTH];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//    cout << "Редактирование книг:" << endl;
//    for (int i = 0; i < LENGTH; i++) {
//        cout << "Введите информацию для книги " << i + 1 << ":" << endl;
//        creatBook(books[i]);
//        cout << endl;
//    }
//    while (true)
//    {
//        int choice;
//        cout << "Выберете действие с книгами:\n";
//        cout << "0) - выйти из программы;\n"
//            << "1) - Редактировать книгу;\n"
//            << "2) - Печать всех книг;\n"
//            << "3) - Поиск книг по автору;\n"
//            << "4) - Поиск книги по названию;\n"
//            << "5) - Сортировка массива по названию книг;\n"
//            << "6) - Сортировка массива по автору;\n"
//            << "7) - Сортировка массива по издательству." << endl;
//        cout << "Введите цифру от 0 до 7: ";
//        cin >> choice;
//
//        switch (choice)
//        {
//            case 0:
//            {
//                delete[] books;
//                return 0;
//            }
//            case 1:
//            {
//                int tmpBook;
//                cout << "Выберете номер книги от 1 до 10 которую хотите отредактировать: ";
//                cin >> tmpBook;
//                if (tmpBook < 1 || tmpBook > 10)
//                {
//                    cerr << "Ошибка вы ввели не правильный номер книги! Попробуйте снова!";
//                    continue;
//                }
//                editBook(books[tmpBook - 1]);
//                break;
//            }
//            case 2:
//            {
//                cout << "Печать всех книг:" << endl;
//                printBooks(books, LENGTH);
//                break;
//            }
//            case 3:
//            {
//                cout << "Поиск книг по автору:" << endl;
//                string author;
//                cout << "Введите автора для поиска: ";
//                cin.ignore(1024, '\n');
//                getline(cin, author);
//                searchByAuthor(books, LENGTH, author);
//                break;
//            }
//            case 4:
//            {
//                cout << "Поиск книги по названию:" << endl;
//                string title;
//                cout << "Введите название для поиска: ";
//                cin.ignore(1024, '\n');
//                getline(cin, title);
//                searchByTitle(books, LENGTH, title);
//                break;
//            }
//            case 5:
//            {
//                cout << "Сортировка массива по названию книг:" << endl;
//                sortByTitle(books, LENGTH);
//                printBooks(books, LENGTH);
//                break;
//            }
//            case 6:
//            {
//                cout << "Сортировка массива по автору:" << endl;
//                sortByAuthor(books, LENGTH);
//                printBooks(books, LENGTH);
//                break;
//            }
//            case 7:
//            {
//                cout << "Сортировка массива по издательству:" << endl;
//                sortByPublisher(books, LENGTH);
//                printBooks(books, LENGTH);
//                break;
//            }
//            default:
//                break;
//        }
//    }
//
//    delete[] books;
//    return 0;
//}
//
//
//template <typename T>
//auto Swap(T& a, T& b) -> void
//{
//    T tmp = a;
//    a = b;
//    b = tmp;
//}
//
//template <typename T>
//void creatBook(T& book)
//{
//    cout << "Введите название книги: ";
//    getline(cin, book.title);
//
//    cout << "Введите автора книги: ";
//    getline(cin, book.author);
//
//    cout << "Введите издательство книги: ";
//    getline(cin, book.publisher);
//
//    cout << "Введите жанр книги: ";
//    getline(cin, book.genre);
//}
//
//
//template <typename T>
//void editBook(T& book)
//{
//    cout << "Введите название книги: ";
//    cin.ignore();// очищаем буфер
//    getline(cin, book.title);
//
//    cout << "Введите автора книги: ";
//    getline(cin, book.author);
//
//    cout << "Введите издательство книги: ";
//    getline(cin, book.publisher);
//
//    cout << "Введите жанр книги: ";
//    getline(cin, book.genre);
//}
//
//
//template <typename T>
//void printBooks(const T* books, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << "Книга " << i + 1 << ":" << endl;
//        cout << "Название: " << books[i].title << endl;
//        cout << "Автор: " << books[i].author << endl;
//        cout << "Издательство: " << books[i].publisher << endl;
//        cout << "Жанр: " << books[i].genre << endl;
//        cout << endl;
//    }
//}
//
//
//template <typename T>
//void searchByAuthor(const T* books, int size, const string& author)
//{
//    bool found = false;
//    for (int i = 0; i < size; i++)
//    {
//        if (books[i].author == author)
//        {
//            cout << "Книга найдена:" << endl;
//            cout << "Название: " << books[i].title << endl;
//            cout << "Автор: " << books[i].author << endl;
//            cout << "Издательство: " << books[i].publisher << endl;
//            cout << "Жанр: " << books[i].genre << endl;
//            found = true;
//        }
//    }
//
//    if (found == false)
//        cout << "Книги автора " << author << " не найдены." << endl;
//}
//
//
//template <typename T>
//void searchByTitle(const T* books, int size, const string& title)
//{
//    bool found = false;
//    for (int i = 0; i < size; i++)
//    {
//        if (books[i].title == title)
//        {
//            cout << "Книга найдена:" << endl;
//            cout << "Название: " << books[i].title << endl;
//            cout << "Автор: " << books[i].author << endl;
//            cout << "Издательство: " << books[i].publisher << endl;
//            cout << "Жанр: " << books[i].genre << endl;
//            found = true;
//            break;
//        }
//    }
//
//    if (found == false)
//        cout << "Книга с названием " << title << " не найдена." << endl;
//
//}
//
//
//template <typename T>
//void sortByTitle(T* books, int size)
//{
//    for (int i = 0; i < size - 1; i++)
//        for (int j = 0; j < size - i - 1; j++)
//            if (books[j].title > books[j + 1].title)
//                Swap(books[j], books[j + 1]);
//}
//
//
//template <typename T>
//void sortByAuthor(T* books, int size)
//{
//    for (int i = 0; i < size - 1; i++)
//        for (int j = 0; j < size - i - 1; j++)
//            if (books[j].author > books[j + 1].author)
//                Swap(books[j], books[j + 1]);
//}
//
//
//template <typename T>
//void sortByPublisher(T* books, int size)
//{
//    for (int i = 0; i < size - 1; i++)
//        for (int j = 0; j < size - i - 1; j++)
//            if (books[j].publisher > books[j + 1].publisher)
//                Swap(books[j], books[j + 1]);
//}