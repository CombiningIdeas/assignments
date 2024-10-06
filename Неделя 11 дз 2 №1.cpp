//#include <iostream>
//using namespace std;
//
////это функция которая ищет заданный ключ в заданом массиве через линейный поиск
//bool linearSearch(int &keyNumber, const int &LENGTH, int findKeyArray[])
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (findKeyArray[ii] == keyNumber)
//			return true;
//	}
//
//
//	return false;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 1. 
//	/*Написать функцию, реализующую алгоритм
//	линейного поиска заданного ключа в одномерном массиве.*/
//	int keyNumber, leftBorder, rightBorder;
//	const int LENGTH = 10;
//	int findKeyArray[LENGTH];
//	cout << "Bведите ключ для линейного cписка: ";
//	cin >> keyNumber;
//	cout << "Введите левую и правую границу диапазона(разница границ должна ровняться 10): ";
//	cin >> leftBorder >> rightBorder;
//
//	if (abs(abs(rightBorder) - abs(leftBorder)) >= 10)
//	{
//		cerr << "Выход за переделы массива, неверно заданы границы массива!";
//		return 1;
//	}
//
//	int Countdown; // находим меньшую границу а потом в цикле через счетчик идем к большой границе
//	if (rightBorder >= leftBorder)
//		Countdown = leftBorder;
//	else
//		Countdown = rightBorder;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (Countdown > leftBorder && Countdown > rightBorder)
//		{
//			cerr << "Не достаточно перменных для инициализации!(меньше 10)";
//			return 1;
//		}
//		findKeyArray[ii] = Countdown++;
//		
//	}
//	
//	if (linearSearch(keyNumber, LENGTH, findKeyArray) == true)
//		cout << "Ключ - " << keyNumber << " найден";
//	else
//		cout << "Ключ - " << keyNumber << " не найден";
//
//	return 0;
//}