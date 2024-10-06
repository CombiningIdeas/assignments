//#include <iostream>
//#include <cmath>
//using namespace std;
//
//void numberTranslation(long long& binary, long long& decimal)
//{
//	int counter = 0;
//	for (long long ii = binary; ii > 0; ii = ii / 10)
//		decimal += (ii % 10) * (pow(2, counter++));
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 3. 
//	/*Написать функцию для перевода числа, записанного в двоичном виде, 
//	в десятичное представление.*/
//	long long binaryNum, decimalNum = 0;
//	cout << "Введите число в двоичном виде: ";
//	cin >> binaryNum;
//
//	numberTranslation(binaryNum, decimalNum);
//	
//	cout << "Число - " << binaryNum << ". В десятичном виде будет выглядеть так - "
//		<< decimalNum << '.';
//
//	return 0;
//}