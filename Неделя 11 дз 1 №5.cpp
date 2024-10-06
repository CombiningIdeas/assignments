//#include <iostream>
//using namespace std;
//
//bool sumOfNumbers(int &luckyNumber)
//{
//	int LENGTH = 0, longlLuckyNumber = luckyNumber;
//	while (longlLuckyNumber > 0)
//	{
//		LENGTH += 1;
//		longlLuckyNumber = longlLuckyNumber / 10;
//	}
//
//	int halfNumber = LENGTH / 2, sumFirstHalf = 0, sumSecondHalf = 0;
//	for (int ii = 0; ii < halfNumber; ii++)
//	{
//		sumSecondHalf += luckyNumber % 10; // так как начинаем с конца то сначала идет вторая половина
//		luckyNumber = luckyNumber / 10;
//	}
//
//	for (int ii = halfNumber; ii < LENGTH; ii++)
//	{
//		sumFirstHalf += luckyNumber % 10;
//		luckyNumber = luckyNumber / 10;
//	}
//
//	if (sumFirstHalf == sumSecondHalf)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 5.
//	/*Написать функцию, которая определяет, 
//	является ли «счастливым» шестизначное число.*/
//	int luckyNumber;
//	cout << "Bведите шестичзначное число для проверки на счастливое число: " << endl;
//	cin >> luckyNumber;
//	if (luckyNumber > 999999 || luckyNumber < 100000)
//	{
//		cout << "Число не является счастливым";
//		return 1;
//	}
//	if (sumOfNumbers(luckyNumber) == true)
//		cout << "Число являетсмя счастливым";
//	else
//		cout << "Число НЕ является счастливым";
//
//	return 0;
//}