//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	//ЗАДАНИЕ 1
//	/*
//	Подсчитать количество целых чисел в диапазоне от 100
//	до 999, у которых есть две одинаковые цифры.
//	*/
//	/*int counter1, counter2;
//	int count1, count10, count100, summ = 0;
//	for (int ii = 100; ii <= 999; ii++)
//	{
//		counter1 = ii;
//		count1 = counter1 % 10;
//		count10 = counter1 / 10 % 10;
//		count100 = counter1 / 100;
//
//		if (count1 == count10 || count1 == count100 || count10 == count100)
//			summ += 1;
//	}
//
//	std::cout << "количество целых чисел в диапазоне от 100 до 999,"
//		<< " у которых есть две одинаковые цифры: " << summ;
//
//	return 0;*/
//
//	// ЗАДАНИЕ 2
//	/*
//	Подсчитать количество целых чисел в диапазоне от 100 до
//	999, у которых все цифры разные.
//	*/
//	/*int counter1, counter2;
//	int count1, count10, count100, summ = 0;
//	for (int ii = 100; ii <= 999; ii++)
//	{
//		counter1 = ii;
//		count1 = counter1 % 10;
//		count10 = counter1 / 10 % 10;
//		count100 = counter1 / 100;
//
//		if (count1 != count10 && count1 != count100 && count10 != count100)
//			summ += 1;
//	}
//
//	std::cout << "количество целых чисел в диапазоне от 100 до 999,"
//		<< " у которых есть все цифры разные: " << summ;
//
//	return 0;*/
//
//	// ЗАДАНИЕ 3
//	/*
//	Пользователь вводит любое целое число.Необходимо из
//	этого целого числа удалить все цифры 3 и 6 и вывести обратно
//	на экран.
//	*/
//	/*long long digit, finalNumber = 0;
//	std::cout << "Введите любое целое число(до 19 цифр подряд): ";
//	std::cin >> digit;
//
//	long long jj = digit, count = 1;
//	for (long long ii = digit; ii > 0; ii = ii / 10)
//	{
//		jj = ii % 10;
//		if (jj == 3 || jj == 6)
//			jj = 0;
//		else
//		{
//			jj = jj * count;
//			count *= 10;
//		}
//		finalNumber += jj;
//	}
//	std::cout << finalNumber << std::endl;
//	return 0;*/
//
//	//ЗАДАНИЕ 4
//	/*Пользователь вводит любое целое число А. Необходимо
//	вывести все целые числа В, для которых А делиться без остатка
//	на В* В и не делиться без остатка на В* В* В.*/
//	/*int digitA;
//	std::cout << "Введите любое целое число: ";
//	std::cin >> digitA;
//	for (int digitB = 1; digitB < digitA; digitB++)
//		if (digitA % (digitB * digitB) == 0 && digitA % (digitB * digitB * digitB) != 0)
//			std::cout << digitB << " ";
//	return 0;*/
//
//	//Задание 5
//	/*
//	Пользователь вводит целое число А. Программа должна
//	определить, что куб суммы цифр этого числа равен А*А.
//	*/
//	/*int digit, number = 0;
//	std::cout << "Введите целое число: ";
//	std::cin >> digit;
//	for (int ii = digit; ii > 0; ii = ii / 10)
//	{
//		number += ii % 10;
//	}
//	// такие числа это к примеру 1 или 27, которые подойдут под условие.
//	if (number * number * number == digit * digit)
//		std::cout << "Куб суммы цифр этого числа равен " << digit << "*" << digit;
//	else
//		std::cout << "Куб суммы цифр этого числа не равен " << digit << "*" << digit;
//	return 0;*/
//	//ЗАДАНИЕ 6
//	/*Пользователь вводит целое число.Необходимо вывести все
//	целые числа, на которое заданное число делиться без остатка.*/
//	/*int intNumber;
//	std::cout << "Введите целое число: ";
//	std::cin >> intNumber;
//
//	for (int ii = 1; ii <= intNumber; ii++)
//		if (intNumber % ii == 0)
//			std::cout << ii << " ";
//
//	return 0;*/
//	
//	// ЗАДАНИЕ 7
//	/*Пользователь вводит два целых числа.Необходимо вывести все целые числа,
//	на которые оба введенных числа делятся
//	без остатка.*/
//	/*int num1, num2;
//	std::cout << "Введите два целых числа (через пробел): ";
//	std::cin >> num1 >> num2;
//
//	int minNum = std::min(num1, num2);
//
//	for (int ii = 1; ii <= minNum; ii++)
//		if ((num1 % ii == 0) && (num2 % ii == 0))
//			std::cout << ii << " ";
//
//	return 0;*/
//	
//}