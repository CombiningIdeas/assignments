﻿//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ЗАДАНИЕ 1
//	/*
//	Напишите программу, которая вычисляет сумму целых
//	чисел от а до 500 (значение a вводится с клавиатуры).
//	*/
//	/*int number, ii;;
//	std::cout << "Введите целое число до 500: ";
//	std::cin >> number;
//
//	int summ = 0;
//	for (ii = number; ii <= 500; ii++)
//		summ += ii;
//
//	if (number > 500)
//	{
//		for (ii = 500; ii <= number; ii++)
//			summ += ii;
//	}
//	std::cout << "Сумма целых чисел от " << number << " до 500: " << summ;
//	return 0;
//	*/
//
//	// ЗАДАНИЕ 2
//	/*Напишите программу, которая запрашивает два целых числа
//	x и y, после чего вычисляет и выводит значение x в степени y.*/
//	/*int digitX, digitY;
//	double degree = 1; // double потому что при отрицательной степени число може5т быть не целым.
//	std::cout << "Введите основание и степень числа через пробел: ";
//	std::cin >> digitX >> digitY;
//
//	for (int ii = abs(digitY); ii > 0; ii--)
//		degree *= digitX;
//
//	if (digitY < 0)
//		degree = 1 / degree;
//
//	std::cout << "Х в степени Y это: " << degree ;
//	return 0;*/
//	
//	// ЗАДАНИЕ 3
//
//	// Найти среднее арифметическое всех целых чисел от 1 до 1000.
//	// это без цикла в две строки:
//	// double arithmeticMean = (1.0 + 1000) / 2.0;
//	// std::cout << "Средне арифметическое всех целых чисел от 1 до 1000: " << arithmeticMean;
//	// это с циклом потому что тема цкилов:
//	/*double summ = 0;
//	for (int ii = 1; ii <= 1000; ii++)
//		summ += ii;
//	double arithmetic = summ / 1000;
//	std::cout << "Средне арифметическое всех целых чисел от 1 до 1000: " << arithmetic;
//	return 0;*/
//
//	// ЗАДАНИЕ 4
//	/*Найти произведение всех целых чисел от a до 20 (значение
//	a вводится с клавиатуры : 1 <= a <= 20).*/
//	/*int digit;
//	std::cout << "Введите целое ичсло от 1 до 20(1 <= a <= 20): ";
//	std::cin >> digit;
//	// используем long long потому что int не хватит для числа меньше 14
//	long long summ = 1;
//	for (int ii = digit; ii <= 20; ii++)
//		summ *= ii;
//	std::cout << "Произведение целых чисел от " << digit << " до 20: " << summ;
//	return 0;*/
//
//	// ЗАДАНИЕ 5
//	/*Написать программу, которая выводит на экран таблицу
//		умножения на k, где k — номер варианта.Например, для 7 - го
//		варианта :
//	7 x 2 = 14;
//	7 x 3 = 21.*/
//	/*int digit;
//	std::cout << "Введите число: ";
//	std::cin >> digit;
//
//
//	for (int ii = 1; ii <= 9; ii++)
//		std::cout << digit << " x " << ii << " = " << digit * ii << std::endl;
//
//	return 0;*/
//}