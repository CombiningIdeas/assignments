//
//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	
//	//������� 1
//	/*
//	������������ ������ � ���������� ����� � ��������.���������� �������� ���������,
//	������� ��������� ���������
//	������������� ������� � ����, ������, ������� � �������
//	�� �� �����.
//	*/
//	//int seconds, minuts, hours;
//	//std::cout << "������� ����� � ��������: ";
//	//std::cin >> seconds;
//	//hours = seconds / 3600;
//	//minuts = seconds / 60 % 60;
//	//seconds = seconds % 60;
//	//std::cout << "�����: " << hours << std::endl << "�����: " << minuts 
//	//	<< std::endl << "������: " << seconds;
//
//	//������� 2
//	/*�������� ���������, ������� ����������� ��������� �
//	���������� ������� ����� � �������� ������.��������,
//	����� 12,5 ������ ���� ������������� � ���� � 12 ��������
//	� 50 ������
//	*/
//	//double dollars;
//	//int cents;
//	//std::cout << "������� ���������� ����� � ��������: ";
//	//std::cin >> dollars;
//	//cents = dollars * 100;
//	//cents = static_cast<int>(cents) % 100; // ������������� � ������ ����������� [0, 99]
//	//dollars = static_cast<int>(dollars);
//	//std::cout << dollars << " - �������� � " << cents << " - ������." << std::endl;
//
//	//������� 3
//	/*
//	�������� ���������, ������� ����������� ���������
//	������������� ���������� ���� � ���������� ������ ������
//	� ���������� ����.��������, ������������ ���� 17 ����,
//	��������� ������ ������� �� ����� 2 ������ � 3 ���.
//	*/
//	//int days, weeks;
//	//std::cout << "������� ���������� ����: ";
//	//std::cin >> days;
//	//weeks = days / 7;
//	//days = days % 7;
//	//std::cout << "������: " << weeks << "; ����: " << days << std::endl;
//
//	//������� 4
//	/*
//	���������� �������� ����
//	������� ����� ���������(������) = 1000
//	������� �����(���.���) = 3.25
//	���������: 1000 �
//	����� : 3 ��� 25 ��� = 205 ���
//	�� ������ �� ��������� 17.56 ��/�
//	*/
//	//int meters, seconds, totalSeconds;
//	//double minutes, kilometers, hours, averageSpeed;
//	//std::cout << "���������� �������� ����" << std::endl;
//	//std::cout << "������� ����� ���������(������) = ";
//	//std::cin >> meters;
//	//std::cout << "������� �����(���.���) = ";
//	//std::cin >> minutes;
//	//std::cout << "���������: " << meters << " �" << std::endl;
//	//// � ����� ������� �������� ������� � �������, ���� ������� �������� � ������ ������ 60 ������
//	//// ����� ������������� �� ��� ������ 60 ������ � ������, � ������� � �������.
//	//seconds = static_cast<int>(minutes * 100) % 100;
//	//minutes = static_cast<int>(minutes) % 60 + 60 * static_cast<int>(static_cast<int>(minutes) / 60)
//	//	+ seconds / 60;
//	//totalSeconds = minutes * 60 + seconds - 60 * (seconds / 60);
//	//std::cout << "����� : " << minutes << " ��� " << seconds - 60 * (seconds / 60) << " ��� = " 
//	//	<< totalSeconds << " ���" << std::endl;
//	//hours = static_cast<double>(totalSeconds) / 3600;
//	//kilometers = meters / 1000;
//	//averageSpeed = kilometers / hours;
//	//std::cout << "�� ������ �� ��������� " << averageSpeed << " ��/�";
//
//	//������� 5
//	/*
//	�������� ���������, ������� ���������� ������������
//	������ ����� ��������� ������ � ����, � ����� ������� �������, ������� ����������� ����.
//	���������� ����� �����,
//	������������� ������ ��������� ������ �����.
//	*/
//	//double euro, percent, monthlyPayments;
//	//std::cout << "������� ���� ��������� ������� ����: ";
//	//std::cin >> euro;
//	//std::cout << "������� ������� ������� ��� ������: ";
//	//std::cin >> percent;
//	//monthlyPayments = (euro * percent / 100) / 12;
//	//std::cout << "���������� ���� ���������� ������ �����: " << monthlyPayments;
//
//	return 0;
//}
