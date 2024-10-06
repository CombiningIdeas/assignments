//// вариант без рекурсии
//
////#include <iostream>
////using namespace std;
////
////int findingCommonDivisor(int num1, int num2)
////{
////	int maxCommonDivisor = 1;
////	int commonDivisor1 = 0;
////	for (int ii = 1; ii <= abs(num1) && ii <= abs(num2); ii++)
////		if (num1 % ii == 0 && num2 % ii == 0)
////			if (ii > maxCommonDivisor)
////				maxCommonDivisor = ii;
////
////	return maxCommonDivisor;
////}
////
////int main()
////{
////	setlocale(LC_ALL, "Russian");
////	// Задание 2. 
////	/* Написать рекурсивную функцию нахождения
////	наибольшего общего делителя двух целых чисел. */
////
////	int number1, number2;
////
////	cout << "Введите два целых числа через пробел: ";
////	cin >> number1 >> number2;
////
////	// не понял зачем здесь нужна рекурсия и сделал без неё. Так проще.
////	cout << "Наибольший общий делитель: " << findingCommonDivisor(number1, number2);
////
////	return 0;
////}
//
//
//
//
//
//// вариант с рекурсией через алгоритм евклида
//
//#include <iostream>
//using namespace std;
//
//inline int findingCommonDivisor(int num1, int num2)
//{
//	if (num2 == 0)
//		return num1;
//	if (num1 > num2)
//		return findingCommonDivisor(num2, num1 % num2);
//	else
//		return findingCommonDivisor(num1, num2 % num1);
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 2. 
//	/* Написать рекурсивную функцию нахождения
//	наибольшего общего делителя двух целых чисел. */
//
//	int number1, number2;
//
//	cout << "Введите два целых числа через пробел: ";
//	cin >> number1 >> number2;
//
//	cout << "Наибольший общий делитель: " << findingCommonDivisor(number1, number2);
//
//	return 0;
//}