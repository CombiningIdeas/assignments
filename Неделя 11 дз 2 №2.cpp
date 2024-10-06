//#include <iostream>
//using namespace std;
//
//void swap(int& a, int& b)
//{
//	a = a + b;
//	b = a - b;
//	a = a - b;
//}
//
////это функция которая ищет заданный ключ в заданом массиве через бинарный поиск поиск
//bool linearSearch(int &keyNumber, const int &LENGTH, int findKeyArray[])
//{
//	int left = 0;
//	int right = LENGTH;
//	int midd = 0;
//
//	while (true)
//	{
//		midd = (left + right) / 2;
//
//		if (keyNumber < findKeyArray[midd])// если искомое меньше значения в ячейке
//			right = midd - 1;// смещаем правую границу поиска
//		else if (keyNumber > findKeyArray[midd])// если искомое больше значения в ячейке
//			left = midd + 1;// смещаем левую границу поиска
//		else                // если значения равны, тоесть ключ есть в массиве:
//			return true;    // функция возвращает правду
//
//		if (left > right)   // если левая граница стала больше правой границы 
//			return false;
//	}
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 2. 
//	/*Написать функцию, реализующую алгоритм
//	бинарного поиска заданного ключа в одномерном массиве.*/
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
//	// для бинарного поиска нужен отсортированный массив:
//	for (int ii = 1; ii < LENGTH; ii++)
//	{
//		int jj = ii - 1;
//		while (jj >= 0 && findKeyArray[jj] > findKeyArray[jj + 1])
//		{
//			swap(findKeyArray[jj], findKeyArray[jj + 1]);
//			jj--;
//		}
//	}
//	
//	if (linearSearch(keyNumber, LENGTH, findKeyArray) == true)
//		cout << "Ключ - " << keyNumber << " найден";
//	else
//		cout << "Ключ - " << keyNumber << " не найден";
//
//	return 0;
//}