//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	//������� 1
//	/*
//	���������� ���������� ����� ����� � ��������� �� 100
//	�� 999, � ������� ���� ��� ���������� �����.
//	*/
//	/*int counter1, counter2;
//	int count1, count10, count100, summ = 0;
//	for (int ii = 100; ii <= 999; ii++)
//	{
//		counter1 = ii;
//		count1 = counter1 % 10;
//		count10 = counter1 / 10 % 10;
//		count100 = counter1 / 100;
//
//		if (count1 == count10 || count1 == count100 || count10 == count100)
//			summ += 1;
//	}
//
//	std::cout << "���������� ����� ����� � ��������� �� 100 �� 999,"
//		<< " � ������� ���� ��� ���������� �����: " << summ;
//
//	return 0;*/
//
//	// ������� 2
//	/*
//	���������� ���������� ����� ����� � ��������� �� 100 ��
//	999, � ������� ��� ����� ������.
//	*/
//	/*int counter1, counter2;
//	int count1, count10, count100, summ = 0;
//	for (int ii = 100; ii <= 999; ii++)
//	{
//		counter1 = ii;
//		count1 = counter1 % 10;
//		count10 = counter1 / 10 % 10;
//		count100 = counter1 / 100;
//
//		if (count1 != count10 && count1 != count100 && count10 != count100)
//			summ += 1;
//	}
//
//	std::cout << "���������� ����� ����� � ��������� �� 100 �� 999,"
//		<< " � ������� ���� ��� ����� ������: " << summ;
//
//	return 0;*/
//
//	// ������� 3
//	/*
//	������������ ������ ����� ����� �����.���������� ��
//	����� ������ ����� ������� ��� ����� 3 � 6 � ������� �������
//	�� �����.
//	*/
//	/*long long digit, finalNumber = 0;
//	std::cout << "������� ����� ����� �����(�� 19 ���� ������): ";
//	std::cin >> digit;
//
//	long long jj = digit, count = 1;
//	for (long long ii = digit; ii > 0; ii = ii / 10)
//	{
//		jj = ii % 10;
//		if (jj == 3 || jj == 6)
//			jj = 0;
//		else
//		{
//			jj = jj * count;
//			count *= 10;
//		}
//		finalNumber += jj;
//	}
//	std::cout << finalNumber << std::endl;
//	return 0;*/
//
//	//������� 4
//	/*������������ ������ ����� ����� ����� �. ����������
//	������� ��� ����� ����� �, ��� ������� � �������� ��� �������
//	�� �* � � �� �������� ��� ������� �� �* �* �.*/
//	/*int digitA;
//	std::cout << "������� ����� ����� �����: ";
//	std::cin >> digitA;
//	for (int digitB = 1; digitB < digitA; digitB++)
//		if (digitA % (digitB * digitB) == 0 && digitA % (digitB * digitB * digitB) != 0)
//			std::cout << digitB << " ";
//	return 0;*/
//
//	//������� 5
//	/*
//	������������ ������ ����� ����� �. ��������� ������
//	����������, ��� ��� ����� ���� ����� ����� ����� �*�.
//	*/
//	/*int digit, number = 0;
//	std::cout << "������� ����� �����: ";
//	std::cin >> digit;
//	for (int ii = digit; ii > 0; ii = ii / 10)
//	{
//		number += ii % 10;
//	}
//	// ����� ����� ��� � ������� 1 ��� 27, ������� �������� ��� �������.
//	if (number * number * number == digit * digit)
//		std::cout << "��� ����� ���� ����� ����� ����� " << digit << "*" << digit;
//	else
//		std::cout << "��� ����� ���� ����� ����� �� ����� " << digit << "*" << digit;
//	return 0;*/
//	//������� 6
//	/*������������ ������ ����� �����.���������� ������� ���
//	����� �����, �� ������� �������� ����� �������� ��� �������.*/
//	/*int intNumber;
//	std::cout << "������� ����� �����: ";
//	std::cin >> intNumber;
//
//	for (int ii = 1; ii <= intNumber; ii++)
//		if (intNumber % ii == 0)
//			std::cout << ii << " ";
//
//	return 0;*/
//	
//	// ������� 7
//	/*������������ ������ ��� ����� �����.���������� ������� ��� ����� �����,
//	�� ������� ��� ��������� ����� �������
//	��� �������.*/
//	/*int num1, num2;
//	std::cout << "������� ��� ����� ����� (����� ������): ";
//	std::cin >> num1 >> num2;
//
//	int minNum = std::min(num1, num2);
//
//	for (int ii = 1; ii <= minNum; ii++)
//		if ((num1 % ii == 0) && (num2 % ii == 0))
//			std::cout << ii << " ";
//
//	return 0;*/
//	
//}