//#include <iostream>
//#include <string.h>
//
//int main()
//{
//	// ������� 1
//	/*
//	������������ ������ � ���������� ������.����������,
//	����� ��� ������ : �����, �����, ���� ���������� ��� ������.
//	*/
//	// �� ����������� ������� � ������� ����, ����� �� ��������� ������� ����.
//	/*int integer;
//	char symbol;
//	std::cout << "Enter a symbol: ";
//	std::cin >> symbol;
//
//	integer = static_cast<int>(symbol);
//
//	if (integer >= 48 && integer <= 57)
//		std::cout << "It is digit";
//	else if ((integer >= 65 && integer <= 90) || (integer >= 97 && integer <= 122))
//		std::cout << "It is letter";
//	else if (integer == 33 || integer == 34 || (integer >= 44 && integer <= 46) ||
//		integer == 61 || integer == 63)
//		std::cout << "It is a punctuation mark";
//	else
//		std::cout << "It is other";
//
//	return 0;
//	*/
//	//������� 2
//	/*
//	�������� ��������� �������� ��������� ��������� ���
//	������ ��������� ����������.������������ ������ ������������ ��������� 
//	� �������� � ������ �� ����� ��������
//	�� ������.������� ��������� �� �����.
//	*/
//	// ������ ������� �� ����� �� ���������� ����� ����������, 
//	// � �������� � ������� �����������(1 ������) � ���� ����� ������ 3 �����.
//	/*setlocale(LC_ALL, "Russian");
//
//	std::string mobileOperator1, mobileOperator2;
//	int time;
//
//	std::cout << "������� ����� ��������(� �������): ";
//	std::cin >> time;
//	std::cout << "���� ����� 4 ��������� \"MTS\", \"Beeline\", \"Tele2\", \"Megafon\"." 
//		<< std::endl;
//
//	std::cout << "������� � ������ ��������� �� ����� �������: ";
//	std::cin >> mobileOperator1 >> mobileOperator2;
//
//	if (!((mobileOperator1 == "MTS" || mobileOperator1 == "Beeline" ||
//		mobileOperator1 == "Tele2" || mobileOperator1 == "Megafon") &&
//		(mobileOperator2 == "MTS" || mobileOperator2 == "Beeline" ||
//			mobileOperator2 == "Tele2" || mobileOperator2 == "Megafon")))
//	{
//		std::cout << "������� ������ ���� �� ����������";
//		return 0;
//	}
//	
//	if (mobileOperator1 == mobileOperator2)
//		std::cout << "������ ����������";
//	else if (mobileOperator1 != mobileOperator2)
//		std::cout << "��������� ���������: " << time * 3 << "�";
//
//	return 0;
//	*/
//
//	//������� 3
//	/*���� �������� ������������� � �������� 50$ �� ������
//		100 ����� ����.�� ������ ������ ��������� �� ������ ����
//		�������� �� 20$.����������� ���� :
//	1)������������ ������ �������� ����� ���� � ����������
//		���������, ���������, ������� ����� ���� ��� ���� ��������;
//	2)������������ ������ ���������� ����� ����, ����������
//		����� � �������� ����� ��������.���������, �������
//		��� ���� ����� ��������;
//	3)������������ ������ ���������� ����� ���� � ����������
//		���������, ����������, ������� ����� �������� ���� �
//		�������� �� ������.
//	*/
//	/*setlocale(LC_ALL, "Russian");
//	int linesOfCode, salary, delays;
//	// ���������� �1
//	std::cout << "������� �������� ����� ����(� ��������): ";
//	std::cin >> salary;
//	std::cout << "������� ���������� ���������: ";
//	std::cin >> delays;
//
//	linesOfCode = salary * 2 + delays * 20;
//	std::cout << "����� �������� �������� ����� �ac� ����� �������� " << linesOfCode
//		<< " - ����� ����";
//	return 0;
//	*/
//	/*
//	setlocale(LC_ALL, "Russian");
//	int linesOfCode, salary, delays;
//	// ���������� �2
//	std::cout << "������� ���������� ����� ���� � �������� ����� ��������: ";
//	std::cin >> linesOfCode >> salary;
//
//	if ((linesOfCode / 2) < salary)
//	{
//		std::cout << "�������� �������� ���� ��� ������ �� ���������� ����� ����. "
//			<< "������� �������� �� ������� ��� ������ �� ������ ���� ��� ���.";
//		return 0;
//	}
//
//	delays = (linesOfCode / 2 - salary) / 20;
//
//	std::cout << "���� ����� �������� " << delays << " - ���";
//
//	return 0;
//
//	*/
//	/*
//	setlocale(LC_ALL, "Russian");
//	int linesOfCode, salary, delays;
//	// ���������� �3
//	std::cout << "������� ���������� ����� ���� � ���������� ���������: ";
//	std::cin >> linesOfCode >> delays;
//
//	salary = (linesOfCode / 2) - delays * 20;
//	if (salary == 0)
//		std::cout << "���� �� �������� �����";
//	else if (salary < 0)
//		std::cout << "���� �� �������� �����, �� ��� ��������� ������ ��������: "
//		<< -salary << "$";
//	else if (salary > 0)
//		std::cout << "���� ��������: " << salary << "$";
//
//	return 0;
//	*/
//}