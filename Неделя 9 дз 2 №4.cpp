//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ЗАДАНИЕ 4
//	/*Написать программу, которая сравнивает число перестановок 
//	элементов при использовании сортировки «пузырьком»
//	(усовершенствованная версия задани я 2) и методом
//	выбора.Выполнить ее тестирование на разных 10 массивах,
//	содержащих 1000 случайных элементов, вычислить среднее
//	число перестановок для каждого метода после тестирования.*/
//	srand(static_cast<unsigned int>(time(nullptr)));
//	const int LENGTH = 1000;
//	int improvedBubbleSorting[LENGTH], sortingByChoice[LENGTH], counter1 = 0,
//		counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0, tmp;
//
//	for (int nn = 0; nn < 10; nn++)
//	{
//		for (int ii = 0; ii < LENGTH; ii++)
//		{
//			improvedBubbleSorting[ii] = rand() % 10;
//			sortingByChoice[ii] = improvedBubbleSorting[ii];
//		}
//
//		// сортировка пузырьком(улучшенная)
//		for (int jj = 0; jj < LENGTH - 1; jj++)
//		{
//			for (int gg = 0; gg < LENGTH - 1; gg++)
//			{
//				if (improvedBubbleSorting[gg] > improvedBubbleSorting[gg + 1])
//				{
//					tmp = improvedBubbleSorting[gg];
//					improvedBubbleSorting[gg] = improvedBubbleSorting[gg + 1];
//					improvedBubbleSorting[gg + 1] = tmp;
//					counter1 += 1;
//					counter2 += 1;
//				}
//			}
//
//			if (counter1 == 0)
//				break;
//
//			counter1 = 0;
//		}
//
//		cout << "Количество перестановок в пузырьковой сортировке: " << counter2 << endl;
//
//		// Сортировка выбором
//		for (int ii = 0; ii < LENGTH - 1; ii++)
//		{
//			int minIndex = ii;
//			for (int jj = ii + 1; jj < LENGTH; jj++)
//				if (sortingByChoice[jj] < sortingByChoice[minIndex])
//					minIndex = jj;
//
//			if (minIndex != ii)
//			{
//				int tmp = sortingByChoice[minIndex];
//				sortingByChoice[minIndex] = sortingByChoice[ii];
//				sortingByChoice[ii] = tmp;
//				counter3 += 1;
//			}
//		}
//
//		cout << "Количество перестановок в сортировке выбором: " << counter3 << endl;
//
//		counter4 += counter2;
//		counter5 += counter3;
//	}
//	cout << endl;
//	cout << "Среднее количество перестановок пузырьковой сортировкой после тестирования 10"
//		<< " массивов размером 1000 элементов - " << counter4 / 10 << endl << endl;
//
//	cout << "Среднее количество перестановок сортировкой выбором после тестирования 10"
//		<< " массивов размером 1000 элементов - " << counter5 / 10 << endl << endl;
//
//	return 0;
//}