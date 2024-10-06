//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Hello, World!\n";
//	return 0;
//}

//Задание 1. Создать приложение, которое выводит ин -
//формацию о книге, в следующем формате :
//Name: “The warand the peace”
//Avtor : L.N.Tolstoj
//Izdatelstvo : Piter
//Pages : 500.

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "\t\tName\t\t: \"The warand the peace\"\n"
//		"\t\tAvtor\t\t: L.N.Tolstoj\n"
//		"\t\tIzdatelstvo\t: Piter\n"
//		"\t\tPages\t\t: 500.\n";
//
//	return 0;
//}

//Задание 2. Создать приложение, которое выводит на
//кон соль фразу :
//“U lukomor’a dub zelenij,
//Zlataya zep na dupe tom,
//I dnem i nochju kot uchenij
//vse hodit po cepi krugom”
//Сопроводить каждую новую строчку тройным зву -
//ковым сигналом.

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout <<
//		"\a\a\a\t\tU lukomor’a dub zelenij,\n"
//		"\a\a\a\t\tZlataya zep na dupe tom,\n"
//		"\a\a\a\t\tI dnem i nochju kot uchenij\n"
//		"\a\a\a\t\tvse hodit po cepi krugom\n";
//
//	return 0;
//}

//Задание 3. Создать приложение, которое выводит на
//экран следующую таблицу :
//vse hodit po cepi krugom”
//Сопроводить каждую новую строчку тройным звуковым сигналом
//Задание 3.
//Создать приложение, которое выводит на экран следующую таблицу :
//╔════════════════════════════════════════════╗
//║ Vremena goda ║
//╠═════════╦═══════════╦═══════════╦══════════╣
//║ Zima ║ Vesna ║ Leto ║ Osen ║
//╚═════════╩═══════════╩═══════════╩══════════╝

//#include <iostream>
//#include <iomanip>
//
//int main()
//{
////	setlocale(LC_ALL, "Russian");
//
//	std::cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)187 << std::endl;
//
//	std::cout << (char)186 << "\t\t\tVremena goda\t\t\t " << (char)186 << std::endl;
//
//	std::cout << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//		<< (char)205 << (char)205 << (char)185 << std::endl;
//
//	std::cout << (char)186 << std::right << std::setw(10) << "Zima" << (char)186 << std::setw(5) << "Vesna" << (char)186 << "\tLeto" << std::setw(5) << (char)186 << "\tOsen" << std::endl;
//
//	return 0;
//}


//#include <iostream>
//#include <iomanip>
//
//int main()
//{
//	std::cout << static_cast<unsigned char>(201)
//		<< std::setfill(static_cast <char>(205))
//		<< std::setw(75)
//		<< static_cast<unsigned char>(187)
//		<< std::endl;
//
//	std::cout << static_cast<unsigned char>(186)
//		<< std::setfill(' ')
//		<< std::setw(40)
//		<< "Vremena goda"
//		<< std::setw(35)
//		<< static_cast<unsigned char>(186)
//		<< std::endl;
//
//	std::cout << static_cast<unsigned char>(204)
//		<< std::setfill(static_cast < char>(205))
//		<< std::setw(20)
//		<< static_cast<unsigned char>(203)
//		<< std::setw(20)
//		<< static_cast<unsigned char>(203)
//		<< std::setw(20)
//		<< static_cast<unsigned char>(203)
//		<< std::setw(15)
//		<< static_cast<unsigned char>(185)
//		<< std::endl;
//
//	std::cout << static_cast<unsigned char>(186)
//		<< std::setfill(' ')
//		<< std::setw(10)
//		<< "Zima"
//		<< std::setw(10)
//		<< static_cast<unsigned char>(186)
//		<< std::setw(10)
//		<< "Vesna"
//		<< std::setw(10)
//		<< static_cast<unsigned char>(186)
//		<< std::setw(10)
//		<< "Leto"
//		<< std::setw(10)
//		<< static_cast<unsigned char>(186)
//		<< std::setw(10)
//		<< "Osen"
//		<< std::setw(5)
//		<< static_cast<unsigned char>(186)
//		<< std::endl;
//
//	std::cout << static_cast<unsigned char>(200)
//		<< std::setfill(static_cast<char>(205))
//		<< std::setw(20)
//		<< static_cast<unsigned char>(202)
//		<< std::setw(20)
//		<< static_cast<unsigned char>(202)
//		<< std::setw(20)
//		<< static_cast<unsigned char>(202)
//		<< std::setw(15)
//		<< static_cast<unsigned char>(188)
//		<< std::endl;
//
//	return 0;
//}


//Тема: Переменные и типы данных
//Задания для самостоятельной работы 2
//Задание 1. Пользователь вводит год.Необходимо напи -
//сать программу, которая выведет количество дней в этом
//году.При написании программы использовать линейный
//алгоритм(конструкции условного выбора не использо -
//	вать).Например, пользователь ввел год 2004, программа
//	сообщает, что в этом году 366 дней в следующей форме :
//In 2004 year = 366 days

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//	int year;
//	std::cout << "ввведите год: ";
//	std::cin >> year;
//
//	//if (year % 4 == 0)
//	//	std::cout << "в " << year << " году " << 366 << " дней.\n";
//	//else
//	//	std::cout << "в " << year << " году " << 365 << " дней.\n";
//
//	std::cout << "в " << year << " году " << 365 + (year % 4 == 0) << " дней.\n";
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//	int year;
//	std::cout << "ввведите год: ";
//	std::cin >> year;
//	double quotinent = year / 4.;
//	int integerPart = static_cast<int>(quotinent);
//	double fractionPart = quotinent - integerPart;
//	int adjucment = static_cast<int>(1 - fractionPart);
//	std::cout << "в " << year << " году " << 365 + adjucment << " дней.\n";
//
//	return 0;
//}

//#include <iostream>
//#include <ctime>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	unsigned year;
//	std::cout << "введите год: ";
//	std::cin >> year;
//	std::cout << "введите количество раз выполнения цикла: ";
//	size_t length;
//	std::cin >> length;
//	double quotinent;
//	int integerPart, days;
//	time_t startTime = time(nullptr);
//
//	for (size_t ii = 0; ii < length; ii++)
//	{
//		quotinent = year / 4.;
//		integerPart = static_cast<int>(quotinent);
//		days = static_cast<int>(366 + integerPart - quotinent);
//	}
//
//	time_t finishTime = time(nullptr) - startTime;
//	
//	std::cout << "в " << year << " году " << days << " дней. Затраченное время на "
//			<< length << " раз " << finishTime << " c.\n";
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//	int year;
//	std::cout << "введите год: ";
//	std::cin >> year;
//	std::cout << "в " << year << " году " << 365 + ((year & 3) == 0) << " дней.\n";
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//	unsigned year;
//	std::cout << "ввведите год: ";
//	std::cin >> year;
//	unsigned bit0 = year & 1;
//	unsigned bit1 = (year & 0b10) >> 1;
//	unsigned adjucment = bit0 | bit1;
//	std::cout << "в " << year << " году " << 365 + 1 - adjucment << " дней.\n";
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	unsigned year;
//	std::cout << "ввведите год: ";
//	std::cin >> year;
//	unsigned remainder = year % 4;
//	unsigned bit0 = remainder % 2;
//	unsigned bit1 = remainder / 2;
//	unsigned adjucment = (1 - bit0) * (1 - bit1);
//	std::cout << "в " << year << " году " << 365 + adjucment << " дней.\n";
//	return 0;
//}

//#include <iostream>
//#include <ctime>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	unsigned year;
//	std::cout << "введите год: ";
//	std::cin >> year;
//	std::cout << "введите количество раз выполнения цикла: ";
//	size_t length;
//	std::cin >> length;
//	int days;
//	time_t startTime = time(nullptr);
//
//	for (size_t ii = 0; ii < length; ii++)
//		days = 366 - (year & 1 | (year & 0b10) >> 1);
//
//	time_t finishTime = time(nullptr) - startTime;
//	std::cout << "в " << year << " году " << days << " дней. Затраченное время на "
//		<< length << " раз " << finishTime << " c.\n";
//
//	return 0;
//}

//Задание 2. Пользователь вводит с клавиатуры денежную
//сумму в гривнах и копейках(гривны и копейки вводятся
//	в разные переменные).Сумма может быть введена как
//	правильно(например 19 грн. 90 коп), так и неправильно
//	(например 22 грн. 978 коп).Написать программу, которая,
//	используя только линейный алгоритм, осуществит коррек -
//	тировку введенной денежной суммы в правильную форму.
//	Например, если пользователь ввел 11 грн. 150 коп,
//	программа должна вывести на экран сумму 12 грн. 50 коп.

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int rubles, kopecks;
//	std::cout << "Введите рубли и копейки: ";
//	std::cin >> rubles >> kopecks;
//
//	std::cout << "Количество рублей: " << rubles + kopecks / 100
//		<< "\nКоличество копеек: " << kopecks % 100;
//
//	return 0;
//}

//Задание 3. Написать программу вычисления объема па -
//раллелепипеда.Ниже приведен рекомендуемый вид экрана
//во время выполнения программы.

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Вычисление объема параллелепипеда.\nВведите длину, высоту, ширину: ";
//	double length, height, width;
//	std::cin >> length >> height >> width;
//	std::cout << "объема параллелепипеда = " << length * height * width << std::endl;
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Введите число: ";
//	int number;
//	std::cin >> number;
//	std::cout << "Введите показатель степени: ";
//	int degree;
//	std::cin >> degree;
//	std::cout << number << " * 2 ^ " << degree << " = " << (number << degree) << std::endl;
//	std::cout << number << " / 2 ^ " << degree << " = " << (number >> degree) << std::endl;
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Введите номер дня недели: ";
//	int number;
//	std::cin >> number;
//	std::cout << "Время окончания работы магазина: ";
//	std::cout << 17 + (number & 1) << std::endl;
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Введите два числа: ";
//	int a, b;
//	std::cin >> a >> b;
	//a = a + b;
	//b = a - b; // a + b - b = a
	//a = a - b; // a + b - a = b
	
	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;

	//double a, b;
	//std::cin >> a >> b;
	//a = a * b;
	//b = a / b;
	//a = a / b;
//	std::cout << "a = " << a << " b = " << b << std::endl;
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	double mean = 0, number;
//	int n = 1;
//
//	do
//	{
//		std::cout << "Введите число: ";
//		std::cin >> number;
//		mean = (mean * (n - 1) + number) / n++;
//		std::cout << "m = " << mean << std::endl;
//	} while (number != 0);
//
//	return 0;
//}

/*
Задание 1. Пользователь вводит число.Определить, яв -
ляется ли оно четным.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите число: ";
//	int number;
//	std::cin >> number;
//	std::cout << number << ((number & 1) ? " is odd" : " is even");
//
//	return 0;
//}

/*
Задание 2. Пользователь вводит два числа.Вывести на
экран меньшее из этих чисел.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите два числа: ";
//	double number1, number2;
//	std::cin >> number1 >> number2;
//
//	std::cout << "min( " << number1 << "; " << number2 << " ) = "
//		<< ((number1 < number2) ? number1 : number2);
//
//	return 0;
//}

/*
Задание 3. Пользователь вводит число. Определить, по-
ложительное это число, отрицательное или равно нулю.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите число: ";
//	double number;
//	std::cin >> number;
//	std::cout << number;
//
//	if (number > 0)
//		std::cout << " > 0\n";
//	else
//		if (number < 0)
//			std::cout << " < 0\n";
//		else
//			std::cout << " = 0\n";
//
//	return 0;
//}

/*
Задание 4. Пользователь вводит два числа. Определить,
равны ли эти числа, и если нет, вывести их на экран в по-
рядке возрастания.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите два числа: ";
//	double number1, number2;
//	std::cin >> number1 >> number2;
//
//	if (number1 == number2)
//		std::cout << number1;
//	else
//		if (number1 < number2)
//			std::cout << number1 << ", " << number2;
//		else 
//			std::cout << number2 << ", " << number1;
//
//	return 0;
//}

/*
Задание 1. Пользователь с клавиатуры вводит 5 оценок
студента. Определить, допущен ли студент к экзамену.
Студент получает допуск, если его средний балл 4 балла
и выше.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	int summ = 0;
//	std::cout << "введите 5 оценок студента: ";
//	int mark;
//	std::cin >> mark;
//	summ += mark;
//	std::cin >> mark;
//	summ += mark;
//	std::cin >> mark;
//	summ += mark;
//	std::cin >> mark;
//	summ += mark;
//	std::cin >> mark;
//	summ += mark;
//
//	std::cout << ((summ / 5. >= 4) ? "допуск" : "не допуск");
//
//	return 0;
//}

/*
Задание 2. Пользователь вводит с клавиатуры число. Если
оно четное, умножить его на три, иначе — поделить на
два. Результат вывести на экран.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите число: ";
//	int number;
//	std::cin >> number;
//
//	if (number & 1)
//		std::cout << number / 2.;
//	else
//		std::cout << number * 3;
//
//	return 0;
//}

/*
Задание 3. Написать программу-калькулятор. Пользователь
вводит два числа и выбирает арифметическое действие.
Вывести на экран результат.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите выражение: ";
//	double number1, number2;
//	char symbol;
//	std::cin >> number1 >> symbol >> number2;
//
//	switch (symbol)
//	{
//	case '+':
//		std::cout << number1 << " + " << number2 << " = " << number1 + number2;
//		break;
//	case '-':
//		std::cout << number1 << " - " << number2 << " = " << number1 - number2;
//		break;
//	case '*':
//		std::cout << number1 << " * " << number2 << " = " << number1 * number2;
//		break;
//	case '/':
//		if (number2)
//			std::cout << number1 << " / " << number2 << " = " << number1 / number2;
//		else
//			std::cout << "Devision by 0!";
//
//		break;
//	default:
//		std::cout << "Wrong operation";
//	}
//
//	return 0;
//}

/*
Задание 2. Написать программу, которая по выбору
пользователя возводит введенное им число в степень от
нулевой до седьмой включительно.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите основание и показатель степени: ";
//	double base, power = 1;
//	int degree;
//	std::cin >> base >> degree;
//
//	if (base == 0 && degree == 0)
//	{
//		std::cerr << "Undefinite!";
//		return -1;
//	}
//
//	for (size_t ii = 0; ii < degree; ii++)
//		power *= base;
//
//	std::cout << power;
//
//	return 0;
//}

/*
Задание 1. Написать программу, которая по выбору
пользователя меняет цвет консольного приложения.
Пользователь может выбрать цвет шрифта и цвет фона.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	enum ansiColors
//	{
//		BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE
//	};
//
//	std::cout << "Введите цвет текста и фона\n"
//	"0 - черный\n"
//		"1 - красны\n"
//		"2 - зеленый\n"
//		"3 - желтый\n"
//		"4 - голубой\n"
//		"5 - малиновый\n"
//		"6 - бирюзовый\n"
//		"7 - белый\n: ";
//
//	size_t foreColor, backColor;
//	std::cin >> foreColor >> backColor;
//
//    if (7 < foreColor || 7 < backColor)
//    {
//        std::cerr << "Неправильный номер цвета!";
//        return 1;
//    }
//
//	std::cout << "\033[3" << static_cast<char>('0' + foreColor) << ";4"
//		<< static_cast<char>('0' + backColor) << 'm' << "текст";
//
//	std::cout << "\033[0m";
//
//	return 0;
//}

//#include <iostream>
//#include <iomanip>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	enum ansiColors
//	{
//		BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE
//	};
//
//	const char* ansiForegroundColor[8] = { "\033[30m", "\033[31m", "\033[32m",
//		"\033[33m", "\033[34m", "\033[35m", "\033[36m", "\033[37m" };
//
//	const char* ansiBackgroundColor[8] = { "\033[40m", "\033[41m", "\033[42m",
//		"\033[43m", "\033[44m", "\033[45m", "\033[46m", "\033[47m" };
//
//	const char* ansiReset = "\033[0m";
//
//	const char* russianColorNames[8] = {"черный", "красный", "зеленый", "желтый",
//		"голубой", "малиновый", "бирюзовый", "белый" };
//
//	std::cout << "введите номер цвета текста и фона\n";
//
//	std::cout << ansiForegroundColor[ansiColors::BLACK]
//		<< ansiBackgroundColor[ansiColors::WHITE] << std::setw(11) << std::left
//		<< russianColorNames[0] << ' ' << 0 << std::endl;
//
//	std::cout << ansiReset;
//
//	for (size_t ii = ansiColors::RED; ii < std::LENGTH(ansiForegroundColor); ii++)
//		std::cout << ansiForegroundColor[ii] << std::setw(11) << std::left
//		<< russianColorNames[ii] << ' ' << ii << std::endl;
//
//	std::cout << ansiReset;
//	size_t foreColor, backColor;
//	std::cin >> foreColor >> backColor;
//
//	if (7 < foreColor || 7 < backColor)
//	{
//		std::cerr << "Неправильный номер цвета!";
//		return 1;
//	}
//
//	std::cout << ansiForegroundColor[foreColor]
//		<< ansiBackgroundColor[backColor] << "текст";
//
//	std::cout << ansiReset;
//	return 0;
//}


/*
Задание 1. Вывести на экран все числа от нуля до вве -
денного пользователем числа.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите число: ";
//	int number;
//	std::cin >> number;
//
//	if (number > 0)
//		for (int ii = 0; ii < number; ++ii)
//			std::cout << ii << ' ';
//	else
//		for (int ii = 0; ii > number; --ii)
//			std::cout << ii << ' ';
//
//	return 0;
//}


/*
Задание 2. Пользователь вводит две границы диапазона,
вывести на экран все числа из этого диапазона.Преду -
смотреть, чтобы пользователь мог вводить границы ди -
апазона в произвольном порядке.
■ вывести все четные числа из диапазона.
■ вывести все нечетные числа из диапазона.
■ вывести все числа, кратные семи.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите две границы диапазона: ";
//	double a, b;
//	std::cin >> a >> b;
//
//	if (a > b)
//	{
//		double tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	int start = static_cast<int>(a);
//
//	start += start & 1;
//	std::cout << "все четные числа из диапазона " << a << "; " << b << std::endl;
//
//	for (int ii = start; ii <= static_cast<int>(b); ii += 2)
//		std::cout << ii << ' ';
//
//	start = static_cast<int>(a);
//	start += 1 - start & 1;
//	std::cout << "\nвсе нечетные числа из диапазона " << a << "; " << b << std::endl;
//
//	for (int ii = start; ii <= static_cast<int>(b); ii += 2)
//		std::cout << ii << ' ';
//
//	start = static_cast<int>(a);
//	std::cout << "\nвсе числа, кратные семи из диапазона " << a << "; " << b << std::endl;
//
//	start = start / 7 * 7;
//
//	if (start >= 0)
//		start += 7;
//
//	for (int ii = start; ii <= static_cast<int>(b); ii += 7)
//		std::cout << ii << ' ';
//
//	return 0;
//}


/*
Задание 3. Пользователь вводит две границы диапазона.
Посчитать сумму всех чисел диапазона.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите две границы диапазона: ";
//	double a, b;
//	std::cin >> a >> b;
//
//	if (a > b)
//	{
//		double tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	int start = static_cast<int>(a);
//	double summ = 0;
//
//	for (int ii = start; ii <= static_cast<int>(b); ii++)
//		summ += ii;
//
//	std::cout << "\nсумма целых чисел из диапазона [ " << a << "; " << b << " ] = " << summ << std::endl;
//
//	return 0;
//}


/*
Задание 4. Пользователь с клавиатуры вводит числа.
Посчитать их сумму и вывести на экран, как только поль-
зователь введет ноль.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//
//	std::cout << "введите числа (0 для завершения): ";
//	double summ = 0, number;
//
//	do
//	{
//		std::cin >> number;
//		summ += number;
//
//	} while (number != 0);
//
//	std::cout << "сумма чисел = " << summ << std::endl;
//
//	return 0;
//}


/*
Вывести на экран фигуры, заполненные звездочками.
a, д
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//
//	std::cout << "введите размер квадрата: ";
//	int length;
//	std::cin >> length;
//
//	for (int ii = 0; ii < length; ii++)
//	{
//		for (int jj = length - ii; jj < length; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//
//	std::cout << "введите размер квадрата: ";
//	int length;
//	std::cin >> length;
//
//	for (int ii = 0; ii < length / 2; ii++)
//	{
//
//		for (int jj = 0; jj < ii; jj++)
//			std::cout << ' ';
//
//		for (int jj = ii; jj < length - ii; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//	}
//
//	for (int ii = length / 2; ii < length; ii++)
//	{
//
//		for (int jj = 0; jj < length - ii - 1; jj++)
//			std::cout << ' ';
//
//		for (int jj = length - ii - 1; jj <= ii; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//	}
//
//	return 0;
//}


//Задание 1. Написать игру «Угадай число».Программа
//загадывает число в диапазоне от 1 до 500. Пользователь
//пытается его угадать.После каждой попытки программа
//выдает подсказки, больше или меньше его число загадан -
//ного.В конце программа выдает статистику : за сколько
//попыток угадано число, сколько времени это заняло.
//Предусмотреть выход по 0, в случае, если пользователю
//надоело угадывать число.

//#include <iostream>
//#include <ctime>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//
//	std::cout << "введите правую границу: ";
//	int rightBoundary;
//	std::cin >> rightBoundary;
//
//	if (rightBoundary <= 1)
//	{
//		std::cerr << "Wrong boundary!";
//		return 2;
//	}
//
//	const int64_t nAttempt = static_cast<int64_t>(ceil(log2(rightBoundary)));
//	int secretNumber = rand() % rightBoundary + 1, guesedNumber, attemptNo = 0;
//	time_t startTime = time(nullptr), endTime = startTime + static_cast<time_t>(nAttempt) * 5;
//
//	do
//	{
//		std::cout << "осталось попыток: " << nAttempt - attemptNo
//			<< " осталось времени (сек.): " << endTime - time(nullptr)
//			<< " введите число: ";
//
//		attemptNo++;
//		std::cin >> guesedNumber;
//
//		if (guesedNumber == 0)
//			return 1;
//
//		if (guesedNumber == secretNumber)
//		{
//			std::cout << "You win! попыток: " << attemptNo << " время (сек.): "
//				<< time(nullptr) - startTime;
//
//			return 0;
//		}
//		else
//			if (secretNumber < guesedNumber)
//				std::cout << "загаданое число < " << guesedNumber << std::endl;
//			else 
//				std::cout << guesedNumber << " < загаданого числа\n";
//
//	} while (attemptNo < nAttempt && time(nullptr) <= endTime);
//
//	std::cout << "You lose! попыток: " << attemptNo << " время (сек.): "
//		<< time(nullptr) - startTime << " загаданое число " << secretNumber;
//
//	return 0;
//}


/*
Задание 1. Пользователь вводит с клавиатуры две границы
диапазона и число. Если число не попадает в диапазон,
программа просит пользователя повторно ввести число,
и так до тех пор, пока он не введет число правильно.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите две границы диапазона: ";
//	double a, b;
//	std::cin >> a >> b;
//
//	if (a > b)
//	{
//		double tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	double number;
//
//	do
//	{
//		std::cout << "введите число: ";
//		std::cin >> number;
//	} while (number < a || b < number);
//
//	std::cout << "Наконец-то!";
//	return 0;
//}


/*
Задание 1. Написать программу, которая проверяет поль-
зователя на знание таблицы умножения. Программа вы-
водит на экран два числа, пользователь должен ввести их
произведение. Разработать несколько уровней сложности
(отличаются сложностью и количеством вопросов). Вы-
вести пользователю оценку его знаний.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	std::cout << "Количество вопросов: ";
//	int length;
//	std::cin >> length;
//
//	if (length < 1)
//		std::cerr << "Ошибка!";
//
//	int number1, number2, product, mistakes =0 ;
//
//	for (size_t ii = 0; ii < length; ii++)
//	{
//		number1 = rand() % 11;
//		number2 = rand() % 11;
//		std::cout << number1 << " * " << number2 << " = ";
//		std::cin >> product;
//
//		if (product != number1 * number2)
//		{
//			mistakes++;
//			std::cout << "Ошибка!\n";
//		}
//		else
//			std::cout << "Правильно\n";
//	}
//
//	std::cout << "Your level " << length - mistakes << " / " << length;
//
//	return 0;
//}


/*
Задание 2. Вывести на экран ромб из звездочек.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите размер ромб: ";
//	int length;
//	std::cin >> length;
//
//	std::cout << "введите символ: ";
//	char symbol = '*';
//	std::cin >> symbol;
//
//	for (int ii = length / 2; ii < length; ii++)
//	{
//		for (int jj = 0; jj < length - ii - 1; jj++)
//			std::cout << ' ';
//
//		for (int jj = length - ii - 1; jj <= ii; jj++)
//			std::cout << symbol;
//
//		std::cout << std::endl;
//	}
//
//	for (int ii = 1; ii < length / 2; ii++)
//	{
//		for (int jj = 0; jj < ii; jj++)
//			std::cout << ' ';
//
//		for (int jj = 0; jj < length - 2 * ii; jj++)
//			std::cout << symbol;
//
//		std::cout << std::endl;
//	}
//
//	return 0;
//}


/*
Задание 1. Вывести на экран прямоугольник с заданными
сторонами заданным символом.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите размер сторон: ";
//	int length, width;
//	std::cin >> length >> width;
//
//	std::cout << "введите символ: ";
//	char symbol = '*';
//	std::cin >> symbol;
//
//	for (int ii = 0; ii < length; ii++)
//		std::cout << symbol;
//
//	std::cout << std::endl;
//
//	for (int ii = 0; ii < width - 2; ii++)
//	{
//		std::cout << symbol;
//
//		for (int jj = 0; jj < length - 2; jj++)
//			std::cout << ' ';
//
//		std::cout << symbol << std::endl;
//	}
//
//	for (int ii = 0; ii < length; ii++)
//		std::cout << symbol;
//
//	return 0;
//}


/*
Задание 2. Вывести на экран пустой прямоугольник
с заданными размерами заданным символом заданного
цвета.
*/

//#include <iostream>
//#include <iomanip>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите размер сторон: ";
//	int length, width;
//	std::cin >> length >> width;
//
//	std::cout << "введите символ: ";
//	char symbol = '*';
//	std::cin >> symbol;
//
//	enum ansiColors
//	{
//		BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE
//	};
//
//	const char* ansiForegroundColor[8] = { "\033[30m", "\033[31m", "\033[32m",
//		"\033[33m", "\033[34m", "\033[35m", "\033[36m", "\033[37m" };
//
//	const char* ansiBackgroundColor[8] = { "\033[40m", "\033[41m", "\033[42m",
//		"\033[43m", "\033[44m", "\033[45m", "\033[46m", "\033[47m" };
//
//	const char* ansiReset = "\033[0m";
//
//	const char* russianColorNames[8] = { "черный", "красный", "зеленый", "желтый",
//		"голубой", "малиновый", "бирюзовый", "белый" };
//
//	std::cout << "введите номер цвета текста и фона\n";
//
//	std::cout << ansiForegroundColor[ansiColors::BLACK]
//		<< ansiBackgroundColor[ansiColors::WHITE] << std::setw(11) << std::left
//		<< russianColorNames[0] << ' ' << 0 << std::endl;
//
//	std::cout << ansiReset;
//
//	for (size_t ii = ansiColors::RED; ii < std::LENGTH(ansiForegroundColor); ii++)
//		std::cout << ansiForegroundColor[ii] << std::setw(11) << std::left
//		<< russianColorNames[ii] << ' ' << ii << std::endl;
//
//	std::cout << ansiReset;
//	size_t foreColor, backColor;
//	std::cin >> foreColor >> backColor;
//
//	if (7 < foreColor || 7 < backColor)
//	{
//		std::cerr << "Неправильный номер цвета!";
//		return 1;
//	}
//
//	std::cout << ansiForegroundColor[foreColor]
//		<< ansiBackgroundColor[backColor];
//
//	for (int ii = 0; ii < length; ii++)
//		std::cout << symbol;
//
//	std::cout << std::endl;
//
//	for (int ii = 0; ii < width - 2; ii++)
//	{
//		std::cout << symbol;
//
//		for (int jj = 0; jj < length - 2; jj++)
//			std::cout << ' ';
//
//		std::cout << symbol << std::endl;
//	}
//
//	for (int ii = 0; ii < length; ii++)
//		std::cout << symbol;
//
//	std::cout << ansiReset;
//
//	return 0;
//}


/*
Задание 1. Написать, программу, которая вычисляет при-
быль фирмы за 6 месяцев. Пользователь вводит прибыль
фирмы за каждый месяц.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите прибыль фирмы за каждый месяц:\n";
//	double profit, summ = 0;
//
//	for (size_t ii = 1; ii <= 6; ii++)
//	{
//		std::cout << ii << "-й месяц: ";
//		std::cin >> profit;
//		summ += profit;
//	}
//
//	std::cout << "прибыль фирмы за 6 месяцев: " << summ;
//	return 0;
//}


/*
Задание 2. Написать программу, которая выводит одно-
мерный массив в обратном порядке.
*/

//#include <iostream>
//#include <ctime>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand( static_cast<unsigned>( time(nullptr) ) );
//	const int length = 10;
//	int array[length];
//
//	for (int ii = 0; ii < length; ii++)
//		array[ii] = rand() % 20;
//
//	std::cout << "array:\n";
//
//	for (int ii = 0; ii < length; ii++)
//		std::cout << array[ii] << ' ';
//
// 	std::cout << "\nreverse array:\n";
//
//	for (int ii = length - 1; ii >= 0; ii--)
//		std::cout << array[ii] << ' ';
//
//	return 0;
//}


/*
Задание 3. Пользователь вводит длину сторон пятиуголь-
ника, каждая сторона заноситься в массив, необходимо
вычислить периметр пятиугольника (периметр — сумма
всех сторон).
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите длину сторон пятиугольника:\n";
//	double length, perimeter = 0;
//
//	for (size_t ii = 1; ii < 6; ii++)
//	{
//		std::cout << ii << "-ю сторону: ";
//		std::cin >> length;
//		perimeter += length;
//	}
//
//	std::cout << "периметр: " << perimeter;
//	return 0;
//}


/*
Задание 4. Пользователь вводит прибыль фирмы за год
(12 месяцев). Необходимо определить месяц, в котором
прибыль была максимальна и месяц, в котором прибыль
была минимальна.
*/

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите прибыль фирмы за каждый месяц:\n";
//	double profit, min, max;
//	int minNo, maxNo;
//
//	std::cout << "1-й месяц: ";
//	std::cin >> profit;
//
//	min = max = profit;
//	minNo = maxNo = 1;
//
//	for (int ii = 2; ii <= 12; ii++)
//	{
//		std::cout << ii << "-й месяц: ";
//		std::cin >> profit;
//
//		if (min > profit)
//		{
//			min = profit;
//			minNo = ii;
//		}
//
//		if (max < profit)
//		{
//			max = profit;
//			maxNo = ii;
//		}
//	}
//
//	std::cout << "месяц, в котором прибыль была максимальна: " << maxNo;
//	std::cout << "\nмесяц, в котором прибыль была минимальна: " << minNo;
//
//	return 0;
//}


//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "введите количество учеников в классах:\n";
//	int nPupils1, nPupils2, nPupils3;
//	std::cin >> nPupils1 >> nPupils2 >> nPupils3;
//	//const int DESK1 = static_cast<int>(ceil(nPupils1 / 2.0));
//	//const int DESK2 = static_cast<int>(ceil(nPupils2 / 2.0));
//	//const int DESK3 = static_cast<int>(ceil(nPupils3 / 2.0));
//	//const int DESK1 = (nPupils1 + (nPupils1 & 1)) >> 1;
//	//const int DESK2 = (nPupils2 + (nPupils2 & 1)) >> 1;
//	//const int DESK3 = (nPupils3 + (nPupils3 & 1)) >> 1;
//	const int DESK1 = (nPupils1 + 1) >> 1;
//	const int DESK2 = (nPupils2 + 1) >> 1;
//	const int DESK3 = (nPupils3 + 1) >> 1;
//
//	std::cout << "нужно парт: " << DESK1 + DESK2 + DESK3;
//
//	return 0;
//}


/*
Задание 1. Сжать (сдвинуть элементы) массив, удалив из
него все 0, и заполнить освободившиеся справа элементы
значениями -1.
*/


//#include <iostream>
//#include <ctime>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand( static_cast<unsigned>( time(nullptr) ) );
//	const int LENGTH = 10;
//	int array[LENGTH];
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		array[ii] = rand() % 3;
//
//	std::cout << "source array:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array[ii] << ' ';
//
//	int writeIndex = 0;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (array[ii] == 0)
//			continue;
//
//		array[writeIndex++] = array[ii];
//	}
//
//	for (int ii = writeIndex; ii < LENGTH; ii++)
//		array[ii] = -1;
//
//	std::cout << "\nresult array:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array[ii] << ' ';
//
//	return 0;
//}


/*
Задание 2. Написать программу, копирующую элементы
2-х массивов размером 5 элементов каждый в один мас-
сив размером 10 элементов следующим образом: сначала
копируются последовательно все элементы, большие 0,
затем последовательно все элементы, равные 0, а затем
последовательно все элементы, меньшие 0.
*/

//#include <iostream>
//#include <ctime>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand( static_cast<unsigned>( time(nullptr) ) );
//	const int LENGTH = 5;
//	int array1[LENGTH], array2[LENGTH];
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		array1[ii] = rand() % 20 - 10;
//		array2[ii] = rand() % 20 - 10;
//	}
//
//	std::cout << "source array1:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array1[ii] << ' ';
//
//	std::cout << "\nsource array2:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array2[ii] << ' ';
//
//	int resultArray[LENGTH * 2];
//	int writeIndex = 0;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (array1[ii] > 0)
//			resultArray[writeIndex++] = array1[ii];
//
//		if (array2[ii] > 0)
//			resultArray[writeIndex++] = array2[ii];
//	}
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (array1[ii] == 0)
//			resultArray[writeIndex++] = array1[ii];
//
//		if (array2[ii] == 0)
//			resultArray[writeIndex++] = array2[ii];
//	}
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (array1[ii] < 0)
//			resultArray[writeIndex++] = array1[ii];
//
//		if (array2[ii] < 0)
//			resultArray[writeIndex++] = array2[ii];
//	}
//
//	std::cout << "\nresult array:\n";
//
//	for (int ii = 0; ii < LENGTH * 2; ii++)
//		std::cout << resultArray[ii] << ' ';
//
//	return 0;
//}


/*
Задание 1. Написать программу, выполняющую со-
ртировку одномерного массива целых чисел методом
пузырьковой сортировки.
*/

//#include <iostream>
//#include <ctime>
//
//void swap(int &a, int &b) // & --- reference
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand( static_cast<unsigned>( time(nullptr) ) );
//	const int LENGTH = 10;
//	int array[LENGTH];
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		array[ii] = rand() % 20 - 10;
//
//	std::cout << "source array:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array[ii] << ' ';
//
//	for (int jj = 0; jj < LENGTH; jj++)
//		for (int ii = 0; ii < LENGTH - 1 - jj; ii++)
//			if (array[ii] < array[ii + 1])
//				swap(array[ii], array[ii + 1]);
//
//	std::cout << "\nsorted array:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array[ii] << ' ';
//
//	return 0;
//}


/*
Задание 2. Написать программу, выполняющую сорти-
ровку одномерного массива целых чисел методом вставок.
*/

//#include <iostream>
//#include <ctime>
//
//void swap(int &a, int &b) // & --- reference
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void shift(int array[], const int n)
//{
//	int tmp = array[n];
//
//	for (int ii = n; ii > 0; ii--)
//		array[ii] = array[ii - 1];
//
//	array[0] = tmp;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand( static_cast<unsigned>( time(nullptr) ) );
//	const int LENGTH = 10;
//	int array[LENGTH];
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		array[ii] = rand() % 20 - 10;
//
//	std::cout << "source array:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array[ii] << ' ';
//
//	//for (int jj = 1; jj < LENGTH; jj++)
//	//	for (int ii = jj; ii >= 1; ii--)
//	//		if (array[ii - 1] > array[ii])
//	//			swap(array[ii], array[ii - 1]);
//	//		else
//	//			break;
//
//	for (int jj = 1; jj < LENGTH; jj++)
//	{
//		int ii = jj - 1;
//
//		for (; ii >= 0; ii--)
//			if (array[ii] <= array[jj])
//				break;
//
//		if (ii != jj - 1)
//			shift(array + ii + 1, jj - ii - 1);
//	}
//
//	std::cout << "\nsorted array:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array[ii] << ' ';
//
//	return 0;
//}


/*
Задание 4. Написать программу, выполняющую сортиров-
ку одномерного массива целых чисел методом быстрого
поиска.
*/

//#include <iostream>
//#include <ctime>
//
//bool checkNonStrict(const int array[], const int LENGTH, const bool INCREASING = true);
//
//void swap(int &a, int &b) // & --- reference
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int partition(int array[], const int LO, const int HIGH)
//{
//	const int PIVOT = array[(LO + HIGH) / 2];
//	int left = LO, right = HIGH;
//
//	while (true)
//	{
//		while (array[left] < PIVOT)
//			left++;
//
//		while (array[right] > PIVOT)
//			right--;
//
//		if (left >= right)
//			return right;
//
//		swap(array[left++], array[right--]);
//	}
//}
//
//static int quickSortDeep = 0, quickSortDeepMax = 0;
//
//void quickSort(int array[], const int LO, const int HIGH)
//{
//	quickSortDeep++;
//
//	if (quickSortDeepMax < quickSortDeep)
//		quickSortDeepMax = quickSortDeep;
//
//	int leftSubArrayRightBoundary = partition(array, LO, HIGH);
//
//	if (leftSubArrayRightBoundary - LO > 0)
//		quickSort(array, LO, leftSubArrayRightBoundary);
//
//	if (HIGH - leftSubArrayRightBoundary > 1)
//		quickSort(array, leftSubArrayRightBoundary + 1, HIGH);
//
//	quickSortDeep--;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand( static_cast<unsigned>( time(nullptr) ) );
//	const int LENGTH = 1000000;
//	static int array[LENGTH];
//	std::cout << "source array:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		array[ii] = rand() % 50 - 25;
//	//	std::cout << array[ii] << ' ';
//	}
//
//	quickSort(array, 0, LENGTH - 1);
//
//	std::cout << std::boolalpha << checkNonStrict(array, LENGTH);
//
//	//std::cout << "\nsorted array:\n";
//
//	//for (int ii = 0; ii < LENGTH; ii++)
//	//	std::cout << array[ii] << ' ';
//
//	std::cout << "\nmax nested quickSort calls: " << quickSortDeepMax;
//
//	return 0;
//}
//
//bool checkNonStrict(const int array[], const int LENGTH, const bool INCREASING)
//{
//	if (INCREASING == true)
//	{
//		for (int ii = 0; ii < LENGTH - 1; ii++)
//			if (array[ii] > array[ii + 1])
//				return false;
//
//		return true;
//	}
//	else
//	{
//		for (int ii = 0; ii < LENGTH - 1; ii++)
//			if (array[ii] < array[ii + 1])
//				return false;
//
//		return true;
//	}
//}


/*
Задание 3. Написать программу «успеваемость». Поль-
зователь вводит 10 оценок студента. Реализовать меню
для пользователя
■ Вывод оценок (вывод содержимого массива);
■ Пересдача экзамена (пользователь вводит номер эле-
мента массива и новую оценку);
■ Выходит ли стипендия (стипендия выходит, если
средний бал не ниже 10.7).
*/

//#include <iostream>
//#include <ctime>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand( static_cast<unsigned>( time(nullptr) ) );
//	const int LENGTH = 10;
//	int array[LENGTH];
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		array[ii] = rand() % 12 + 1;
//
//	int choice;
//
//	do
//	{
//		std::cout << "1) Вывод оценок,\n"
//		"2) Пересдача экзамена,\n"
//		"3) Выходит ли стипендия,\n"
//		"0) Выход\n";
//	
//		std::cout << "Ваш выбор:";
//		std::cin >> choice;
//
//		switch (choice)
//		{
//		case 1:
//			std::cout << "оценки:\n";
//
//			for (int ii = 0; ii < LENGTH; ii++)
//				std::cout << array[ii] << ' ';
//
//			std::cout << std::endl;
//
//			break;
//		case 2:
//			{
//				int index;
//				std::cout << "введите номер элемента массива (1 - 10) и новую оценку ";
//				std::cin >> index;
//
//				if (index < 1 || LENGTH < index)
//				{
//					std::cerr << "Wrong index!\n";
//					return 2;
//				}
//
//				std::cin >> array[index - 1];
//				std::cout << std::endl;
//			}
//			break;
//		case 3:
//			{
//				int summ = 0;
//
//				for (int ii = 0; ii < LENGTH; ii++)
//					summ += array[ii];
//
//				std::cout << "стипендия: " << (summ >= 107 ? "да\n" : "нет\n");
//			}
//		case 0:
//			break;
//		default:
//			std::cerr << "Wrong item!\n";
//		}
//	} while (choice != 0);
//
//	return 0;
//}


/*
Задание 5. Необходимо отсортировать первые две трети
массива в порядке возрастания если среднее арифме-
тическое всех элементов больше нуля; иначе — лишь
первую треть. Остальную часть массива не сортировать,
а расположить в обратном порядке.
*/

//#include <iostream>
//#include <ctime>
//
//void swap(int &a, int &b) // & --- reference
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void insertSort(int array[], const int length)
//{
//	for (int jj = 1; jj < length; jj++)
//		for (int ii = jj; ii >= 1; ii--)
//			if (array[ii - 1] > array[ii])
//				swap(array[ii], array[ii - 1]);
//			else
//				break;
//}
//
//double mean(int array[], const int length)
//{
//	long int summ = 0;
//
//	for (int ii = 0; ii < length; ii++)
//		summ += array[ii];
//
//	return static_cast<double>(summ) / length;
//}
//
//void reverse(int array[], const int length)
//{
//	for (int ii = 0; ii < length / 2; ii++)
//		swap(array[ii], array[length - 1 - ii]);
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand( static_cast<unsigned>( time(nullptr) ) );
//	const int LENGTH = 12;
//	int array[LENGTH];
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		array[ii] = rand() % 20 - 10;
//
//	std::cout << "source array:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array[ii] << ' ';
//
//	std::cout << "\nmean of array: " << mean(array, LENGTH);
//
//	if (mean(array, LENGTH) > 0)
//	{
//		insertSort(array, LENGTH * 2 / 3);
//		reverse(array + LENGTH * 2 / 3, LENGTH / 3);
//	}
//	else
//	{
//		insertSort(array, LENGTH / 3);
//		reverse(array + LENGTH / 3, LENGTH * 2 / 3);
//	}
//
//	std::cout << "\ndestination array:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array[ii] << ' ';
//
//	return 0;
//}


//#include <iostream>
//
//long long factorial(const int n)
//{
//	if (0 < n)
//		return n * factorial(n - 1);
//	else
//		if (n == 0)
//			return 1;
//		else
//			throw "Invalid argument!";
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Введите n = ";
//	int n;
//	std::cin >> n;
//
//	try
//	{
//		std::cout << n << "! = " << factorial(n);
//	}
//	catch (const char* message)
//	{
//		std::cerr << message;
//	}
//
//	return 0;
//}


/*
Задание 1. В двумерном массиве целых числе посчитать:
■ Сумму всех элементов массива;
■ Среднее арифметическое всех элементов массива;
■ Минимальный элемент;
■ Максимальный элемент.
*/

//#include <iostream>
//#include <ctime>
//
//const int LENGTH = 5;
//
//long summ(const int array[][LENGTH], const int HEIGHT)
//{
//	long summ = 0;
//
//	for (int ii = 0; ii < HEIGHT; ii++)
//		for (int jj = 0; jj < LENGTH; jj++)
//			summ += array[ii][jj];
//
//	return summ;
//}
//
//long min(const int array[][LENGTH], const int HEIGHT)
//{
//	int min = array[0][0];
//
//	for (int ii = 0; ii < HEIGHT; ii++)
//		for (int jj = 0; jj < LENGTH; jj++)
//			if (min > array[ii][jj])
//				min = array[ii][jj];
//
//	return min;
//}
//
//long max(const int array[][LENGTH], const int HEIGHT)
//{
//	int max = array[0][0];
//
//	for (int ii = 0; ii < HEIGHT; ii++)
//		for (int jj = 0; jj < LENGTH; jj++)
//			if (max < array[ii][jj])
//				max = array[ii][jj];
//
//	return max;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int HEIGHT = 2;
//	int array[HEIGHT][LENGTH];
//	std::cout << "source array:\n";
//
//	for (int ii = 0; ii < HEIGHT; ii++)
//	{
//		for (int jj = 0; jj < LENGTH; jj++)
//		{
//			array[ii][jj] = rand() % 20 - 10;
//			std::cout << array[ii][jj] << ' ';
//		}
//
//		std::cout << std::endl;
//	}
//	
//	long arraySumm = summ(array, HEIGHT);
//	std::cout << "Сумма = " << arraySumm;
//	std::cout << "\nm = " << arraySumm / static_cast<double>(HEIGHT * LENGTH);
//	std::cout << "\nmin = " << min(array, HEIGHT);
//	std::cout << "\nmax = " << max(array, HEIGHT);
//
//	return 0;
//}


/*
Задание 2. В двумерном массиве целых чисел посчитать
сумму элементов: в каждой строке; в каждом столбце;
одновременно по всем строкам и всем столбцам. Офор-
мить следующим образом:
3 5 6 7 | 21
12 1 1 1 | 15
0 7 12 1 | 20
--------------------
15 3 19 9 | 56
*/

//#include <iostream>
//#include <iomanip>
//#include <ctime>
//
//long rowSumm(const int array[], const int N_COLUMNS)
//{
//	long summ = 0;
//
//	for (int ii = 0; ii < N_COLUMNS; ii++)
//		summ += array[ii];
//
//	return summ;
//}
//
//const int N_COLUMNS = 4;
//
//long columnSumm(const int array[][N_COLUMNS], const int N_ROWS,
//	const int COLUMN_NO)
//{
//	long summ = 0;
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//			summ += array[ii][COLUMN_NO];
//
//	return summ;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int N_ROWS = 3;
//	int array[N_ROWS][N_COLUMNS];
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//		for (int jj = 0; jj < N_COLUMNS; jj++)
//			array[ii][jj] = rand() % 20 - 10;
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//	{
//		for (int jj = 0; jj < N_COLUMNS; jj++)
//			std::cout << std::setw(4) << array[ii][jj] << ' ';
//
//		std::cout << "| " << std::setw(4) << rowSumm(array[ii], N_COLUMNS)
//			<< std::endl;
//	}
//
//	std::cout << std::setfill('-') << std::setw(5 * (N_COLUMNS + 2))
//		<< ' ' << std::endl;
//
//	long summ = 0;
//
//	for (int jj = 0; jj < N_COLUMNS; jj++)
//	{
//		long columnSum = columnSumm(array, N_ROWS, jj);
//
//		std::cout << std::setfill(' ') << std::setw(5)
//			<< columnSum;
//
//		summ += columnSum;
//	}
//
//	std::cout << "| " << std::setw(4) << summ;
//
//	return 0;
//}


/*
Задание 3. Напишите программу, в которой объявляется
массив размером 5×10 и массив размером 5×5. Первый
массив заполняется случайными числами, в диапазоне
от 0 до 50. Второй массив заполняется по следующему
принципу: первый элемент второго массива равен сумме
первого и второго элемента первого массива, второй эле-
мент второго массива равен сумму третьего и четвертого
элемента первого массива.
*/

//#include <iostream>
//#include <iomanip>
//#include <ctime>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int N_ROWS1 = 5, N_COLUMNS1 = 10;
//	int array1[N_ROWS1][N_COLUMNS1];
//	const int N_2 = 5;
//	int array2[N_2][N_2];
//
//	std::cout << "Array1:\n";
//
//	for (int ii = 0; ii < N_ROWS1; ii++)
//	{
//		for (int jj = 0; jj < N_COLUMNS1; jj++)
//		{
//			array1[ii][jj] = rand() % 51;
//			std::cout << std::setw(3) << array1[ii][jj];
//		}
//
//		std::cout << std::endl;
//	}
//
//	std::cout << "Array2:\n";
//
//	for (int ii = 0; ii < N_2; ii++)
//	{
//		for (int jj = 0; jj < N_2; jj++)
//		{
//			array2[ii][jj] = array1[ii][jj * 2] + array1[ii][jj * 2 + 1];
//			std::cout << std::setw(3) << array2[ii][jj];
//		}
//
//		std::cout << std::endl;
//	}
//
//	return 0;
//}


//#include <iostream>
//#include <iomanip>
//#include <ctime>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int N_ROWS = 5, N_COLUMNS = 10;
//	int matrix[N_ROWS][N_COLUMNS];
//	int matrixT[N_COLUMNS][N_ROWS];
//
//	std::cout << "matrix:\n";
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//	{
//		for (int jj = 0; jj < N_COLUMNS; jj++)
//		{
//			matrix[ii][jj] = rand() % 51;
//			std::cout << std::setw(3) << matrix[ii][jj];
//		}
//
//		std::cout << std::endl;
//	}
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//		for (int jj = 0; jj < N_COLUMNS; jj++)
//			matrixT[jj][ii] = matrix[ii][jj];
//
//	std::cout << "transposed matrix:\n";
//
//	for (int ii = 0; ii < N_COLUMNS; ii++)
//	{
//		for (int jj = 0; jj < N_ROWS; jj++)
//			std::cout << std::setw(3) << matrixT[ii][jj];
//
//		std::cout << std::endl;
//	}
//
//	return 0;
//}


//#include <iostream>
//#include <iomanip>
//#include <ctime>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int N_ROWS = 2, N_COLUMNS = 3;
//
//	int matrix1[N_ROWS][N_COLUMNS], matrix2[N_ROWS][N_COLUMNS],
//		summ[N_ROWS][N_COLUMNS];
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//	{
//		for (int jj = 0; jj < N_COLUMNS; jj++)
//		{
//			matrix1[ii][jj] = rand() % 10;
//			std::cout << std::setw(3) << matrix1[ii][jj];
//		}
//
//		std::cout << std::endl;
//	}
//
//	std::cout << "+\n";
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//	{
//		for (int jj = 0; jj < N_COLUMNS; jj++)
//		{
//			matrix2[ii][jj] = rand() % 10;
//			std::cout << std::setw(3) << matrix2[ii][jj];
//		}
//
//		std::cout << std::endl;
//	}
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//		for (int jj = 0; jj < N_COLUMNS; jj++)
//			summ[ii][jj] = matrix1[ii][jj] + matrix2[ii][jj];
//
//	std::cout << "=\n";
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//	{
//		for (int jj = 0; jj < N_COLUMNS; jj++)
//			std::cout << std::setw(3) << summ[ii][jj];
//
//		std::cout << std::endl;
//	}
//
//	return 0;
//}


//#include <iostream>
//#include <iomanip>
//#include <ctime>
//
//int realScolarProduct(const int vector1[], const int vector2[],
//	const int DIMENSION)
//{
//	int summ = 0;
//
//	for (int ii = 0; ii < DIMENSION; ii++)
//		summ += vector1[ii] * vector2[ii];
//
//	return summ;
//}
//
//const int N_ROWS = 2;
//
//void column(int outVector[], const int inMatrix[][N_ROWS],
//	const int COLUMN_NO, const int DIMENSION)
//{
//	for (int ii = 0; ii < DIMENSION; ii++)
//		outVector[ii] = inMatrix[ii][COLUMN_NO];
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int N_COLUMNS = 3;
//
//	int matrix1[N_ROWS][N_COLUMNS], matrix2[N_COLUMNS][N_ROWS],
//		product[N_ROWS][N_ROWS];
//
//	int column[N_COLUMNS];
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//	{
//		for (int jj = 0; jj < N_COLUMNS; jj++)
//		{
//			matrix1[ii][jj] = rand() % 10;
//			std::cout << std::setw(3) << matrix1[ii][jj];
//		}
//
//		std::cout << std::endl;
//	}
//
//	std::cout << "*\n";
//
//	for (int ii = 0; ii < N_COLUMNS; ii++)
//	{
//		for (int jj = 0; jj < N_ROWS; jj++)
//		{
//			matrix2[ii][jj] = rand() % 10;
//			std::cout << std::setw(3) << matrix2[ii][jj];
//		}
//
//		std::cout << std::endl;
//	}
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//		for (int jj = 0; jj < N_ROWS; jj++)
//		{
//			::column(column, matrix2, jj, N_COLUMNS);
//			product[ii][jj] = realScolarProduct(matrix1[ii], column, N_COLUMNS);
//		}
//
//	std::cout << "=\n";
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//	{
//		for (int jj = 0; jj < N_ROWS; jj++)
//			std::cout << std::setw(3) << product[ii][jj];
//
//		std::cout << std::endl;
//	}
//
//	return 0;
//}


/*
Задание 1. Написать функцию, выводящую на экран
прямоугольник с высотой N и шириной K.
*/

//#include <iostream>
//
//void printRectangle(int n, int k);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int n, k;
//	std::cout << "введите n и k: ";
//	std::cin >> n >> k;
//	printRectangle(n, k);
//	return 0;
//}
//
//void printRectangle(int n, int k)
//{
//	for (int ii = 0; ii < n; ii++)
//	{
//		for (int jj = 0; jj < k; jj++)
//		{
//			std::cout << '*';
//		}
//
//		std::cout << std::endl;
//	}
//}


/*
Задание 3. Написать функцию, которая проверяет, явля-
ется ли переданное ей число простым? Число называется
простым, если оно делится без остатка только на себя
и на единицу.
*/

//#include <iostream>
//
//bool isPrimeNumber(int n);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int n;
//	std::cout << "введите число: ";
//	std::cin >> n;
//
//	try
//	{
//		std::cout << (isPrimeNumber(n) ? "простое\n" : "составное\n");
//	}
//	catch (const char message[])
//	{
//		std::cerr << message;
//		return 1;
//	}
//
//	return 0;
//}
//
//bool isPrimeNumber(int n)
//{
//	if (n < 2)
//		throw "Invalid number!\n";
//
//	for (int ii = 2; ii < n && ii * ii <= n; ii++)
//		if (n % ii == 0)
//			return false;
//
//	return true;
//}


/*
Задание 4. Написать функцию, которая возвращает куб
числа.
*/

//#include <iostream>
//
//inline long double riseToCube(double base);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	double base;
//	std::cout << "введите число: ";
//	std::cin >> base;
//	std::cout << base << " ^ 3 = " << riseToCube(base);
//	return 0;
//}
//
//inline long double riseToCube(double base)
//{
//	return base * base * base;
//}


/*
Задание 5. Написать функцию для нахождения наиболь-
шего из двух чисел.
*/

//#include <iostream>
//
//inline double max(double a, double b);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	double a, b;
//	std::cout << "введите 2 числа: ";
//	std::cin >> a >> b;
//	std::cout << "max( " << a << "; " << b << " ) = " << max(a, b);
//	return 0;
//}
//
//inline double max(double a, double b)
//{
//	return a > b ? a : b;
//}


/*
Задание 6. Написать функцию, которая возвращает ис-
тину, если передаваемое значение положительное и ложь,
если отрицательное.
*/

//#include <iostream>
//
//inline bool isPositive(double a);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	double a;
//	std::cout << "введите число: ";
//	std::cin >> a;
//	std::cout << a << " > 0 is " << std::boolalpha << isPositive(a);
//	return 0;
//}
//
//inline bool isPositive(double a)
//{
//	return a > 0;
//}


/*
Задание 1. Написать функцию, определяющую минимум
и максимум (значение и номер) элементов передаваемого
ей массива.
*/

//#include <iostream>
//#include <iomanip>
//
//void optimum(int& min, int& minIndex, int& max, int& maxIndex,
//	const int array[], const int LENGTH);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int LENGTH = 10;
//	int array[LENGTH];
//	std::cout << "исходный массив:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		array[ii] = rand() % 10;
//		std::cout << std::setw(3) << array[ii];
//	}
//
//	int min, minIndex, max, maxIndex;
//	optimum(min, minIndex, max, maxIndex, array, LENGTH);
//
//	std::cout << "\nmin = " << min << " min index: " << minIndex
//		<< "\nmax = " << max << " max index: " << maxIndex << std::endl;
//
//	return 0;
//}
//
//void optimum(int& min, int& minIndex, int& max, int& maxIndex,
//	const int array[], const int LENGTH)
//{
//	min = array[0], minIndex = 0, max = array[0], maxIndex = 0;
//
//	for (int ii = 1; ii < LENGTH; ii++)
//	{
//		if (min > array[ii])
//		{
//			min = array[ii];
//			minIndex = ii;
//		}
//
//		if (max < array[ii])
//		{
//			max = array[ii];
//			maxIndex = ii;
//		}
//	}
//}


/*
Задание 2. Написать функцию, меняющую порядок сле-
дования элементов передаваемого ей массива на проти-
воположный.
*/

//#include <iostream>
//
//inline void printArray(const int array[], const int LENGTH);
//inline void reverse(int array[], const int LENGTH);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int LENGTH = 10;
//	int array[LENGTH];
//	std::cout << "исходный массив:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		array[ii] = rand() % 10;
//		std::cout << array[ii] << ' ';
//	}
//
//	reverse(array, LENGTH);
//	std::cout << "\nвыходной массив:\n";
//	printArray(array, LENGTH);
//	std::cout << std::endl;
//	return 0;
//}
//
//inline void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//inline void printArray(const int array[], const int LENGTH)
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array[ii] << ' ';
//}
//
//inline void reverse(int array[], const int LENGTH)
//{
//	for (int ii = 0; ii < (LENGTH >> 1); ii++)
//		swap(array[ii], array[LENGTH - 1 - ii]);
//}


/*
Задание 3. Написать функцию, возвращающую количе-
ство простых чисел в передаваемом ей массиве.
*/

//#include <iostream>
//
//bool isPrimeNumber(int n);
//int countArrayPrimeNumbers(const int array[], const int LENGTH);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int LENGTH = 10;
//	int array[LENGTH];
//	std::cout << "исходный массив:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		array[ii] = rand() % 15 + 2;
//		std::cout << array[ii] << ' ';
//	}
//
//	try
//	{
//		std::cout << "\nпростых чисел: " << countArrayPrimeNumbers(array, LENGTH)
//			<< std::endl;
//	}
//	catch (const char message[])
//	{
//		std::cerr << message;
//		return 1;
//	}
//
//	return 0;
//}
//
//int countArrayPrimeNumbers(const int array[], const int LENGTH)
//{
//	int counter = 0;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//		if (isPrimeNumber(array[ii]))
//			counter++;
//
//	return counter;
//}
//
//bool isPrimeNumber(int n)
//{
//	if (n < 2)
//		throw "Invalid number!\n";
//
//	for (int ii = 2; ii < n && ii * ii <= n; ii++)
//		if (n % ii == 0)
//			return false;
//
//	return true;
//}


/*
Задание 1. Дан массив чисел размерностью 10 элемен-
тов. Написать функцию, которая сортирует массив по
возрастанию или по убыванию, в зависимости от треть-
его параметра функции. Если он равен true, сортировка
идет по убыванию, если false, то по возрастанию. Первые
2 параметра функции — это массив и его размер, третий
параметр по умолчанию равен false.
*/

//#include <iostream>
//
//void bubbleSort(int array[], const int LENGTH, bool diminish = false);
//inline void printArray(const int array[], const int LENGTH);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int LENGTH = 10;
//	int array[LENGTH];
//	std::cout << "исходный массив:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		array[ii] = rand() % 15 + 2;
//		std::cout << array[ii] << ' ';
//	}
//
//	bubbleSort(array, LENGTH, true);
//	std::cout << "\nотсортированный массив по убыванию:\n";
//	printArray(array, LENGTH);
//
//	bubbleSort(array, LENGTH);
//	std::cout << "\nотсортированный массив по возрастанию:\n";
//	printArray(array, LENGTH);
//
//	return 0;
//}
//
//inline void printArray(const int array[], const int LENGTH)
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array[ii] << ' ';
//}
//
//inline void swap(int& a, int& b) // & --- reference
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//inline bool compare(int a, int b, bool diminish = false)
//{
//	if (diminish)
//		return a > b ? false : true;
//	else
//		return a < b ? false : true;
//}
//
//void bubbleSort(int array[], const int LENGTH, bool diminish)
//{
//	for (int jj = 0; jj < LENGTH; jj++)
//		for (int ii = 0; ii < LENGTH - 1 - jj; ii++)
//			if (compare(array[ii], array[ii + 1], diminish))
//				swap(array[ii], array[ii + 1]);
//}


/*
Задание 2. Написать функцию, которая сортирует первую
половину массива по убыванию, а вторую — по возрас-
танию, используя сортировку простыми вставками.
*/

//#include <iostream>
//
//inline void printArray(const int array[], const int LENGTH);
//void insertSort(int array[], const int LENGTH, bool diminish = false);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int LENGTH = 10;
//	int array[LENGTH];
//	std::cout << "исходный массив:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		array[ii] = rand() % 15 + 2;
//		std::cout << array[ii] << ' ';
//	}
//
//	insertSort(array, LENGTH >> 1, true);
//	insertSort(array + (LENGTH >> 1), LENGTH >> 1);
//	std::cout << "\nотсортированный массив:\n";
//	printArray(array, LENGTH);
//
//	return 0;
//}
//
//inline void printArray(const int array[], const int LENGTH)
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array[ii] << ' ';
//}
//
//void swap(int &a, int &b) // & --- reference
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//inline bool compare(int a, int b, bool diminish = false)
//{
//	if (diminish)
//		return a > b ? true : false;
//	else
//		return a < b ? true : false;
//}
//
//void insertSort(int array[], const int LENGTH, bool diminish)
//{
//	for (int jj = 1; jj < LENGTH; jj++)
//		for (int ii = jj; ii >= 1; ii--)
//			if (compare(array[ii], array[ii - 1], diminish))
//				swap(array[ii], array[ii - 1]);
//			else
//				break;
//}


/*
Задание 3. В функцию передаётся массив случайных
чисел в диапазоне от -20 до +20. Необходимо найти по-
зиции крайних отрицательных элементов (самого левого
отрицательного элемента и самого правого отрицатель-
ного элемента) и отсортировать элементы, находящиеся
между ними.
*/


//#include <iostream>
//
//inline void printArray(const int array[], const int LENGTH);
//void insertSort(int array[], const int LENGTH, bool diminish = false);
//int findNegativeNumberIndex(const int array[], const int LENGTH,
//	const bool LEFT = true);
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int LENGTH = 10;
//	int array[LENGTH];
//	std::cout << "исходный массив:\n";
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		array[ii] = rand() % 41 - 20;
//		std::cout << array[ii] << ' ';
//	}
//
//	int leftNegativeNumberIndex = findNegativeNumberIndex(array, LENGTH),
//		rightNegativeNumberIndex = findNegativeNumberIndex(array, LENGTH, false);
//
//	insertSort(array + leftNegativeNumberIndex + 1, rightNegativeNumberIndex
//		- leftNegativeNumberIndex, true);
//
//	std::cout << "\nотсортированный массив:\n";
//	printArray(array, LENGTH);
//
//	return 0;
//}
//
//int findNegativeNumberIndex(const int array[], const int LENGTH,
//						const bool LEFT)
//{
//	if (LEFT)
//	{
//		for (int ii = 0; ii < LENGTH; ii++)
//			if (array[ii] < 0)
//				return ii;
//	}
//	else
//	{
//		for (int ii = LENGTH - 1; ii >= 0; ii--)
//			if (array[ii] < 0)
//				return ii;
//	}
//}
//
//inline void printArray(const int array[], const int LENGTH)
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//		std::cout << array[ii] << ' ';
//}
//
//void swap(int &a, int &b) // & --- reference
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//inline bool compare(int a, int b, bool diminish = false)
//{
//	if (diminish)
//		return a > b ? true : false;
//	else
//		return a < b ? true : false;
//}
//
//void insertSort(int array[], const int LENGTH, bool diminish)
//{
//	for (int jj = 1; jj < LENGTH; jj++)
//		for (int ii = jj; ii >= 1; ii--)
//			if (compare(array[ii], array[ii - 1], diminish))
//				swap(array[ii], array[ii - 1]);
//			else
//				break;
//}


/*
Задание 1. Написать рекурсивную функцию нахождения
степени числа.
*/
//
//#include <iostream>
//long double power(double base, int degree);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Введите основание: ";
//	double base;
//	std::cin >> base;
//	std::cout << "Введите показатель: ";
//	int degree;
//	std::cin >> degree;
//
//	try
//	{
//		std::cout << base << " ^ " << degree << " = " << power(base, degree);
//	}
//	catch (const char* message)
//	{
//		std::cerr << message;
//		return 1;
//	}
//
//	return 0;
//}
//
//long double power(const double BASE, const int DEGREE)
//{
//	if (DEGREE == 1)
//		return BASE;
//	else
//		if (DEGREE == 0)
//			if (BASE != 0)
//				return 1;
//			else
//				throw "Result is undefined!\n\a";
//		else
//			if (DEGREE > 1)
//				return BASE * power(BASE, DEGREE - 1);
//			else
//				if (BASE != 0)
//					return 1 / power(BASE, -DEGREE);
//				else
//					throw "Result is undefined!\n\a";
//}


/*
Задание 2. Написать рекурсивную функцию, которая
выводит N звезд в ряд, число N задает пользователь. Про-
иллюстрируйте работу функции примером.
*/

//#include <iostream>
//void printSymbol(const char SYMBOL, const int QUANTITY);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Введите символ и количество: ";
//	char symbol;
//	int quantity;
//	std::cin >> symbol >> quantity;
//
//	try
//	{
//		printSymbol(symbol, quantity);
//	}
//	catch (const char* message)
//	{
//		std::cerr << message;
//		return 1;
//	}
//
//	return 0;
//}
//
//void printSymbol(const char SYMBOL, const int QUANTITY)
//{
//	if (QUANTITY == 0)
//		return;
//	else
//		if (QUANTITY < 0)
//			throw "quantity < 0\n\a";
//
//	std::cout << SYMBOL;
//	printSymbol(SYMBOL, QUANTITY - 1);
//}


/*
Задание 3. Написать рекурсивную функцию, которая
вычисляет сумму всех чисел в диапазоне от a до b. Поль-
зователь вводит a и b. Проиллюстрируйте работу функции
примером.
*/

//#include <iostream>
//long long sum(const int A, const int B);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Введите целочисленные границы отрезка: ";
//	int a, b;
//	std::cin >> a >> b;
//
//	try
//	{
//		std::cout << sum(a, b);
//	}
//	catch (const char* message)
//	{
//		std::cerr << message;
//		return 1;
//	}
//
//	return 0;
//}
//
//long long sum(const int A, const int B)
//{
//	if (A == B)
//		return A;
//	else
//		if (B < A)
//			throw "Wrong boundaries!\n\a";
//
//	return A + sum(A + 1, B);
//}


/*
Задание 5. Написать перегруженные функции и проте-
стировать их в основной программе:
■ Нахождения максимального значения в одномерном
массиве;
■ Нахождения максимального значения в двумерном
массиве;
■ Нахождения максимального значения в трёхмерном
массиве;
■ Нахождения максимального значения двух целых;
■ Нахождения максимального значения трёх целых.
*/

//#include <iostream>
//#include <iomanip>
//#include <limits>
//
//static const int LENGTH1 = 2;
//static const int LENGTH2 = 3;
//static const int LENGTH3 = 5;
//
//static inline int max(const int array[], const int LENGTH1);
//static int max(const int array[][LENGTH2], const int N_ROWS);
//static int max(const int array[][LENGTH2][LENGTH3], const int N_LAYERS);
//static inline int max(const int A, const int B);
//static inline int max(const int A, const int B, const int C);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	
//	int array[LENGTH1];
//	std::cout << "source array:\n";
//
//	for (int& ii : array) // ii пробегает по элементам array
//	{
//		ii = rand() % 101 - 50;
//		std::cout << ii << ' ';
//	}
//
//	std::cout << "\narray max = " << max(array, LENGTH1);
//
//	int array2D[LENGTH1][LENGTH2];
//	std::cout << "\n\nsource array2D:\n";
//
//	for (int (& jj)[LENGTH2] : array2D)
//	{
//		for (int& ii : jj)
//		{
//			ii = rand() % 101 - 50;
//			std::cout << std::setw(4) << ii;
//		}
//
//		std::cout << std::endl;
//	}
//
//	std::cout << "\narray2D max = " << max(array2D, LENGTH1);
//
//	int array3D[LENGTH1][LENGTH2][LENGTH3];
//	std::cout << "\n\nsource array3D:\n";
//
//	for (int(&kk)[LENGTH2][LENGTH3] : array3D)
//	{
//		for (int(&jj)[LENGTH3] : kk)
//		{
//			for (int& ii : jj)
//			{
//				ii = rand() % 101 - 50;
//				std::cout << std::setw(4) << ii;
//			}
//
//			std::cout << std::endl;
//		}
//
//		std::cout << std::endl;
//	}
//
//	std::cout << "array3D max = " << max(array3D, LENGTH1);
//
//	int a, b, c;
//	std::cout << "\n\nВведите 3 целых: ";
//	std::cin >> a >> b >> c;
//	std::cout << "max(" << a << "; " << b << ") = " << max(a, b);
//
//	std::cout << "\nmax(" << a << "; " << b << "; " << c << ") = "
//		<< max(a, b, c);
//
//	return 0;
//}
//
//static inline int max(const int array[], const int LENGTH)
//{
//	int max = array[0];
//
//	for (int ii = 1; ii < LENGTH; ii++)
//		if (max < array[ii])
//			max = array[ii];
//
//	return max;
//}
//
//static int max(const int array[][LENGTH2], const int N_ROWS)
//{
//	int max = std::numeric_limits<int>::lowest();
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//		for (size_t jj = 0; jj < LENGTH2; jj++)
//			if (max < array[ii][jj])
//				max = array[ii][jj];
//
//	return max;
//}
//
//static int max(const int array[][LENGTH2][LENGTH3], const int N_LAYERS)
//{
//	int max = std::numeric_limits<int>::lowest();
//
//	for (int ii = 0; ii < N_LAYERS; ii++)
//		for (size_t jj = 0; jj < LENGTH2; jj++)
//			for (size_t kk = 0; kk < LENGTH3; kk++)
//				if (max < array[ii][jj][kk])
//					max = array[ii][jj][kk];
//
//	return max;
//}
//
//static inline int max(const int A, const int B)
//{
//	return A >= B ? A : B;
//}
//
//static inline int max(const int A, const int B, const int C)
//{
//	const int MAX_AB = max(B, C);
//	return A >= MAX_AB ? A : MAX_AB;
//}


/*
Задание 4. Напишите рекурсивную функцию, которая
принимает одномерный массив из 100 целых чисел за-
полненных случайным образом и находит позицию, с ко-
торой начинается последовательность из 10 чисел, сумма
которых минимальна.
*/


//#include <iostream>
//
//static const int LENGTH = 100;
//static const int QUANTITY = 10;
//const int* arrayEnd = nullptr;
//
//struct IndexSum //заводим новый тип данных
//{
//	const int* currentArrayBegin;
//	long sum;
//	int lastElement;
//};
//
//IndexSum minSumStartIndex(const int* array);
//
//long sumation(const int* currentArrayBegin);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	int array[LENGTH];
//	arrayEnd = array + LENGTH;
//
//	for (int& ii : array)
//	{
//		ii = rand() % 101 - 50;
//		std::cout << ii << ' ';
//	}
//
//	std::cout << "\nпозиция, с которой начинается последовательность из "
//		<< QUANTITY << " чисел, сумма которых минимальна "
//		<< minSumStartIndex(array).currentArrayBegin - array;
//
//	return 0;
//}
//
//long sumation(const int* currentArrayBegin)
//{
//	const int* currentArrayEnd = currentArrayBegin + QUANTITY - 1;
//	long sum = *currentArrayBegin++;
//
//	while (currentArrayBegin < currentArrayEnd)
//		sum += *currentArrayBegin++;
//
//	return sum;
//}
//
//IndexSum minSumStartIndex(const int *currentArrayBegin)
//{
//	IndexSum minIndexSum; //объявление переменной с именем minIndexSum типа IndexSum
//	minIndexSum.sum = sumation(currentArrayBegin);
//	minIndexSum.currentArrayBegin = currentArrayBegin;
//	minIndexSum.lastElement = currentArrayBegin[QUANTITY - 1];
//
//	if (currentArrayBegin == arrayEnd - QUANTITY)
//		return minIndexSum;
//
//	IndexSum nextIndexSum = minSumStartIndex(currentArrayBegin + 1);
//
//	if (nextIndexSum.sum + nextIndexSum.lastElement < minIndexSum.sum + minIndexSum.lastElement)
//		minIndexSum = nextIndexSum;
//
//	return minIndexSum;
//}


/*
Дан одномерный массив целых чисел. Напишите
рекурсивную функцию, которая осуществляет нахождения
искомого значения с помощью бинарного поиска. Функ-
ция возвращает позицию вхождения искомого значения.
Проиллюстрируйте работу функции примером.
*/

//#include <iostream>
//#include <ctime>
//
//template<typename T>
//void swap(T& a, T& b);
//
//template<typename T>
//void bubbleSort(T* const ARRAY, T* const ARRAY_END);
//
//template<typename T>
//const T* binarySearchR(const T* const BEGIN, const T* const END, const T ITEM);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//
//	typedef long double elementType;
//	using elementType = double;
//
//	const int LENGTH = 10;
//	elementType array[LENGTH];
//
//	for (decltype(*array) ii : array)
//	{
//		ii = static_cast<elementType>(rand() % 101) - 50;
//		std::cout << ii << ' ';
//	}
//
//	bubbleSort(array, array + LENGTH);
//	std::cout << "\nОтсортированный массив:\n";
//
//	for (auto ii : array)
//		std::cout << ii << ' ';
//
//	std::cout << "\nВведите искомое число: ";
//	elementType item;
//	std::cin >> item;
//	auto foundPosition = binarySearchR(array, array + LENGTH, item);
//	
//	std::cout << "Найден в позиции: " << (foundPosition == nullptr ? -1 : foundPosition - array);
//
//	return 0;
//}
//
//template<typename T>
//void swap(T &a, T &b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template<typename T>
//void bubbleSort(T* const ARRAY, T* const ARRAY_END)
//{
//	bool wasSwap = false;
//
//	for (T* jj = ARRAY, *sortedBegin = ARRAY_END; jj < ARRAY_END;
//		jj++, sortedBegin--)
//	{
//		for (T* ii = ARRAY; ii < sortedBegin - 1; ii++)
//			if (*ii > *(ii + 1))
//			{
//				swap(*ii, *(ii + 1));
//				wasSwap = true;
//			}
//
//		if (!wasSwap)
//			return;
//	}
//}
//
//template<typename T>
//const T* binarySearchR(const T* const BEGIN, const T* const END, const T ITEM)
//{
//	if (END - BEGIN == 1)
//		if (*BEGIN == ITEM)
//			return BEGIN;
//		else
//			return nullptr;
//
//	if (*(BEGIN + ((END - BEGIN) >> 1)) <= ITEM)
//		return binarySearchR(BEGIN + ((END - BEGIN) >> 1), END, ITEM);
//	else
//		return binarySearchR(BEGIN, BEGIN + ((END - BEGIN) >> 1), ITEM);
//}


/*
Напишите рекурсивную функцию, которая
принимает двухмерный массив целых чисел и количество
сдвигов и выполняет круговой сдвиг массива вправо.
*/

//#include <iostream>
//#include <ctime>
//
////typedef long double elementType;
//using elementType = char;
//
//template<typename T>
//void cyclicShiftRight(T* const array, int const length);
//
//template<typename T>
//void cyclicShiftRight(T** array2D, int const nRows,
//						int const nColumns, int nShifts);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//
//	std::cout << "Введите размеры массива: ";
//	int nRows, nColumns;
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
//		std::cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//	for (decltype(array2D) ii = array2D; ii < array2D + nRows; ii++)
//	{
//		for (decltype(*array2D) jj = *ii; jj < *ii + nColumns; jj++)
//			std::cout << (*jj = static_cast<elementType>(rand() % 101) - 50) << ' ';
//
//		std::cout << std::endl;
//	}
//
//	std::cout << "Введите количество сдвигов: ";
//	int nShifts;
//	std::cin >> nShifts;
//
//	cyclicShiftRight(array2D, nRows, nColumns, nShifts);
//
//	for (decltype(array2D) ii = array2D; ii < array2D + nRows; ii++)
//	{
//		for (decltype(*array2D) jj = *ii; jj < *ii + nColumns; jj++)
//			std::cout << *jj << ' ';
//
//		std::cout << std::endl;
//	}
//
//	for (int ii = 0; ii < nRows; ii++)
//		delete[] array2D[ii];
//
//	delete[] array2D;
//	return 0;
//}
//
//template<typename T>
//void cyclicShiftRight(T* const array, int const length)
//{
//	T lastElement = array[length - 1];
//
//	for (T* ii = array + length - 1; ii > array; ii--)
//		*ii = *(ii - 1);
//
//	*array = lastElement;
//}
//
//template<typename T>
//void cyclicShiftRight(T** array2D, int const nRows,
//								int const nColumns, int nShifts)
//{
//	nShifts %= nColumns;
//
//	if (nShifts <= 0)
//		return;
//
//	for (T** ii = array2D; ii < array2D + nRows; ii++)
//		cyclicShiftRight(*ii, nColumns);
//
//	if (--nShifts > 0)
//		cyclicShiftRight(array2D, nRows, nColumns, nShifts);
//}


/*
Используя указатели и оператор разыменова-
ния, определить наибольшее из двух чисел.
*/

//#include <iostream>
//
////typedef long double elementType;
//using elementType = int;
//
//template<typename T>
//inline T max(const T* a, const T* b);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "Введите два числа: ";
//	elementType number1, number2;
//	std::cin >> number1 >> number2;
//
//	std::cout << "max(" << number1 << "; " << number2 << ") = "
//		<< max(&number1, &number2);
//
//	return 0;
//}
//
//template<typename T>
//inline T max(const T* a, const T* b)
//{
//	return *a > *b ? *a : *b;
//}


/*
Используя указатели и оператор разымено-
вания, определить знак числа, введённого с клавиатуры.
*/

//#include <iostream>
//
////typedef long double elementType;
//using elementType = float;
//
//template<typename T>
//inline int sgn(const T* const a);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "Введите число: ";
//	elementType number;
//	std::cin >> number;
//
//	std::cout << "sgn(" << number << ") = " << sgn(&number);
//
//	return 0;
//}
//
//template<typename T>
//inline int sgn(const T* const a)
//{
//	return *a > 0 ? 1 : (*a == 0) ? 0 : -1;
//}


/*
Используя указатели и оператор разыменова-
ния, обменять местами значения двух переменных.
*/

//#include <iostream>
//
////typedef long double elementType;
//using elementType = float;
//
//template<typename T>
//inline void swap(T* const a, T* const b);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Введите два числа: ";
//	elementType number1, number2;
//	std::cin >> number1 >> number2;
//	swap(&number1, &number2);
//	std::cout << "number1 = " << number1 << "; number2 = " << number2;
//	return 0;
//}
//
//template<typename T>
//inline void swap(T* const a, T* const b)
//{
//	T tmp = *a;
//	*a = *b;
//	*b = tmp;
//}


/*
Написать примитивный калькулятор, поль-
зуясь только указателями.
*/

//#include <iostream>
//
////typedef long double elementType;
//using elementType = float;
//
//template<typename T>
//inline auto add(const T* const a, const T* const b) -> T;
//
//template<typename T>
//inline auto substract(const T* const a, const T* const b) -> T;
//
//template<typename T>
//inline auto multiply(const T* const a, const T* const b) -> T;
//
//template<typename T>
//inline auto devide(const T* const a, const T* const b) -> T;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	std::cout << "Введите арифметическое выражение: ";
//	elementType number1, number2;
//	char operation;
//	std::cin >> number1 >> operation >> number2;
//	
//	elementType (*operations[])(const elementType* const, const elementType* const) =
//	{
//		multiply, add, nullptr, substract, nullptr, devide
//	};
//
//	if (operation < '*' || '/' < operation || operations[operation - '*'] == nullptr)
//	{
//		std::cerr << "\x1b[31mWrong operation!\x1b[0m\n\a";
//		return 1;
//	}
//
//	try
//	{
//		std::cout << "= " << operations[operation - '*'](&number1, &number2);
//	}
//	catch (const char* message)
//	{
//		std::cerr << message;
//		return 2;
//	}
//
//	return 0;
//}
//
//template<typename T>
//inline auto add(const T* const a, const T* const b) -> T
//{
//	return *a + *b;
//}
//
//template<typename T>
//inline auto substract(const T* const a, const T* const b) -> T
//{
//	return *a - *b;
//}
//
//template<typename T>
//inline auto multiply(const T* const a, const T* const b) -> T
//{
//	return *a * *b;
//}
//
//template<typename T>
//inline auto devide(const T* const a, const T* const b) -> T
//{
//	if (*b == 0)
//		throw "\x1b[31mDevision by 0!\x1b[0m\n\a";
//
//	return *a / *b;
//}


/*
Используя указатель на массив целых чи-
сел, посчитать сумму элементов массива. Использовать
в программе арифметику указателей для продвижения
по массиву, а также оператор разыменования.
*/

//#include <iostream>
//
////typedef long double elementType;
//using elementType = float;
//
//template<typename T>
//inline auto sum(T const* begin, T const* const end) -> T;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	std::cout << "Введите размер массива: ";
//	int length;
//	std::cin >> length;
//
//	elementType* array;
//
//	try {
//		array = new elementType[length];
//	}
//	catch (std::bad_alloc& exception) {
//		std::cerr << "\x1b[31m" << exception.what() << "\x1b[0m\n\a";
//		return 1;
//	}
//
//	for (elementType* ii = array; ii < array + length; ii++)
//		std::cout << (*ii = static_cast<elementType>(rand() % 10)) << ' ';
//
//	std::cout << "\nsum = " << sum(array, array + length);
//	delete[] array;
//	return 0;
//}
//
//template<typename T>
//inline auto sum(T const* begin, T const* const end) -> T
//{
//	T sum = *begin++;
//
//	while (begin < end)
//		sum += *begin++;
//
//	return sum;
//}


/*
Даны два массива: А[M] и B[N] (M и N вво-
дятся с клавиатуры). Необходимо создать третий массив
минимально возможного размера, в котором нужно
собрать общие элементы двух массивов без повторений.
*/

//#include <iostream>
//
////typedef long double elementtype;
//using elementtype = float;
//
//template<typename t>
//void bubblesort(t* const array, t* const array_end);
//
//template<typename t>
//void swap(t& a, t& b);
//
//auto copyarray(const elementtype* begin,
//	const elementtype* const end) -> elementtype*;
//
//auto arraytoset(elementtype*& setend, elementtype* const begin,
//	const elementtype* const end) -> elementtype*;
//
//auto intersectarrays(elementtype*& setintersectionend, elementtype* const array1,
//	const elementtype* const array1end, elementtype* const array2,
//	const elementtype* const array2end) -> elementtype*;
//
//inline auto isinset(const elementtype element, const elementtype* set,
//	const elementtype* const setend) -> bool;
//
//inline auto printarray(const elementtype* array,
//	const elementtype* const arrayend) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//	srand(static_cast<unsigned>(time(nullptr)));
//	std::cout << "введите размеры массивов: ";
//	int lengtha, lengthb;
//	std::cin >> lengtha >> lengthb;
//
//	elementtype *arraya, *arrayb;
//
//	try {
//		arraya = new elementtype[lengtha];
//		arrayb = new elementtype[lengthb];
//	}
//	catch (std::bad_alloc& exception) {
//		std::cerr << "\x1b[31m" << exception.what() << "\x1b[0m\n\a";
//		return 1;
//	}
//
//	std::cout << "array a:\n";
//	
//	for (elementtype* ii = arraya; ii < arraya + lengtha; ii++)
//		std::cout << (*ii = static_cast<elementtype>(rand() % 10)) << ' ';
//
//	std::cout << "\narray b:\n";
//
//	for (elementtype* ii = arrayb; ii < arrayb + lengthb; ii++)
//		std::cout << (*ii = static_cast<elementtype>(rand() % 10)) << ' ';
//
//	elementtype* arraysab_intersectionend,
//		* arraysab_intersection = intersectarrays(arraysab_intersectionend,
//			arraya, arraya + lengtha, arrayb, arrayb + lengthb);
//
//	std::cout << "\nintersection of arrays a & b:\n";
//	printarray(arraysab_intersection, arraysab_intersectionend);
//
//	delete[] arraya, arrayb, arraysab_intersection;
//	return 0;
//}
//
//inline auto isinset(const elementtype element, const elementtype* set,
//	const elementtype* const setend) -> bool
//{
//	while (set < setend)
//		if (element == *set++)
//			return true;
//
//	return false;
//}
//
//inline auto printarray(const elementtype* array,
//	const elementtype* const arrayend) -> void
//{
//	while (array < arrayend)
//		std::cout << *array++ << ' ';
//}
//
//auto intersectarrays(elementtype*& setintersectionend, elementtype* const array1,
//	const elementtype* const array1end, elementtype* const array2,
//	const elementtype* const array2end) -> elementtype*
//{
//	elementtype* set1end, *set2end;
//
//	elementtype* const set1 = arraytoset(set1end, array1, array1end),
//		* const set2 = arraytoset(set2end, array2, array2end);
//
//	int setintersectionsize = 0;
//
//	for (elementtype* ii = set1; ii < set1end; ii++)
//		if (isinset(*ii, set2, set2end))
//			setintersectionsize++;
//
//	elementtype* const arraysintercetion = new elementtype[setintersectionsize];
//
//	for (elementtype* ii = set1, *jj = arraysintercetion; ii < set1end; ii++)
//		if (isinset(*ii, set2, set2end))
//			*jj++ = *ii;
//
//	delete[] set1, set2;
//	setintersectionend = arraysintercetion + setintersectionsize;
//	return arraysintercetion;
//}
//
//auto copyarray(const elementtype* begin,
//	const elementtype* const end) -> elementtype*
//{
//	elementtype* const newarray = new elementtype[end - begin],
//		*ii = newarray;
//
//	while (begin < end)
//		*ii++ = *begin++;
//
//	return newarray;
//}
//
//auto arraytoset(elementtype*& setend, elementtype* const begin,
//	const elementtype* const end) -> elementtype*
//{
//	elementtype* const arraycopy = copyarray(begin, end),
//		* const arraycopyend = arraycopy + (end - begin);
//
//	bubblesort(arraycopy, arraycopyend);
//
//	int setsize = 1;
//
//	for (const elementtype* ii = arraycopy; ii < arraycopyend - 1; ii++)
//		if (*ii != *(ii + 1))
//			setsize++;
//
//	elementtype* const set = new elementtype[setsize], *jj = set;
//
//	for (const elementtype* ii = arraycopy; ii < arraycopyend - 1; ii++)
//		if (*ii != *(ii + 1))
//			*jj++ = *ii;
//
//	*jj = *(arraycopyend - 1);
//
//	delete[] arraycopy;
//	setend = set + setsize;
//	return set;
//}
//
//template<typename t>
//void swap(t &a, t &b)
//{
//	t tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template<typename t>
//void bubblesort(t* const array, t* const array_end)
//{
//	bool wasswap = false;
//
//	for (t* jj = array, *sortedbegin = array_end; jj < array_end;
//		jj++, sortedbegin--)
//	{
//		for (t* ii = array; ii < sortedbegin - 1; ii++)
//			if (*ii > *(ii + 1))
//			{
//				swap(*ii, *(ii + 1));
//				wasswap = true;
//			}
//
//		if (!wasswap)
//			return;
//	}
//}
