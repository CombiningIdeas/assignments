//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 1
//	/*�������� ���������, ���������� ��������������� ��������
//	������ ������� �������� 10 ��������� � 2 ������� ��������
//	5 ��������� ������.�������� ��������������� ������� �����
//	������������� � ������������ ���������.*/
//	srand(static_cast<unsigned>(time(nullptr)));
//	const int LENGTH = 10;
//	int initialArray[LENGTH];
//	cout << "�������������� ������: ";
//	cout << endl;
//
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		initialArray[ii] = rand() % 21 - 10;
//		cout << initialArray[ii] << ' ';
//	}
//	cout << endl;
//
//	cout << "������ ������(�� ����): ";
//	cout << endl;
//	for(int jj = 0; jj < LENGTH / 2; jj++)
//		cout << initialArray[jj] << ' ';
//	cout << endl;
//
//	cout << "������ ������(�� ����) : ";
//	cout << endl;
//	for (int gg = LENGTH / 2; gg < LENGTH; gg++)
//		cout << initialArray[gg] << ' ';
//
//	return 0;
//
//}