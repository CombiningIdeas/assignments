//#include <iostream>
//#include <string>
//
//using namespace std;
//using elementType = string;
//
//const int LENGTHNAMEANDPHONE = 2;// 0 - строка это имя, 
//// а 1 - строка это номер телефона
//
//template <typename T>
//auto addContact(T**& matrix, int& length) -> void;
//// T**& matrix - пишем значек амперсента чтобы этот массив 
//// можно было удалить и создать заново и эти изменения отобразились в нашем массиве
//// иначе он просто удалиться
//
//template <typename T>
//auto searchByName(T** matrix, const int length, const string name) -> void;
//
//template <typename T>
//auto searchByPhone(T** matrix, const int length, const string phone) -> void;
//
//template <typename T>
//auto outputConsole(T** matrix, const int length) -> void;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    /* Задание 2. Создайте динамический массив, хранящий в первой строке имя, 
//    а во второй — телефон. Организуйте поиск по имени и по номеру телефона 
//    и возможность ввода и изменения данных. */
//
//
//    int length = 0;
//
//    elementType** matrixNameAndPhone;
//    try
//    {
//        matrixNameAndPhone = new elementType*[LENGTHNAMEANDPHONE];
//    
//    	  for (int ii = 0; ii < LENGTHNAMEANDPHONE; ii++)
//            matrixNameAndPhone[ii] = new elementType[length];
//    }
//    catch (const std::bad_alloc&exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        return 1;
//    }
//
//    while (true)
//    {
//        cout << "Меню:" << endl;
//        cout << "1 - Добавить контакт" << endl;
//        cout << "2 - Поиск по имени" << endl;
//        cout << "3 - Поиск по номеру телефона" << endl;
//        cout << "4 - Вывести все контакты" << endl;
//        cout << "5 - Выход" << endl;
//        cout << "Выберите один из вариантов: ";
//
//        int choice;
//        cin >> choice;
//
//        switch (choice)
//        {
//            case 1:
//            {
//                addContact(matrixNameAndPhone, length);
//                break;
//            }
//            case 2:
//            {
//                elementType name;
//                cout << "Введите имя для поиска: ";
//                cin.ignore(1024, '\n');
//                getline(cin, name, '\n');
//                searchByName(matrixNameAndPhone, length, name);
//                break;
//            }
//            case 3:
//            {
//                elementType phone;
//                cout << "Введите номер телефона для поиска: ";
//                cin.ignore(1024, '\n');
//                getline(cin, phone, '\n');
//                searchByPhone(matrixNameAndPhone, length, phone);
//                break;
//            }
//            case 4:
//            {
//                outputConsole(matrixNameAndPhone, length);
//                break;
//            }
//            case 5:
//            {
//                for (int ii = 0; ii < LENGTHNAMEANDPHONE; ii++)
//                    delete[] matrixNameAndPhone[ii];
//
//                delete[] matrixNameAndPhone;
//
//                return 0;
//            }
//            default:
//            {
//                cout << "Некорректный выбор. Попробуйте еще раз." << endl;
//                break;
//            }
//        }
//    }
//
//    for (int ii = 0; ii < LENGTHNAMEANDPHONE; ii++)
//        delete[] matrixNameAndPhone[ii];
//
//    delete[] matrixNameAndPhone;
//
//    return 0;
//}
//
//
//
//template <typename T>
//auto addContact(T**& matrix, int& length) -> void
//{
//    elementType name;
//    elementType phone;
//
//    cout << "Введите имя: ";
//    cin.ignore(1024, '\n');
//    getline(cin, name, '\n');
//    cout << "Введите номер телефона: ";
//    getline(cin, phone, '\n');
//
//    length++;
//
//    elementType** temp = new elementType*[LENGTHNAMEANDPHONE];
//
//    for (int ii = 0; ii < LENGTHNAMEANDPHONE; ii++)
//        temp[ii] = new elementType[length];
//
//
//
//    // копируем старые данные 
//    for (int ii = 0; ii < LENGTHNAMEANDPHONE; ii++)
//        for (int jj = 0; jj < length - 1; jj++)
//            temp[ii][jj] = matrix[ii][jj];
//
//    // записываем новые данные 
//    for (int ii = 0; ii < LENGTHNAMEANDPHONE - 1; ii++)
//        for (int jj = length - 1; jj < length; jj++)
//            temp[ii][jj] = name;
//
//    for (int ii = 1; ii < LENGTHNAMEANDPHONE; ii++)
//        for (int jj = length - 1; jj < length; jj++)
//            temp[ii][jj] = phone;
//
//
//    for (int ii = 0; ii < LENGTHNAMEANDPHONE; ii++)
//        delete[] matrix[ii];
//
//    delete[] matrix;
//
//
//    // еще раз создаем матрицу с расположением в той же части памяти
//    matrix = new elementType*[LENGTHNAMEANDPHONE];
//
//    for (int ii = 0; ii < LENGTHNAMEANDPHONE; ii++)
//        matrix[ii] = new elementType[length];
//
//
//
//    // обратно копируем новый данные в старый двумерный динамический массив
//    for (int ii = 0; ii < LENGTHNAMEANDPHONE; ii++)
//        for (int jj = 0; jj < length; jj++)
//            matrix[ii][jj] = temp[ii][jj];
//
//    // удаляем временный двумерный динамический массив
//    for (int ii = 0; ii < LENGTHNAMEANDPHONE; ii++)
//        delete[] temp[ii];
//
//    delete[] temp;
//    cout << endl;
//}
//
//
//template <typename T>
//auto searchByName(T** matrix, const int length, const string name) -> void
//{
//    bool found = false;
//    int ii = 0, jj = 0;
//    for (; ii < LENGTHNAMEANDPHONE - 1; ii++)
//        for (; jj < length; jj++)
//            if (matrix[ii][jj] == name)
//            {
//                found = true;
//                break;
//            }
//
//
//    if (found == true)
//        cout << "Имя: " << name << " Найден! " << "Телефон: " << matrix[ii][jj] << endl;
//    else if (found == false)
//        cout << "Контакт с именем " << name << " не найден." << endl;
//    cout << endl << endl;
//}
//
//
//template <typename T>
//auto searchByPhone(T** matrix, const int length, const string phone) -> void
//{
//    bool found = false;
//    int ii = 1, jj = 0;
//    for (; ii < LENGTHNAMEANDPHONE; ii++)
//        for (; jj < length; jj++)
//            if (matrix[ii][jj] == phone)
//            {
//                found = true;
//                break;
//            }
//
//    if (found == true)
//        cout << "Телефон: " << phone << " Найден! " << "Имя: " << matrix[ii-2][jj] << endl;
//    else if (found == false)
//        cout << "Контакт с именем " << phone << " не найден." << endl;
//    cout << endl << endl;
//}
//
//
//template <typename T>
//auto outputConsole(T** matrix, const int length) -> void
//{
//    cout << "Контакты:" << endl;
//
//   
//    for (int ii = 0, gg = 1; ii < LENGTHNAMEANDPHONE - 1 && gg < LENGTHNAMEANDPHONE; 
//        ii++, gg++)
//        for (int jj = 0; jj < length; jj++)
//            cout << "Имя: " << matrix[ii][jj] << "; " << "Телефон: " <<  matrix[gg][jj] << '.' << endl;
//
//    cout << endl << endl;
//}