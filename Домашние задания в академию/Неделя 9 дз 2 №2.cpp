//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 2
//	/*�������� ���������, ����������� ���������� ������� �
//	������� ������������������� ���������� ����������� �������.
//	������������������ ������� � ���, ����� �������������
//	���������� ������������ �� ������ ����, ���� ��� ����������
//	����� ����, �� ���������� ���������� ��� ������ � ������
//	������������.*/
//	srand(static_cast<unsigned int>(time(nullptr)));
//	const int LENGTH = 10;
//	int improvedBubbleSorting[LENGTH];
//
//	cout << "����������������� ������:" << endl;
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		improvedBubbleSorting[ii] = rand() % 10;
//		cout << improvedBubbleSorting[ii] << " ";
//	}
//	cout << endl;
//
//	
//	int tmp, counter = 0;
//	for (int jj = 0; jj < LENGTH - 1; jj++)
//	{
//		for (int gg = 0; gg < LENGTH - 1; gg++)
//		{
//			if (improvedBubbleSorting[gg] > improvedBubbleSorting[gg + 1])
//			{
//				tmp = improvedBubbleSorting[gg];
//				improvedBubbleSorting[gg] = improvedBubbleSorting[gg + 1];
//				improvedBubbleSorting[gg + 1] = tmp;
//				counter += 1;
//			}
//		}
//
//		if (counter == 0)
//			break;
//
//		counter = 0;
//	}
// 
//  cout << "��������������� ������:" << endl;
//	for (int ii = 0; ii < LENGTH; ii++)
//		cout << improvedBubbleSorting[ii] << " ";
//
//	return 0;
//}