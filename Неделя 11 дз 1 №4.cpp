//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//void cardOutput(int &suit, int &card)
//{
//	int balance = 14; // нужен чтобы когда выводится масть и значение 
//	// выравнивало правуючасть
//
//	char topLeftCorner = 218, topRightCorner = 191,
//		horizontalLine = 196, vertivalLine = 179, 
//		downLeftCorner = 192, downRightCorner = 217;
//	char  charCard[13] = { '2','3','4','5','6','7','8','9','0','J','Q','K','A' };
//	suit += 2; // чтобы в кодировке попасть на масти нужно прибавить к каждой по 2
//
//	cout << topLeftCorner << setfill(horizontalLine) << setw(16)
//		<< topRightCorner << endl;
//
//
//	// нужно для десятки чтобы выводило два числа в остальный случаях или символ 
//	// или одно число
//	if (card == 9)
//	{
//		balance--;
//		cout << vertivalLine << "1" << charCard[card - 1] << (char)suit 
//			<< setfill(' ') << setw(balance) << vertivalLine << endl;
//	} // setfill(' ') - нужно чтобы выравнивание с пустыми символами было а не выводило везде 
//	else
//		cout << vertivalLine << charCard[card - 1] << (char)suit 
//		<< setfill(' ') << setw(balance) << vertivalLine << endl;
//
//
//
//	cout << vertivalLine << setw(16) << vertivalLine << endl;
//	cout << vertivalLine << setw(16) << vertivalLine << endl;
//	cout << vertivalLine << setw(16) << vertivalLine << endl;
//	cout << vertivalLine << setw(16) << vertivalLine << endl;
//	cout << vertivalLine << setw(16) << vertivalLine << endl;
//	cout << vertivalLine << setw(16) << vertivalLine << endl;
//	cout << vertivalLine << setw(16) << vertivalLine << endl;
//	cout << vertivalLine << setw(16) << vertivalLine << endl;
//	cout << vertivalLine << setw(16) << vertivalLine << endl;
//	cout << vertivalLine << setw(16) << vertivalLine << endl;
//
//
//
//	if (card == 9)
//		cout << vertivalLine << setfill(' ') << setw(balance) << "1"
//		<< charCard[card - 1] << (char)suit << vertivalLine << endl;
//	else
//		cout << vertivalLine << setfill(' ') << setw(balance) << charCard[card - 1]
//		<< (char)suit << vertivalLine << endl;
//	cout << downLeftCorner << setfill(horizontalLine) << setw(16) 
//		<< downRightCorner << endl;
//
//}
//
//int main()
//{
//	// Задание 4. 
//	/*Написать функцию, выводящую на экран
//	переданную ей игральную карту.*/
//	// так как нудно работать с символами то русский язык нельзя использовать 
//	// иначе слетит кодировка.
//	int suit, card;                               
//	cout << "Enter suit\n1 - Hearts\n2 - Diamonds\n"
//		<< "3 - Clubs\n4 - Spades" << endl;
//	cin >> suit;
//	if (suit < 1 || suit > 4)
//	{
//		cout << "Error! Incorrect suit\n";
//		return 1;
//	}
//	cout << "Enter card\n1 - Two\n2 - Three\n3 - Four\n4 - Five\n"
//		<< "5 - Six\n6 - Seven\n7 - Eight\n8 - Nine\n"
//		<< "9 - Ten\n10 - Jacket\n11 - Quin\n12 - King\n13 - Ace " << endl;
//	cin >> card;
//	if (card < 1 || card > 13)
//	{
//		cout << "Error! Incorrect card\n";
//		return 1;
//	}
//	cout << endl;
//	cardOutput(suit, card);
//
//	return 0;
//}