//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Car // создаем новый тип данных для машины
//{
//    // создаем поля для будущего обьекта в соответсвии с заданием
//    double length;
//    double clearance;
//    double engineVolume;
//    double enginePower;
//    double wheelDiameter;
//    string color;
//    string gearboxType;
//};
//
//Car car;// создание обьекта машина
//
//// Функция для задания значений автомобиля
//void setCarValues();
//
//// Функция для отображения значений автомобиля
//void displayCarValues();
//
//// Функция для поиска значений автомобиля по заданному параметру
//void searchCarValues(const string parameter);
//
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    /* Задание 2. Реализовать структуру «Автомобиль» (длина, клиренс (высота
//    посадки), объем двигателя, мощность двигателя, диаметр колес, цвет, 
//    тип коробки передач). Создайте функции для задания значений, 
//    отображения значений, поиска значений. */
//
//    
//
//    cout << "Задайте значения автомобиля:" << endl;
//    setCarValues();
//
//    cout << "Отображение значений автомобиля:" << endl;
//    displayCarValues();
//
//
//    cout << "Примеры параметров для поиска: " << endl;
//    cout << "1) - length\n" << "2) - clearance\n" << "3) - engine volume\n"
//        << "4) - engine power\n" << "5) - wheel diameter\n" << "6) - color\n"
//        << "7) - gearbox type\n\n" << "0 - если хотите прервать поиск\n\n";
//    cout << "Вводите названия а не цифры:\n";
//    cout << "Поиск значений автомобиля:" << endl;
//    while (true)
//    {
//        string searchParameter;
//        cout << "Введите параметр для поиска: ";
//        getline(cin, searchParameter, '\n');
//        if (searchParameter == "0")
//            break;
//        searchCarValues(searchParameter);
//    }
//
//    return 0;
//}
//
//
//void setCarValues()
//{
//    cout << "Введите длину автомобиля(в метрах): ";
//    cin >> car.length;
//    cout << "Введите клиренс (высоту посадки) автомобиля(в миллиметрах): ";
//    cin >> car.clearance;
//    cout << "Введите объем двигателя автомобиля(в литрах): ";
//    cin >> car.engineVolume;
//    cout << "Введите мощность двигателя автомобиля, если что то 1,36 лошадиной силы равно 1 киловатту(в киловаттах): ";
//    cin >> car.enginePower;
//    cout << "Введите диаметр колес автомобиля(в миллиметрах): ";
//    cin >> car.wheelDiameter;
//    cout << "Введите цвет автомобиля(на английском): ";
//    cin.ignore(1024, '\n'); // Очищаем буфер ввода иначе туда ничего не запишется
//    getline(cin, car.color, '\n');
//    cout << "Введите тип коробки передач автомобиля(на английском): ";
//    getline(cin, car.gearboxType, '\n');
//}
//
//
//void displayCarValues()
//{
//    cout << "Длина автомобиля: " << car.length << endl;
//    cout << "Клиренс (высота посадки) автомобиля: " << car.clearance << endl;
//    cout << "Объем двигателя автомобиля: " << car.engineVolume << endl;
//    cout << "Мощность двигателя автомобиля: " << car.enginePower << endl;
//    cout << "Диаметр колес автомобиля: " << car.wheelDiameter << endl;
//    cout << "Цвет автомобиля: " << car.color << endl;
//    cout << "Тип коробки передач автомобиля: " << car.gearboxType << endl;
//}
//
//
//void searchCarValues(const string parameter)
//{
//    if (parameter == "length")
//        cout << "Длина автомобиля: " << car.length << endl;
//    else if (parameter == "clearance")
//        cout << "Клиренс (высота посадки) автомобиля: " << car.clearance << endl;
//    else if (parameter == "engine volume")
//        cout << "Объем двигателя автомобиля: " << car.engineVolume << endl;
//    else if (parameter == "engine power")
//        cout << "Мощность двигателя автомобиля: " << car.enginePower << endl;
//    else if (parameter == "wheel diameter")
//        cout << "Диаметр колес автомобиля: " << car.wheelDiameter << endl;
//    else if (parameter == "color")
//        cout << "Цвет автомобиля: " << car.color << endl;
//    else if (parameter == "gearbox type")
//        cout << "Тип коробки передач автомобиля: " << car.gearboxType << endl;
//    else
//        cout << "Некорректный параметр поиска." << endl;
//}