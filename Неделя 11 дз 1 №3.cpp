//#include <iostream>
//using namespace std;
//
//void sumOfNumbers(int &num1, int &num2)
//{
//	int specialNum1, specialNum2, counter = 0;
//	if ((num2 >= 1 && 1 >= num1) || (num2 <= 1 && 1 <= num1))
//		cout << "Число - -1 является совершенным" << endl;
//	if ((num2 >= 1 && 1 >= num1) || (num2 <= 1 && 1 <= num1))
//		cout << "Число - 1 является совершенным" << endl;
//	if (num2 >= num1)
//	{
//		for (int ii = num1; ii <= abs(num2); ii++)
//		{
//			specialNum1 = 0, specialNum2 = 0;
//			for (int jj = 1; jj < abs(ii); jj++)
//			{
//				if ((ii % jj) == 0)
//				{
//					specialNum1 += jj;
//					specialNum2 -= jj;
//				}
//			}
//
//			if (ii == specialNum2)
//			{
//				if (specialNum2 != 0)
//					cout << "Число - " << specialNum2 << " является совершенным"
//					<< endl;
//			}
//
//			if (ii == specialNum1)
//			{
//				if (specialNum1 != 0)
//					cout << "Число - " << specialNum1 << " является совершенным"
//					<< endl;
//			}
//		}
//	}
//	else
//	{
//		for (int ii = num2; ii < abs(num1); ii++)
//		{
//			specialNum1 = 0, specialNum2 = 0;
//			for (int jj = 1; jj < abs(ii); jj++)
//			{
//				if ((ii % jj) == 0)
//				{
//					specialNum1 += jj;
//					specialNum2 += jj;
//				}
//			}
//
//			if (ii == specialNum2)
//			{
//				if (specialNum2 != 0)
//					cout << "Число - " << specialNum2 << " является совершенным"
//					<< endl;
//			}
//
//			if (ii == specialNum1)
//			{
//				if (specialNum1 != 0)
//					cout << "Число - " << specialNum1 << " является совершенным"
//						<< endl;
//			}
//		}
//	}
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 3. 
//	/*Число называется совершенным, если сумма
//	всех его делителей равна ему самому. Напишите функцию
//	поиска таких чисел во введенном интервале.*/
//	// Так же не нужно выводить 0, потому что у нуля все числа являются делителями
//	// поэтому не будем брать ноль а будем брать 1.
//	int num1, num2;
//	cout << "Bведите через пробел два целых числа(границы интервала): " << endl;
//	cin >> num1 >> num2;
//	
//	sumOfNumbers(num1, num2);
//
//	return 0;
//}