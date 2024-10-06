//#include <iostream>
//using namespace std;
//
//bool definitionOfTheYear(int year)
//{
//	return year % 4 == 0 ? 1 : 0;
//}
//
//int differenceInDays(int& firstDay, int& firstMonth, int& firstYear,
//	int& secondDay, int& secondMonth, int& secondYear)
//{
//	int differenceOfDays = 0;
//	if (firstYear <= secondYear)
//	{
//		for (int ii = firstYear; ii <= secondYear; ii++)
//		{
//			if (definitionOfTheYear(ii+1) == true)
//				secondDay += 1;
//		}
//	}
//	else if (firstYear > secondYear)
//	{
//		for (int ii = secondYear; ii <= firstYear; ii++)
//		{
//			if (definitionOfTheYear(ii+1) == true)
//				firstDay += 1;
//		}
//	}
//
//	int yearDifference = abs(abs(firstYear) - abs(secondYear));
//
//	differenceOfDays += yearDifference * 365;
//	cout << differenceOfDays;
//	for (int ii = 1; ii < firstMonth; ii++)
//	{
//		switch (ii)
//		{
//		case 1:
//			firstDay += 31;
//			break;
//		case 2:
//			firstDay += 28 + definitionOfTheYear(firstYear);
//			break;
//		case 3:
//			firstDay += 31;
//			break;
//		case 4:
//			firstDay += 30;
//			break;
//		case 5:
//			firstDay += 31;
//			break;
//		case 6:
//			firstDay += 30;
//			break;
//		case 7:
//			firstDay += 31;
//			break;
//		case 8:
//			firstDay += 31;
//			break;
//		case 9:
//			firstDay += 30;
//			break;
//		case 10:
//			firstDay += 31;
//			break;
//		case 11:
//			firstDay += 30;
//			break;
//		case 12:
//			firstDay += 31;
//			break;
//		default:
//			break;
//		}
//	}
//	for (int ii = 1; ii < secondMonth; ii++)
//	{
//		switch (ii)
//		{
//		case 1:
//			secondDay += 31;
//			break;
//		case 2:
//			secondDay += 28 + definitionOfTheYear(firstYear);
//			break;
//		case 3:
//			secondDay += 31;
//			break;
//		case 4:
//			secondDay += 30;
//			break;
//		case 5:
//			secondDay += 31;
//			break;
//		case 6:
//			secondDay += 30;
//			break;
//		case 7:
//			secondDay += 31;
//			break;
//		case 8:
//			secondDay += 31;
//			break;
//		case 9:
//			secondDay += 30;
//			break;
//		case 10:
//			secondDay += 31;
//			break;
//		case 11:
//			secondDay += 30;
//			break;
//		case 12:
//			secondDay += 31;
//			break;
//		default:
//			break;
//		}
//	}
//
//	if (secondYear >= firstYear)
//		differenceOfDays += secondDay - firstDay;
//	else if (secondYear < firstYear)
//		differenceOfDays += firstDay - secondDay;
//	if (differenceOfDays < 0)// тоесть один год к примеру и сначала идет больший месяц а потом меньший
//		differenceOfDays = abs(differenceOfDays);
//	return differenceOfDays;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 1. 
//	/*Написать функцию, которая принимает две даты
//	(т.е.функция принимает шесть параметров) и вычисляет
//	разность в днях между этими датами. Для решения этой
//	задачи необходимо также написать функцию, которая
//	определяет, является ли год високосным. */
//	int firstDataDay, firstDataMonth, firstDataYear,
//		secondDataDay, secondDataMonth, secondDataYear;
//
//	cout << "Введите первую дату(день месяц год): ";
//	cin >> firstDataDay >> firstDataMonth >> firstDataYear;
//	cout << "Введите вторую дату(день месяц год): ";
//	cin >> secondDataDay >> secondDataMonth >> secondDataYear;
//
//	cout << "Разница между двумя датами в днях - " 
//		<< differenceInDays(firstDataDay, firstDataMonth, firstDataYear, 
//			secondDataDay, secondDataMonth, secondDataYear);
//
//	return 0;
//}