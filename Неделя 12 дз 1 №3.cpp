//#include <iostream>
//using namespace std;
//
//void ArithmeticMean(int createdArray[], const int LENGTH)
//{
//	int negativeNumbers = 0, positiveNumbers = 0, zeroNumbers = 0;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		if (createdArray[ii] < 0)
//			negativeNumbers += 1;
//
//		if (createdArray[ii] > 0)
//			positiveNumbers += 1;
//
//		if (createdArray[ii] == 0)
//			zeroNumbers += 1;
//	}
//	cout << "Количество отрицательных чисел: " << negativeNumbers << endl;
//	cout << "Количество положительных чисел: " << positiveNumbers << endl;
//	cout << "Количество нулевых чисел: " << zeroNumbers;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 3. 
//	/* Написать функцию, определяющую количество
//	положительных, отрицательных и нулевых элементов
//	передаваемого ей массива. */
//	srand(static_cast<unsigned int>(time(nullptr)));
//	const int LENGTH = 10;
//	int createdArray[LENGTH];
//	
//	cout << "Дан массив:" << endl;
//	for (int& ii : createdArray)// & - позволяет изменять массив, без & в массив не будут записываться числа
//	{
//		ii = rand() % 101 - 50;
//		cout << ii << ' ';
//	}
//	cout << endl;
//	
//	ArithmeticMean(createdArray, LENGTH);
//
//	return 0;
//}