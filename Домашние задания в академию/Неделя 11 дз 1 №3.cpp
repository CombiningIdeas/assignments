//#include <iostream>
//using namespace std;
//
//void sumOfNumbers(int &num1, int &num2)
//{
//	int specialNum1, specialNum2, counter = 0;
//	if ((num2 >= 1 && 1 >= num1) || (num2 <= 1 && 1 <= num1))
//		cout << "����� - -1 �������� �����������" << endl;
//	if ((num2 >= 1 && 1 >= num1) || (num2 <= 1 && 1 <= num1))
//		cout << "����� - 1 �������� �����������" << endl;
//	if (num2 >= num1)
//	{
//		for (int ii = num1; ii <= abs(num2); ii++)
//		{
//			specialNum1 = 0, specialNum2 = 0;
//			for (int jj = 1; jj < abs(ii); jj++)
//			{
//				if ((ii % jj) == 0)
//				{
//					specialNum1 += jj;
//					specialNum2 -= jj;
//				}
//			}
//
//			if (ii == specialNum2)
//			{
//				if (specialNum2 != 0)
//					cout << "����� - " << specialNum2 << " �������� �����������"
//					<< endl;
//			}
//
//			if (ii == specialNum1)
//			{
//				if (specialNum1 != 0)
//					cout << "����� - " << specialNum1 << " �������� �����������"
//					<< endl;
//			}
//		}
//	}
//	else
//	{
//		for (int ii = num2; ii < abs(num1); ii++)
//		{
//			specialNum1 = 0, specialNum2 = 0;
//			for (int jj = 1; jj < abs(ii); jj++)
//			{
//				if ((ii % jj) == 0)
//				{
//					specialNum1 += jj;
//					specialNum2 += jj;
//				}
//			}
//
//			if (ii == specialNum2)
//			{
//				if (specialNum2 != 0)
//					cout << "����� - " << specialNum2 << " �������� �����������"
//					<< endl;
//			}
//
//			if (ii == specialNum1)
//			{
//				if (specialNum1 != 0)
//					cout << "����� - " << specialNum1 << " �������� �����������"
//						<< endl;
//			}
//		}
//	}
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 3. 
//	/*����� ���������� �����������, ���� �����
//	���� ��� ��������� ����� ��� ������. �������� �������
//	������ ����� ����� �� ��������� ���������.*/
//	// ��� �� �� ����� �������� 0, ������ ��� � ���� ��� ����� �������� ����������
//	// ������� �� ����� ����� ���� � ����� ����� 1.
//	int num1, num2;
//	cout << "B������ ����� ������ ��� ����� �����(������� ���������): " << endl;
//	cin >> num1 >> num2;
//	
//	sumOfNumbers(num1, num2);
//
//	return 0;
//}