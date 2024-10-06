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
//	// задание 1. написать функцию, которая принимает два
//	/*параметра: основание степени и показатель степени, и
//	вычисляет степень числа на основе полученных данных.*/
//	int basis, degree;
//	cout << "введите через пробел основание степени и саму степень: " << endl;
//	cin >> basis >> degree;
//
//	cout << exponentiation(basis, degree);
//
//	return 0;
//}