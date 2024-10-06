//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	//ЗАДАНИЕ 1
//	/*Написать программу «справочник».Создать два одномерных
//	массива. Один массив хранит номера мобильных телефонов,
//	второй — домашние телефонные номера.
//	Реализовать меню для пользователя :
//	Отсортировать по номерам мобильных
//	Отсортировать по домашним номерам телефонов;
//	Вывести пользовательский данные;
//	Выход.*/
//	cout << "Программа <справочник>";
//	cout << "Введите количество людей в справочнике(для быстрого теста) будет 3 человека: " << endl;
//	const int quantityPeople = 3;
//	int choiceUser;
//	long long mobileNumberArray[quantityPeople], homeNumber[quantityPeople],
//		startMobileNumberArray[quantityPeople], startHomeNumber[quantityPeople];
//	for (int ii = 0; ii < quantityPeople; ii++)
//	{
//		cout << "Введите, поочередно через пробел, домашний номер(6 цифр), "
//			<< "мобильный номер(11 цифр): \n";
//		cin >> homeNumber[ii] >> mobileNumberArray[ii];
//		startHomeNumber[ii] = homeNumber[ii];
//		startMobileNumberArray[ii] = mobileNumberArray[ii];
//	}
//
//	do
//	{
//		cout << "Выберети действия(цифру): " << endl << "1 - Отсортировать по номерам мобильных телефонов"
//			<< endl << "2 - Отсортировать по номерам домашних телефонов" << endl
//			<< "3 - Вывести пользовательские данные(все номера, всех телефонов)"
//			<< endl << "4 - Выход из программы." << endl;
//		cin >> choiceUser;
//		long long tmp;
//
//		switch (choiceUser)
//		{
//		case 1:
//			for (int jj = 0; jj < quantityPeople - 1; jj++)
//				if (mobileNumberArray[jj] > mobileNumberArray[jj + 1])
//				{
//					tmp = mobileNumberArray[jj];
//					mobileNumberArray[jj] = mobileNumberArray[jj + 1];
//					mobileNumberArray[jj + 1] = tmp;
//				}
//
//			for (int jj = 0; jj < quantityPeople; jj++)
//				cout << mobileNumberArray[jj] << endl;
//			break;
//
//		case 2:
//			for (int jj = 0; jj < quantityPeople - 1; jj++)
//				if (homeNumber[jj] > homeNumber[jj + 1])
//				{
//					tmp = homeNumber[jj];
//					homeNumber[jj] = homeNumber[jj + 1];
//					homeNumber[jj + 1] = tmp;
//				}
//
//			for (int jj = 0; jj < quantityPeople; jj++)
//				cout << homeNumber[jj] << endl;
//			break;
//
//		case 3:
//			for (int ii = 0; ii < quantityPeople; ii++)
//				cout << startHomeNumber[ii] << " "
//				<< startMobileNumberArray[ii] << endl;
//
//		case 4:
//			break;
//
//		default:
//			cerr << "Введена неверная операция!";
//			break;
//		}
//	} while (choiceUser != 4);
//
//	return 0;
//}