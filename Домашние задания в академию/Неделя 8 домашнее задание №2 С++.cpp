//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 1
//	/*� ���������� �������, ����������� ���������� �������,
//	���������� ����������� � ������������ ��������.*/
//	/*srand(static_cast<unsigned int>(time(nullptr)));cout << "������: " << endl;
//	int array[10], minNumber, maxNumber;
//	for (int ii = 0; ii < 9; ii++)
//	{
//		array[ii] = rand() % 100;
//		cout << array[ii] << " ";
//	}
//	cout << endl;
//
//	minNumber = array[0];
//	maxNumber = array[0];
//
//	for (int jj = 1; jj < 9; jj++)
//	{
//		if (minNumber > array[jj])
//			minNumber = array[jj];
//
//		if (maxNumber < array[jj])
//			maxNumber = array[jj];
//	}
//
//	cout << "����������� ������� - " << minNumber << "; ������������ ������� - " << maxNumber;
//
//	return 0;*/
//
//	// ������� 2
//	/*� ���������� �������, ����������� ���������� �������
//	� �������� ������������� ���������, ����� ����� ���������,
//	�������� ������� ������ ���������� �������������.*/
//	/*srand(static_cast<unsigned int>(time(nullptr)));
//	int array[10], leftBorder, rightBorder, specialNumber, sumSpecialNumber = 0;
//
//	cout << "������� ������� �������: ";
//	cin >> leftBorder >> rightBorder;
//	cout << "������� �����, ����� �������� ����� ���� ������� ����� �����: ";
//	cin >> specialNumber;
//
//	if (leftBorder <= rightBorder)
//	{
//		for (int ii = leftBorder; ii < rightBorder; ii++)
//		{
//			array[ii] = rand() % (rightBorder - leftBorder + 1) + leftBorder;
//			cout << array[ii] << " ";
//			if (specialNumber > array[ii])
//				sumSpecialNumber += array[ii];
//		}
//		cout << endl;
//	}
//	else if (leftBorder > rightBorder)
//	{
//		for (int ii = rightBorder; ii < leftBorder; ii++)
//		{
//			array[ii] = rand() % (leftBorder - rightBorder + 1) + rightBorder;
//			cout << array[ii] << " ";
//			if (specialNumber > array[ii])
//				sumSpecialNumber += array[ii];
//		}
//		cout << endl;
//	}
//
//	cout << "���� ��������� ������� - " << specialNumber << " ����� - " << sumSpecialNumber;
//
//	return 0;*/
//
//	// ������� 3
//	/*������������ ������ ������� ����� �� ���(12 �������).
//	����� ������������ ������ ��������(��������, 3 � 6 � �����
//	����� 3 - � � 6 - � �������).���������� ���������� �����,
//	� ������� ������� ���� ����������� � �����, � �������
//	������� ���� ���������� � ������ ���������� ���������.*/
//	/*int january, february, march, april, may, june, july,
//		august, september, october, november, december;
//	int leftBorder, rightBorder, minNumber, maxNumber;
//	cout << "������� ������� ������ �� ���(12 ������� - 12 ���) � ������: ";
//	cin >> january >> february >> march >> april >> may >> june >> july >> august >> september
//		>> october >> november >> december;
//	cout << "������� ������� ���������(����� ����� ��������� ����������): ";
//	cin >> leftBorder >> rightBorder;
//
//	int arrayMonth[12] = {january, february, march, april, may, june, july, august, september,
//		october, november, december};
//
//	if (leftBorder < 1 || rightBorder > 12)
//	{
//		cerr << "����������� ������ ���� �� �������!";
//		return 1;
//	}
//
//	minNumber = arrayMonth[leftBorder - 1];
//	maxNumber = arrayMonth[leftBorder - 1];
//	// ��� ��� ��������� ������� ���� � 1, � ������� � ������� � 0, �� ��� ����� ���������.
//	for (int ii = leftBorder - 1; ii < rightBorder; ii++)
//	{
//		if (minNumber > arrayMonth[ii])
//			minNumber = arrayMonth[ii];
//
//		if (maxNumber < arrayMonth[ii])
//			maxNumber = arrayMonth[ii];
//	}
//
//	cout << "����������� ����� � ��������� ���������[" << leftBorder << ", " << rightBorder
//		<< "] ����� - " << minNumber << ", � ������������ ����� - " << maxNumber << ".";
//
//	return 0;*/
//
//	// ������� 4
//	/*� ���������� �������, ��������� �� N ������������
//	����� ���������:
//	����� ������������� ���������.
//	������������ ���������, ����������� ����� min � max
//	����������.
//	������������ ��������� � ������� ��������.
//	����� ���������, ����������� ����*/
//	// ������������ ����� - ��� ����� � ������� ������.
//	// ��� ��� ���� ������������� ����� �� ������ ����� �������� �� -20 �� 20.
//	/*srand(static_cast<unsigned int>(time(nullptr)));
//	long double num1, num2, num3, num4, num5, num6, lessZero = 0, minNumber, maxNumber, 
//		productElements = 1, evenElements = 1, firstNegative, lastNegative, sumNumbers = 0;
//
//	cout << "������� 6 ������������ ��������� ��� �������: ";
//	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
//
//	double array[6] = {num1, num2, num3, num4, num5, num6};
//	minNumber = array[0];
//	maxNumber = array[0];
//	int counter = 0, minNumberElement, maxNumberElement;
//
//	for (int ii = 0; ii < 6; ii++)
//	{
//		if (array[ii] < 0)
//		{
//			lessZero += array[ii];
//			if (counter == 0)// ������ ������������� ����� ������ ���� ��� ����� �������.
//			{
//				firstNegative = ii;
//				counter = 1;
//			}
//			lastNegative = ii;
//			// � ������ ������������ ����� ����� ������ ��� ��������������
//			// � ��� ���������� � ��������� ��� � ����� ��������� ������������� ������
//		}
//
//		if (minNumber > array[ii])
//		{
//			minNumber = array[ii];
//			minNumberElement = ii;
//		}
//
//		if (maxNumber < array[ii])
//		{
//			maxNumber = array[ii];
//			maxNumberElement = ii;
//		}
//
//		if (ii % 2 == 0)
//			evenElements *= array[ii];
//	}
//	if (minNumberElement <= maxNumberElement)
//	{
//		for (int jj = minNumberElement; jj <= maxNumberElement; jj++)
//			productElements *= array[jj];
//	}
//	else if (minNumberElement > maxNumberElement)
//	{
//		for (int jj = maxNumberElement; jj <= minNumberElement; jj++)
//			productElements *= array[jj];
//	}
//
//
//	for (int gg = firstNegative; gg <= lastNegative; gg++)
//		sumNumbers += array[gg];
//
//	cout << "������: ";
//	for (int ing = 0; ing < 6; ing++)
//		cout << array[ing] << " ";
//	cout << endl;
//
//	cout << "����� ������������� ���������: " << lessZero << endl;
//	cout << "������������ ���������, ����������� ����� min � max ����������: "
//		<< productElements << endl;
//	cout << "������������ ����� � ������� ��������: " << evenElements << endl;
//	cout << "����� ���������, ����������� ����� ������ � ��������� �������������� ����������: "
//		<< sumNumbers;
//
//	return 0;*/
//
//}