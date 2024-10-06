//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ЗАДАНИЕ 1
//	/*В одномерном массиве, заполненном случайными числами,
//	определить минимальный и максимальный элементы.*/
//	/*srand(static_cast<unsigned int>(time(nullptr)));cout << "Массив: " << endl;
//	int array[10], minNumber, maxNumber;
//	for (int ii = 0; ii < 9; ii++)
//	{
//		array[ii] = rand() % 100;
//		cout << array[ii] << " ";
//	}
//	cout << endl;
//
//	minNumber = array[0];
//	maxNumber = array[0];
//
//	for (int jj = 1; jj < 9; jj++)
//	{
//		if (minNumber > array[jj])
//			minNumber = array[jj];
//
//		if (maxNumber < array[jj])
//			maxNumber = array[jj];
//	}
//
//	cout << "Минимальный элемент - " << minNumber << "; Максимальный элемент - " << maxNumber;
//
//	return 0;*/
//
//	// ЗАДАНИЕ 2
//	/*В одномерном массиве, заполненном случайными числами
//	в заданном пользователем диапазоне, найти сумму элементов,
//	значения которых меньше указанного пользователем.*/
//	/*srand(static_cast<unsigned int>(time(nullptr)));
//	int array[10], leftBorder, rightBorder, specialNumber, sumSpecialNumber = 0;
//
//	cout << "Задайте границы массива: ";
//	cin >> leftBorder >> rightBorder;
//	cout << "Введите число, чтобы получить сумму цифр меньших этого числа: ";
//	cin >> specialNumber;
//
//	if (leftBorder <= rightBorder)
//	{
//		for (int ii = leftBorder; ii < rightBorder; ii++)
//		{
//			array[ii] = rand() % (rightBorder - leftBorder + 1) + leftBorder;
//			cout << array[ii] << " ";
//			if (specialNumber > array[ii])
//				sumSpecialNumber += array[ii];
//		}
//		cout << endl;
//	}
//	else if (leftBorder > rightBorder)
//	{
//		for (int ii = rightBorder; ii < leftBorder; ii++)
//		{
//			array[ii] = rand() % (leftBorder - rightBorder + 1) + rightBorder;
//			cout << array[ii] << " ";
//			if (specialNumber > array[ii])
//				sumSpecialNumber += array[ii];
//		}
//		cout << endl;
//	}
//
//	cout << "Сума элементов меньших - " << specialNumber << " равна - " << sumSpecialNumber;
//
//	return 0;*/
//
//	// ЗАДАНИЕ 3
//	/*Пользователь вводит прибыль фирмы за год(12 месяцев).
//	Затем пользователь вводит диапазон(например, 3 и 6 — поиск
//	между 3 - м и 6 - м месяцем).Необходимо определить месяц,
//	в котором прибыль была максимальна и месяц, в котором
//	прибыль была минимальна с учетом выбранного диапазона.*/
//	/*int january, february, march, april, may, june, july,
//		august, september, october, november, december;
//	int leftBorder, rightBorder, minNumber, maxNumber;
//	cout << "Введите прибыль фирьмы за год(12 месяцев - 12 раз) в рублях: ";
//	cin >> january >> february >> march >> april >> may >> june >> july >> august >> september
//		>> october >> november >> december;
//	cout << "Введите границы диапазона(поиск между заданными значениями): ";
//	cin >> leftBorder >> rightBorder;
//
//	int arrayMonth[12] = {january, february, march, april, may, june, july, august, september,
//		october, november, december};
//
//	if (leftBorder < 1 || rightBorder > 12)
//	{
//		cerr << "Неправильно выбран один из месяцев!";
//		return 1;
//	}
//
//	minNumber = arrayMonth[leftBorder - 1];
//	maxNumber = arrayMonth[leftBorder - 1];
//	// так как нумерация месяцев идет с 1, а индексы в массиве с 0, то это нужно учитывать.
//	for (int ii = leftBorder - 1; ii < rightBorder; ii++)
//	{
//		if (minNumber > arrayMonth[ii])
//			minNumber = arrayMonth[ii];
//
//		if (maxNumber < arrayMonth[ii])
//			maxNumber = arrayMonth[ii];
//	}
//
//	cout << "Минимальное число в выбранном диапазоне[" << leftBorder << ", " << rightBorder
//		<< "] равно - " << minNumber << ", а максимальное число - " << maxNumber << ".";
//
//	return 0;*/
//
//	// ЗАДАНИЕ 4
//	/*В одномерном массиве, состоящем из N вещественных
//	чисел вычислить:
//	Сумму отрицательных элементов.
//	Произведение элементов, находящихся между min и max
//	элементами.
//	Произведение элементов с четными номерами.
//	Сумму элементов, находящихся межд*/
//	// вещественное число - это число с дробной частью.
//	// так как есть отрицательные числа то пускай будет диапазон от -20 до 20.
//	/*srand(static_cast<unsigned int>(time(nullptr)));
//	long double num1, num2, num3, num4, num5, num6, lessZero = 0, minNumber, maxNumber, 
//		productElements = 1, evenElements = 1, firstNegative, lastNegative, sumNumbers = 0;
//
//	cout << "Введите 6 вещественных элементов для массива: ";
//	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
//
//	double array[6] = {num1, num2, num3, num4, num5, num6};
//	minNumber = array[0];
//	maxNumber = array[0];
//	int counter = 0, minNumberElement, maxNumberElement;
//
//	for (int ii = 0; ii < 6; ii++)
//	{
//		if (array[ii] < 0)
//		{
//			lessZero += array[ii];
//			if (counter == 0)// первое отрицательное число найдем один раз через счетчик.
//			{
//				firstNegative = ii;
//				counter = 1;
//			}
//			lastNegative = ii;
//			// а второе отрицательно число будем каждый раз перезаписывать
//			// и что запишентся в последний раз и будет последним отрицательным числом
//		}
//
//		if (minNumber > array[ii])
//		{
//			minNumber = array[ii];
//			minNumberElement = ii;
//		}
//
//		if (maxNumber < array[ii])
//		{
//			maxNumber = array[ii];
//			maxNumberElement = ii;
//		}
//
//		if (ii % 2 == 0)
//			evenElements *= array[ii];
//	}
//	if (minNumberElement <= maxNumberElement)
//	{
//		for (int jj = minNumberElement; jj <= maxNumberElement; jj++)
//			productElements *= array[jj];
//	}
//	else if (minNumberElement > maxNumberElement)
//	{
//		for (int jj = maxNumberElement; jj <= minNumberElement; jj++)
//			productElements *= array[jj];
//	}
//
//
//	for (int gg = firstNegative; gg <= lastNegative; gg++)
//		sumNumbers += array[gg];
//
//	cout << "Массив: ";
//	for (int ing = 0; ing < 6; ing++)
//		cout << array[ing] << " ";
//	cout << endl;
//
//	cout << "Сумма отрицательных элементов: " << lessZero << endl;
//	cout << "Произведение элементов, находящихся между min и max элементами: "
//		<< productElements << endl;
//	cout << "Произведение чисел с четными номерами: " << evenElements << endl;
//	cout << "Сумму элементов, находящихся между первым и последним отрицательными элементами: "
//		<< sumNumbers;
//
//	return 0;*/
//
//}