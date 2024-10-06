/*
Задание 1. Создать приложение, которое выводит информацию о книге, в следующем формате :
Name: “The warand the peace”
Avtor : L.N.Tolstoj
Izdatelstvo : Piter
Pages : 500.
*/
/*
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "\t\tName\t    : \"The warand the peace\"\n"
		"\t\tAvtor\t    : L.N.Tolstoj\n"
		"\t\tIzdatelstvo : Pite\n"
		"\t\tPages\t    : 500.";


	return 0;
}
*/
/*
Задание 2. Создать приложение, которое выводит на
консоль фразу:
“U lukomor’a dub zelenij,
Zlataya zep na dupe tom,
I dnem i nochju kot uchenij
vse hodit po cepi krugom”
Сопроводить каждую новую строчку тройным звуковым сигналом.
*/
/*
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "\a\a\a\t\t\"U lukomor’a dub zelenij,\n"
		"\a\a\a\t\tZlataya zep na dupe tom,\n"
		"\a\a\a\t\tI dnem i nochju kot uchenij\n"
		"\a\a\a\t\tvse hodit po cepi krugom\"";
	


	return 0;
}
*/
/*
Задание 3.
Создать приложение, которое выводит на экран следующую таблицу:
╔════════════════════════════════════════════╗
║ Vremena goda ║
╠═════════╦═══════════╦═══════════╦══════════╣
║ Zima ║ Vesna ║ Leto ║ Osen ║
╚═════════╩═══════════╩═══════════╩══════════╝
Подсказка: Подсказка:
Рекомедуем выполнить следующий пример:
cout<<"\n"<<(char)201<<(char)205<<
(char)205<<(char)187;
Необходимые символы находятся в дипазоне от 179
до 218.
*/
/*
#include <iostream>
#include <iomanip>

int main()
{
	std::cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)187 << std::endl;

	std::cout << (char)186 << "\t\t\tVremena goda\t\t\t " << (char)186 << std::endl;

	std::cout << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
		<< (char)205 << (char)205 << (char)185 << std::endl;

	std::cout << (char)186 << "     Zima    " << (char)186 << "     Vesna    " << (char)186 << "     Leto    " << (char)186 << "     Osen    " << (char)186 << std::endl;

	return 0;
}
*/
/*
Задание 1. Пользователь вводит год. Необходимо написать программу, которая выведет количество дней в этом
году. При написании программы использовать линейный
алгоритм (конструкции условного выбора не использовать). Например, пользователь ввел год 2004, программа
сообщает, что в этом году 366 дней в следующей форме:
In 2004 year = 366 days
*/
/*
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int year;
	std::cout << "Введите год: ";
	std::cin >> year;
	
	//if (year % 4 == 0)
	//	std::cout << "В" << year << " году" << 366 << " дней.\n";
	//else
	//	std::cout << "В" << year << " году" << 365 << " дней.\n";
	

	std::cout << "В " << year << " году " << 365 + (year % 4 == 0) << " дней.\n";

	return 0;
}
*/
/*
Задание 2. Пользователь вводит с клавиатуры денежную
сумму в гривнах и копейках (гривны и копейки вводятся
в разные переменные). Сумма может быть введена как
правильно (например 19 грн. 90 коп), так и неправильно
(например 22 грн. 978 коп). Написать программу, которая,
используя только линейный алгоритм, осуществит корректировку введенной денежной суммы в правильную форму.
Например, если пользователь ввел 11 грн. 150 коп,
программа должна вывести на экран сумму 12 грн. 50 коп.
*/
/*
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int rubles, kopecks;
	std::cout << "Введите рубли и копейки ";
	std::cin >> rubles >> kopecks;
	std::cout << "Количевство рублей: " << rubles + kopecks / 100
		<< "\nКоличевство копеек: " << kopecks % 100;

	return 0;
}
*/

/*
Задание 3. Написать программу вычисления объема параллелепипеда. Ниже приведен рекомендуемый вид экрана
во время выполнения программы.
*/

/*
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Вычисление объема параллелепипеда. \nВведите длинну, высоту, ширину: ";
	double lеngth, height, width;
	std::cin >> lеngth >> height >> width;
	std::cout << "Обьем параллелепипеда: " << lеngth * height * width;


	return 0;
}
*/

/*
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int year;
	std::cout << "Введите год: ";
	std::cin >> year;


	float quotinent = static_cast<float>(year) / 4.0;
	int intPart = static_cast<int>(quotinent);
	float fractionPart = quotinent - intPart;
	int adjucment = static_cast<int>(1 - fractionPart);


	std::cout << "В " << year << " году " << 365 + adjucment << " дней.\n";

	return 0;
}
*/

/*
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите число: ";
	int number;
	std::cin >> number;
	std::cout << "Введите показатель степени: ";
	int degree;
	std::cin >> degree;
	std::cout << number << " * 2 ^ " << degree << " = " << (number << degree) << std::endl;
	std::cout << number << " * 2 ^ " << degree << " = " << (number >> degree) << std::endl;


	return 0;
}
*/
/*
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Введите номер дня недели: ";
	int number;
	std::cin >> number;
	std::cout << "Время окончания работы: ";
	std::cout << 17 + ~(number & 1) << std::endl;

	return 0;
}
*/
/*
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int year;
	std::cout << "Введите год: ";
	std::cin >> year;
	unsigned b0 = year & 1;
	unsigned b1 = (year & 0b10) >> 1;
	unsigned adjucment = b0 | b1;
	std::cout << "В " << year << " году " << 365 + 1 - adjucment << " дней.\n";
	// или ((year & 3) == 0)

	return 0;
}
*/

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 5, b = 7;
//	double c = 9;
//	c = 9 + 1. / (a-- * ++b);
//	cout << a << " " << b << " " << c << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 5, b = 2, c = 9;
//	c = 1. / a - b++;
//	cout << a << " " << b << " " << c << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 3, b = 1;
//	int c;
//	c = a % b;
//	cout << a << " " << b << " " << c << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 5, b = 7, c = 9;
//	c += a-- * ++b;
//	cout << a << " " << b << " " << c << endl;
//	return 0;
//}

//#include  <iostream>
//using namespace std;
//int main()
//{
//	bool b = double(4 / -2);
//	cout << b;
//
//	return 0;
//}
