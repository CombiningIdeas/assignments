//// ������� ��� ��������
//
////#include <iostream>
////using namespace std;
////
////int findingCommonDivisor(int num1, int num2)
////{
////	int maxCommonDivisor = 1;
////	int commonDivisor1 = 0;
////	for (int ii = 1; ii <= abs(num1) && ii <= abs(num2); ii++)
////		if (num1 % ii == 0 && num2 % ii == 0)
////			if (ii > maxCommonDivisor)
////				maxCommonDivisor = ii;
////
////	return maxCommonDivisor;
////}
////
////int main()
////{
////	setlocale(LC_ALL, "Russian");
////	// ������� 2. 
////	/* �������� ����������� ������� ����������
////	����������� ������ �������� ���� ����� �����. */
////
////	int number1, number2;
////
////	cout << "������� ��� ����� ����� ����� ������: ";
////	cin >> number1 >> number2;
////
////	// �� ����� ����� ����� ����� �������� � ������ ��� ��. ��� �����.
////	cout << "���������� ����� ��������: " << findingCommonDivisor(number1, number2);
////
////	return 0;
////}
//
//
//
//
//
//// ������� � ��������� ����� �������� �������
//
//#include <iostream>
//using namespace std;
//
//inline int findingCommonDivisor(int num1, int num2)
//{
//	if (num2 == 0)
//		return num1;
//	if (num1 > num2)
//		return findingCommonDivisor(num2, num1 % num2);
//	else
//		return findingCommonDivisor(num1, num2 % num1);
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 2. 
//	/* �������� ����������� ������� ����������
//	����������� ������ �������� ���� ����� �����. */
//
//	int number1, number2;
//
//	cout << "������� ��� ����� ����� ����� ������: ";
//	cin >> number1 >> number2;
//
//	cout << "���������� ����� ��������: " << findingCommonDivisor(number1, number2);
//
//	return 0;
//}