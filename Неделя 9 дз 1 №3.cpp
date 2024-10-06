//#include <iostream>
//#include <map>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ЗАДАНИЕ 3
//	/*Пользователь вводит данные о своих расходах в долларах за неделю(каждый день).
//	Написать программу, которая вычисляет :
//	среднюю(за неделю) потраченную сумму;
//	общую сумму, потраченную пользователем за неделю;
//	количество дней и их названия(например, «вторник»),
//	когда сумма расхода(в день) превысила 100 долларов.*/
//	const int LENGTH = 7;
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
//	return 0;
//}