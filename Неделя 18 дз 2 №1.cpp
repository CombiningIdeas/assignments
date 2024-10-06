//#include <iostream>
//using namespace std;
//
//struct Complex // комплексный тип данных
//{
//    double real;// Действительная часть
//    double imaginary;// Мнимая часть
//};
// 
//Complex number1, number2;//создаем два обьекта(два комплексных числа)
//
//// Функция для сложения комплексных чисел
//void sumComplex(Complex& result);
//
//// Функция для вычитания комплексных чисел
//void subtractComplex(Complex& result);
//
//// Функция для умножения комплексных чисел
//void multiplyComplex(Complex& result);
//
//// Функция для деления комплексных чисел
//void divideComplex(Complex& result);
//
//// Функция для вывода комплексного числа
//void outputComplex(const Complex& complexNumber);
//
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    /* Задание 1. Создайте структуру, описывающую комплексное число. Реализуйте 
//    арифметические операции с комплексными числами: сумму, разность, 
//    умножение, деление */
//
//    // помним что i^2 = -1;
//    // z = a + bi. z - комплексное число
//
//    cout << "Вид комплексного числа: z = a + bi; z - комплексное число." << endl;
//    cout << "Пример ввода комплексного числа: 5 3, или -4 -2, или 5 -3;" << endl;
//    cout << "Введите комплексное число №1(действительная и мнимая части через пробел): ";
//    cin >> number1.real >> number1.imaginary;
//
//    cout << "Введите комплексное число №2(действительная и мнимая части через пробел): ";
//    cin >> number2.real >> number2.imaginary;
//
//    // Выполнение арифметических операций
//    // создаем новые обьекты:
//    Complex sum;
//    sumComplex(sum);// присваеваем обьекту поля через функцию
//    Complex subtraction;
//    subtractComplex(subtraction);
//    Complex multiplication;
//    multiplyComplex(multiplication);
//    Complex division;
//    divideComplex(division);
//
//    // Вывод результатов всех арифметических действий
//    cout << "Сумма: ";
//    outputComplex(sum);
//    cout << "Разность: ";
//    outputComplex(subtraction);
//    cout << "Произведение: ";
//    outputComplex(multiplication);
//    cout << "Деление: ";
//    outputComplex(division);
//
//    return 0;
//}
//
//
//void sumComplex(Complex& result)
//{
//    result.real = number1.real + number2.real;// складываем реальные числа
//    result.imaginary = number1.imaginary + number2.imaginary;// складываем мнимые числа
//}
//
//
//void subtractComplex(Complex& result)
//{
//    result.real = number1.real - number2.real;// вычитваем реальные числа
//    result.imaginary = number1.imaginary - number2.imaginary;// вычитваем мнимые числа
//}
//
//
//void multiplyComplex(Complex& result)
//{
//    result.real = number1.real * number2.real - 
//        number1.imaginary * number2.imaginary;
//    result.imaginary = number1.imaginary * number2.real + 
//        number1.real * number2.imaginary;
//}
//
//
//void divideComplex(Complex& result)
//{
//    double denominator = number2.real * number2.real//знаменатель умножаем самого на себя
//        + number2.imaginary * number2.imaginary;
//    result.real = (number1.real * number2.real + 
//        number1.imaginary * number2.imaginary) / denominator;// это числитель деленный на знаменатель в реальном числе
//    result.imaginary = (number1.imaginary * number2.real - 
//        number1.real * number2.imaginary) / denominator;// это числитель деленный на знаменатель в мнимом числе
//}
//
//
//void outputComplex(const Complex& complexNumber)
//{
//    cout << complexNumber.real;// выводим реальное число
//
//    if (complexNumber.imaginary >= 0)// выводим мнимое число
//        cout << " + " << complexNumber.imaginary << "i";
//    else
//        cout << " - " << -complexNumber.imaginary << "i";
//    // пишем второе отрицание потому что минус уже вывели, 
//    // а так будет 2 минуса если один не убрать
//
//    cout << endl;
//}