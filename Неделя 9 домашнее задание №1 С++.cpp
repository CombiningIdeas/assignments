//#include <iostream>
//#include <map>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// задание 1
//	/*написать программу, копирующую последовательно элементы
//	одного массива размером 10 элементов в 2 массива размером
//	5 элементов каждый.элементы первоначального массива можно
//	сгенерировать в произвольном диапазоне.*/
//	/*srand(static_cast<unsigned>(time(nullptr)));
//	const int LENGTH = 10;
//	int initialArray[LENGTH];
//	cout << "Первоначальный массив: ";
//	cout << endl;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		initialArray[ii] = rand() % 21 - 10;
//		cout << initialArray[ii] << ' ';
//	}
//	cout << endl;
//
//	cout << "Первый массив(из двух): ";
//	cout << endl;
//	for(int jj = 0; jj < LENGTH / 2; jj++)
//		cout << initialArray[jj] << ' ';
//	cout << endl;
//
//	cout << "Второй массив(из двух) : ";
//	cout << endl;
//	for (int gg = LENGTH / 2; gg < LENGTH; gg++)
//		cout << initialArray[gg] << ' ';
//	return 0;*/
//
//	// ЗАДАНИЕ 2
//	/*Напишите программу, которая выполняет поэлементную
//	сумму двух массивов и результат заносит в третий массив.
//	Элементы массивов можно сгенерировать в произвольном
//	диапазоне.*/
//	/*srand(static_cast<unsigned>(time(nullptr)));
//	const int LENGTH = 10;
//	int firstlArray[LENGTH];
//	int secondArray[LENGTH];
//	int resultArray[LENGTH];
//
//	cout << "Первый массив: ";
//	cout << endl;
//	for (int jj = 0; jj < LENGTH; jj++)
//	{
//		firstlArray[jj] = rand() % 21 - 10;
//		cout << firstlArray[jj] << ' ';
//	}
//	cout << endl;
//
//	cout << "Второй массив: ";
//	cout << endl;
//	for (int gg = 0; gg < LENGTH; gg++)
//	{
//		secondArray[gg] = rand() % 21 - 10;
//		cout << secondArray[gg] << ' ';
//	}
//	cout << endl;
//
//	cout << "Итоговый массив: ";
//	cout << endl;
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		resultArray[ii] = firstlArray[ii] + secondArray[ii];
//		cout << resultArray[ii] << ' ';
//	}
//	cout << endl;
//
//	return 0;*/
//
//	// ЗАДАНИЕ 3
//	/*Пользователь вводит данные о своих расходах в долларах за неделю(каждый день).
//	Написать программу, которая вычисляет :
//	среднюю(за неделю) потраченную сумму;
//	общую сумму, потраченную пользователем за неделю;
//	количество дней и их названия(например, «вторник»),
//	когда сумма расхода(в день) превысила 100 долларов.*/
//	/*const int LENGTH = 7;
//	int moneyArray[LENGTH];
//	cout << "Введите расходы за каждый день недели(в долларах): ";
//	int sumNumber = 0, counter = 0;
//	double averageCosts = 0;
//	string count;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		cin >> moneyArray[ii];
//		sumNumber += moneyArray[ii];
//	}
//
//	averageCosts = static_cast<double>(sumNumber) / LENGTH;
//
//	map<int, string> weekArray =
//	{
//		{0, "Понедельник"}, {1, "Вторник"}, {2, "Среда"},
//		{3, "Четверг"}, {4, "Пятница"}, {5, "Суббота"},
//		{6, "Воскреснье"}
//	};
//
//	cout << "Средняя потраченная за неделю сумма: " << averageCosts;
//	cout << endl;
//	cout << "Общая сумма, потраченная пользователем за неделю: " << sumNumber;
//	cout << endl;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (moneyArray[ii] > 100)
//		{
//			counter += 1;
//		}
//	}
//
//	if (counter == 0)
//		return 0;
//
//	cout << "Количество дней когда сумма расхода в день превысила 100$: " << counter;
//	cout << endl << "Названиея этих дней: " << endl;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (moneyArray[ii] > 100)
//		{
//			count = static_cast<string>(weekArray[ii]);
//			cout << count << " - " << moneyArray[ii] << "$" << endl;
//		}
//	}
//
//	return 0;*/
//
//	// ЗАДАНИЕ 4
//	/*Известны данные курса валют(курс доллара по отношению
//	к евро) за все месяцы года и начисленные проценты за каждый месяц на депозитном счету в евро.Все данные вводятся
//	пользователем, в том числе и сумма на депозите в евро.
//	Написать программу, которая по запросу пользователя
//	(номер месяца) выводит в консоль размер допустимой суммы,
//	которую он может обналичить, при условии, что у него долларовая карта, обналичить можно не более 50 % от начисленной
//	суммы в том случае, если начисленная сумма в этот месяц
//	составляет не менее 500$.*/
//	/*const int LENGTH = 12;
//	double monthArrayInEuro[12];
//	double monthArrayInDollar[12];
//	double cashingOutMoney[12];
//	int specialNumber;
//	cout << "Курс валют: 1 евро = 1,1 доллар" << endl;
//	cout << "Введите поочередно через пробел суммы(в евро),"
//		<< "которые будут зачисляться на вклад в банке, за 12 месяцев(через пробел) :" 
//		<< endl;
//	for (int ii = 0; ii < 12; ii++)
//		cin >> monthArrayInEuro[ii];
//
//	cout << "Введите номер месяца, чтобы узнать сколько вы можете снять долларов при условии,"
//		<< " что вам будет доступно лишь 50 % от той суммы, " << endl 
//		<< "что вы внесли в евро," << " если сумма была больше 500 долларов: " << endl;
//	cin >> specialNumber;
//
//	int counter = 0;
//	for (int jj = 0; jj < 12; jj++)
//	{
//		monthArrayInDollar[jj] = monthArrayInEuro[jj] * 1.1;
//		if (monthArrayInDollar[jj] > 500)
//		{
//			cashingOutMoney[counter] = monthArrayInDollar[jj];
//			if (specialNumber-1 == jj)
//				cout << "Вы можете обналичить: " << cashingOutMoney[counter] / 2 
//				<< " долларов.";
//			counter += 1;
//		}
//	}
//
//	return 0;*/
//
//}