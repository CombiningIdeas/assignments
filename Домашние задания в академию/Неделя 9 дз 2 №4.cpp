//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 4
//	/*�������� ���������, ������� ���������� ����� ������������ 
//	��������� ��� ������������� ���������� ����������
//	(������������������� ������ ������ � 2) � �������
//	������.��������� �� ������������ �� ������ 10 ��������,
//	���������� 1000 ��������� ���������, ��������� �������
//	����� ������������ ��� ������� ������ ����� ������������.*/
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
//		// ���������� ���������(����������)
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
//		cout << "���������� ������������ � ����������� ����������: " << counter2 << endl;
//
//		// ���������� �������
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
//		cout << "���������� ������������ � ���������� �������: " << counter3 << endl;
//
//		counter4 += counter2;
//		counter5 += counter3;
//	}
//	cout << endl;
//	cout << "������� ���������� ������������ ����������� ����������� ����� ������������ 10"
//		<< " �������� �������� 1000 ��������� - " << counter4 / 10 << endl << endl;
//
//	cout << "������� ���������� ������������ ����������� ������� ����� ������������ 10"
//		<< " �������� �������� 1000 ��������� - " << counter5 / 10 << endl << endl;
//
//	return 0;
//}