//#include <iostream>
//using namespace std;
//
//int sumOfNumbers(int num1, int num2)
//{
//	int summNumbers = 0;
//	if (num2 >= num1)
//		for (int ii = num1; ii <= num2; ii++)
//			summNumbers += ii;
//
//	else
//		for (int ii = num2; ii <= num1; ii++)
//			summNumbers += ii;
//
//	return summNumbers;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 2. 
//	/*Написать функцию, которая получает в качестве параметров 
//	2 целых числа и возвращает сумму чисел
//	из диапазона между ними.*/
//	int num1, num2;
//	cout << "Bведите через пробел два целых числа: " << endl;
//	cin >> num1 >> num2;
//
//	cout << sumOfNumbers(num1, num2);
//
//	return 0;
//}