//#include <iostream>
//using namespace std;
//
//double exponentiation(double basis, int degree)
//{
//	double tmp;
//	if (degree >= 0)
//	{
//		tmp = basis;
//		for (int ii = 0; ii < degree - 1; ii++)
//			basis *= tmp;
//	}
//	else if (degree < 0)
//	{
//		tmp = 1. / basis;
//		basis = tmp;
//		for (int ii = 0; ii < abs(degree) - 1; ii++)
//			basis *= tmp;
//	}
//	return basis;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 1. �������� �������, ������� ��������� ���
//	/*���������: ��������� ������� � ���������� �������, �
//	��������� ������� ����� �� ������ ���������� ������.*/
//	int basis, degree;
//	cout << "������� ����� ������ ��������� ������� � ���� �������: " << endl;
//	cin >> basis >> degree;
//
//	cout << exponentiation(basis, degree);
//
//	return 0;
//}