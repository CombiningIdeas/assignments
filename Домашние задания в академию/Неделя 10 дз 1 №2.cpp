//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 2. 
//	/*�������� ���������, ������� ������� ���������� ������ � 
//	��������� ��� �� ���������� ��������:
//	������������ ������ ����� (��������, 3) ������ �������
//	������� ��������� �������� ����� �����, �����������
//	������� ������� ��������� �������� ����� ����� + 1 (�.�.
//	4 ��� ������ �������), ������ ������� ������� ���������� ������� + 1 
//	(�.�. 5 ��� ������ �������). ���������
//	������ ������� �� �����.*/
//	cout << "����� ������� 3 �� 3:" << endl;
//	const int N_ROWS = 3, N_COLUMNS = 3;
//	int inputValue;
//	int matrix[N_ROWS][N_COLUMNS];
//
//	cout << "������� ������ ����� �������: ";
//	cin >> inputValue;
//
//	for (int ii = 0; ii < N_ROWS; ii++)
//	{
//		for (int jj = 0; jj < N_COLUMNS; jj++)
//		{
//			matrix[ii][jj] = inputValue;
//			inputValue += 1;
//			cout << setw(6) << matrix[ii][jj];
//		}
//		
//		cout << endl;
//	}
//
//	return 0;
//}