//#include <iostream>
//
//using namespace std;
//
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
//long double random1(double max, double min);
//
//// Это более точная функция, которая лучше генерирует число PI, 
//// если сравнивать реузльтаты
//long double random2(double max, double min);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
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
//		x = random1(1, 0);
//		y = random1(1, 0);
//		if ((x * x + y * y) <= 1)
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
//long double GetRandomNumberFloat(long double max, long double min, int precision)
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
//long double random1(double max, double min)
//{
//	long double result1 = static_cast<long double>(rand()) / static_cast<long double>(RAND_MAX * (max - min)) + min;
//	//cout << rand() << endl;
//	// RAND_MAX = 32767
//	//long double result = min + (max - min) / RAND_MAX * rand();
//	return result1;
//}
//
//
//long double random2(double max, double min)
//{
//	//long double result = static_cast<long double>(rand()) / static_cast<long double>(RAND_MAX * (max - min)) + min;
//	//cout << rand() << endl;
//	// RAND_MAX = 32767
//	long double result2 = min + (max - min) / RAND_MAX * rand();
//	return result2;
//}
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








//// второй способ не используя RAND_MAX и 
//// srand(static_cast<unsigned int>(time(nullptr))); и rand().
//
//
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//
//using namespace std;
//using elementType = double;
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//
//
//	int column, row;
//	// max = 157.456, min = -1.235;
//	int max = 157456, min = -1235;
//	cout << "Введиет число стобцов:" << endl;
//	cin >> column;
//	cout << "Введите число строк:" << endl;
//	cin >> row;
//	cout << "Матрица:" << endl;
//
//
//	// Создаётся матрица matrix
//	elementType** matrix;
//	try
//	{
//		matrix = new elementType*[row];
//
//		for (int ii = 0; ii < row; ii++)
//			matrix[ii] = new elementType[column];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		return 1;
//	}
//
//	int i_matrix = 0;
//	int j_matrix = 0;
//
//	// Здесь обнулить счётчик i
//
//	do 
//	{
//		do 
//		{
//			int random_number = rand();// нельяз double иначе не поделиться % - нецелочисленным делением.
//			//cout << random_number << endl;
//			random_number = random_number % (max - min) + min;
//			//cout << endl << random_number << endl;
//			//double результат = (double)число / (double)1000;
//			matrix[i_matrix][j_matrix] = (double)random_number / (double)1000;
//			// делим на тысячу потому что три знака после запятой
//			cout << setw(10) << matrix[i_matrix][j_matrix];
//			j_matrix++;
//		} while (j_matrix < column);
//
//		// Здесь еще раз обнулить счётчик i
//		j_matrix = 0;
//
//		i_matrix++;
//		cout << endl;// переход на новую строку
//	} while (i_matrix < row);
//
//	// Освобождение памяти(динамической) от матрицы
//	for (int ii = 0; ii < row; ii++)
//		delete[] matrix[ii];
//
//	delete[] matrix;
// 
//  return 0;
//}





//// третий способ не используя RAND_MAX и 
//// srand(static_cast<unsigned int>(time(nullptr))); и rand().
//// отличие от второго способа в том, что более декомпозированный код
//// разбит на функции
//
//
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//
//using namespace std;
//using elementType = double;
//
//
//template <typename T>
//auto matrixFilling(T** matrixFilling, const int LENGTHROW,
//	const int LENGTHCOLOMN, int& max, int& min) -> void;
//
//template <typename T>
//auto outputConsole(T** OutputMatrix, const int LENGTHROW,
//	const int LENGTHCOLOMN) -> void;
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//
//
//	int column, row;
//	// max = 157.456, min = -1.235;
//	int max = 157456, min = -1235;
//	cout << "Введиет число стобцов:" << endl;
//	cin >> column;
//	cout << "Введите число строк:" << endl;
//	cin >> row;
//	cout << "Матрица:" << endl;
//
//
//	// Создаётся матрица matrix
//	elementType** matrix;
//	try
//	{
//		matrix = new elementType * [row];
//
//		for (int ii = 0; ii < row; ii++)
//			matrix[ii] = new elementType[column];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		return 1;
//	}
//
//	//заполняме матрицу значениями
//	matrixFilling(matrix, row, column, max, min);
//
//
//	// выводим на консоль нашу матрицу
//	outputConsole(matrix, row, column);
//
//
//	// Освобождение памяти(динамической) от матрицы
//	for (int ii = 0; ii < row; ii++)
//		delete[] matrix[ii];
//
//	delete[] matrix;
//
//	return 0;
//}
//
//
//template <typename T>
//auto matrixFilling(T** matrixFilling, const int LENGTHROW,
//	const int LENGTHCOLOMN, int& max, int& min) -> void
//{
//	for (int ii = 0; ii < LENGTHROW; ii++)
//	{
//		for (int jj = 0; jj < LENGTHCOLOMN; jj++)
//		{
//			int random_number = rand();
//			// нельяз double иначе не поделиться % - нецелочисленным делением.
//			//cout << random_number << endl;
//			random_number = random_number % (max - min) + min;
//			//cout << endl << random_number << endl;
//			//double результат = (double)число / (double)1000;
//			// делим на тысячу потому что три знака после запятой
//			matrixFilling[ii][jj] = static_cast<double>(random_number) / static_cast<double>(1000);
//		}
//	}
//}
//
//
//template <typename T>
//auto outputConsole(T** OutputMatrix, const int LENGTHROW,
//	const int LENGTHCOLOMN) -> void
//{
//	for (int ii = 0; ii < LENGTHROW; ii++)
//	{
//		for (int jj = 0; jj < LENGTHCOLOMN; jj++)
//			cout << setw(10) << OutputMatrix[ii][jj] << ' ';
//
//		cout << endl;// переход на новую строку
//	}
//}





//// четвертый способ это - 
//// обьединения первого и третьего способов для нахождения числа PI
//
//
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//
//using namespace std;
//using elementType = double;
//
//
//long double random(int max, int min);
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	
//	
//	long double N = 10000000;
//	long double M = 0;
//	long double x;
//	long double y;
//	int max = 1000;
//	int min = 0;
//
//	for (int ii = 0; ii < N; ii++)
//	{
//		/*x = GetRandomNumberFloat(1, 0, 5);
//		y = GetRandomNumberFloat(1, 0, 5);*/
//		x = random(max, min);
//		y = random(max, min);
//		if ((x * x + y * y) <= 1)
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
//
//
//
//
//	return 0;
//}
//
//
//
//long double random(int max, int min)
//{
//	int random_number = rand();
//	random_number = random_number % (max - min) + min;
//	long double result = static_cast<double>(random_number) / static_cast<double>(1000);
//	return result;
//}



// по итогу самый лучший способ это первый там лучше всего получатеся вычеслить число PI