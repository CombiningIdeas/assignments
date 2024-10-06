//#include <iostream>
//
//using namespace std;
//
//// Функция, которая генерирует случайное число с плавающей запятой 
//// и указанной точностью
//// Функция получает 3 параметра:
//// - max - верхний предел;
//// - min - нижний предел;
//// - precision - точность, количество знаков после комы.
//long double GetRandomNumberFloat(long double max, long double min, int precision);
//
//// та функция которая нужна!!!!!
//// Функция, генерирующая случайное действительное число от min до max
//long double random( double max, double min);
//
//int main()
//{
//	//setlocale(LC_ALL, "Russian");
//	system("chcp 1251");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/*
//	1.Используя метод Монте-Карло, приближённо определите значение числа PI(Пи)
//	(см. § 12 учебника). Запишите в таблицу полученные результаты при различных 
//	значениях N:
//	*/
//	//double g = pi_v;
//	long double N = 10000000;
//	long double M = 0;
//	long double x;
//	long double y;
//
//	for (int ii = 0; ii < N; ii++)
//	{
//		/*x = GetRandomNumberFloat(1, 0, 5);
//		y = GetRandomNumberFloat(1, 0, 5);*/
//		x = random(0, 1);
//		y = random(0, 1);
//		if ((x*x + y*y) <= 1)
//			M += 1;
//		/*else
//		{
//			cout << endl << x << endl;
//			cout << endl << y << endl;
//		}*/
//	}
//	cout << M << endl;
//	long double PI = static_cast<long double>(4.0 * M) / N;
//
//	cout << "PI = " << PI;
//	// при N = 7.85375e+08 или же милиардов тоесть 9 нулей
//	long double Pi = 3.1415;
//
//
//	/*RAND_MAX это специальная константа языка С++, в которой содержится 
//	максимальное целое число, которое может быть возвращено функцией rand()*/
//
//	/*Функция rand возвращает псевдослучайное целое число 
//	в диапазоне от 0 до RAND_MAX (32767)*/
//
//	return 0;
//}
//
//
//
//long double GetRandomNumberFloat(long double max, long double min , int precision)
//{
//	long double value1, value2;
//
//	// получить случайное число как целое число с порядком precision
//	//value1 = rand() % static_cast<int>(pow(10, precision + 3)) - static_cast<int>(pow(10, precision));
//	value1 = rand() % static_cast<int>(pow(10, precision));
//	//cout << endl << value1 << endl; - получаем случаное число от 0 до value
//	
//	// получить вещественное число:
//	//cout << value / pow(10, precision); - тестирование вычеслений в каком типе данных они будут
//	value2 = min + (value1 / pow(10, precision)) * (max - min);
//	//cout << endl << (value1 / pow(10, precision)) << endl;
//	return value2;
//}
//
//
//long double random(double max, double min)
//{
//	long double result = static_cast<long double>(rand()) / static_cast<long double>(RAND_MAX * (max - min)) + min;
//	//cout << rand() << endl;
//	// RAND_MAX = 32767
//	//long double result = min + (max - min) / RAND_MAX * rand();
//	return result;
//}
//
//
//
///*
//Все вышеперечисленные способы сводятся примерно к одной формуле:
//res = min + (max - min) / RAND_MAX * rand();
//
//Тут могут быть проблемы, если число значащих цифр в RAND_MAX меньше, 
//чем в мантиссе результирующего типа. Такое может случиться, даже если res 
//имеет тип float (RAND_MAX далеко не всегда равен INT_MAX, а может быть 
//намного меньше). Возможно, что и в противном случае, с распеределением 
//что-то будет не так, не могу сказать точно.
//*/
