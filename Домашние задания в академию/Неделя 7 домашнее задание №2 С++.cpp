//#include <iostream>
//#include <string>
//#include <map>
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//	//������� 1
//	/*
//	������������ ������ �����.���������� ���������� ����
//	� ���� �����, ��������� �� ����� � ������� ��������������.
//	���������� ���������� ����� � ���� �����. ������� � ������������� ������������ ����� ����.
//	*/
//	/*int digit, number, summDigit = 0, counter1 = 0, counter2 = 0;
//	std::cout << "������� �����: ";
//	std::cin >> digit;
//
//	for (int ii = digit; ii > 0; ii = ii / 10)
//	{
//		number = ii % 10;
//		summDigit += number;
//		counter1 += 1;
//		if (number == 0)
//			counter2 += 1;
//	}
//	std::cout << "����� ���� �����: " << summDigit << std::endl;
//	double mediumArithmetic = summDigit / static_cast<double>(counter1);
//	std::cout << "������ �������������� ���� �����: " << mediumArithmetic << std::endl;
//	std::cout << "���������� ����� � �����: " << counter2;
//
//	return 0;*/
//
//	// ������� 2
//	/*
//	�������� ���������, ������� ������� �� ����� ���������
//	����� � �������� �������� ��������.
//	*/
//	// ������������� �� ���� ��� ���������� ����� ��� 64 ������ 8*8 �������� � �����,
//	// 32 ������ 32 ����� ������
//	// ��������� ��� ����� ������, � ���� ��� ������ ������.
//	/*int LENGTH;
//	std::cout << "������� ������ ������: ";
//	std::cin >> LENGTH;
//
//	for (int nn = 0; nn < 4; nn++)
//	{
//		for (int ss = 0; ss < LENGTH; ss++)
//		{
//			for (int ii = 0; ii < 4; ii++)
//			{
//				for (int jj = 0; jj < LENGTH; jj++)
//					std::cout << '*';
//				for (int jj = 0; jj < LENGTH; jj++)
//					std::cout << '-';
//
//			}
//			std::cout << std::endl;
//		}
//
//		for (int ss = 0; ss < LENGTH; ss++)
//		{
//			for (int ii = 0; ii < 4; ii++)
//			{
//				for (int jj = 0; jj < LENGTH; jj++)
//					std::cout << '-';
//				for (int jj = 0; jj < LENGTH; jj++)
//					std::cout << '*';
//
//			}
//			std::cout << std::endl;
//		}
//	}
//	return 0;*/
//
//	// ������� 3
//	/*
//	����������� ��������� ������� ������ � ���������
//	��� �������, ��� ����� ����� ���� �� ��������� ������� �
//	������ ������ ��������� ���� ����� ������.����������
//	�������� � ������������ �� ������� ������� �����.�����
//	������� �������� ���������� ����(�������� ��������,
//	������������ ������� � �� ����) � �� ��������. 
//	������������� ����������� ������ ���������� ��������� ���� ���
//	�������, ���� �� ������ �������� ��� ��� - �� � ���� �����.
//	��������� ������ ��������� � �������� ����� ������
//	������ ���� ��������.
//	*/
//	/*
//	������ ���� � ����� �� ������ � ���������� ���� ����.
//	��� �������� ����(���� � ������):
//	���� � ������:
//	�������:
//	����:
//	60 - �������� ������������
//	100	- ������� �������� ������������
//	150	- ���������
//	150	- ��������� ������������
//	250	- �������� ����
//	150	- ����� ������������
//	130	- ������� �������
//
//	������������ �������:
//	��������:
//	120	- ����������� �����
//	120	- �������� ���������
//	85 - �������� �������
//
//	���������:
//	50 - ��������� �������
//	*/
//	// � ����� � ����� ������ ������� �� �������� � ���� ����������� � ����� ���� �������� � � ������� ������� ���� �� ���������.
//	/*std::cout << "����(���� � ������): " << "\n�������:" << "\n����:"
//		<< "\n60 - EspressoClassic" << "\n60 - DoubleEspressoClassic"
//		<< "\n150 - Americano" << "\n150 - CappuccinoClassic"
//		<< "\n250 - CappuccinoMega" << "\n150 - LatteClassic" << "\n130 - HotChocolate"
//		<< "\n\n\n������������ �������:" << "\n��������:" << "\n120 - CaramelTango" 
//		<< "\n120 - MillenniumCake"<< "\n85 - CheesecakeCake" << "\n\n���������:"
//		<< "\n50 - IcecreamSundae" << std::endl;
//		
//	int quantityPeople, totalAmount = 0;
//	std::string cafeteriaDrink, cafeteriaFood, cafeteriaChoice;
//	std::cout << "\n\n������� ���������� �����: ";
//	std::cin >> quantityPeople;
//	// ��� ���� � ����� ������ ���������� ������������� ����������(�������� �� �������) ����� map
//	// ������� ��� {����(<std::string), ��������(int>)}, <> - ��� ��� ������ ����.
//	// ������ � �� ����� �������� ������� ���������� ������������� �������� ��� � �������, ������ � �++,
//	// � ����� � ����� map � set.
//	std::map<std::string, int> groceryArray =
//	{
//		{"EspressoClassic", 60}, {"DoubleEspressoClassic", 60},
//		{"Americano", 150}, {"CappuccinoClassic", 150},
//		{"CappuccinoMega", 250}, {"LatteClassic", 150}, {"HotChocolate", 130},
//		{"Caramel Tango", 120}, {"MillenniumCake", 120}, {"CheesecakeCake", 85},
//		{"IcecreamSundae", 50}
//	};
//
//	int counterPeople = 0;
//	while (quantityPeople-- > 0)
//	{
//		counterPeople += 1;
//		std::cout << "����� ��� �������� �" << counterPeople << std::endl;
//		std::cout << "\n������� �������� �������: ";
//		std::cin >> cafeteriaDrink;
//		totalAmount += static_cast<int>(groceryArray[cafeteriaDrink]);
//
//		std::cout << "\n������� �������� �����: ";
//		std::cin >> cafeteriaFood;
//		totalAmount += static_cast<int>(groceryArray[cafeteriaFood]);
//
//		std::cout << "\n������ �� ��� ��������� (Yes/No): ";
//		std::cin >> cafeteriaChoice;
//
//
//		if (cafeteriaChoice == "Yes")
//		{
//			std::cout << "\n������� �������� �������: ";
//			std::cin >> cafeteriaDrink;
//			totalAmount += static_cast<int>(groceryArray[cafeteriaDrink]);
//
//			std::cout << "\n������� �������� �����: ";
//			std::cin >> cafeteriaFood;
//			totalAmount += static_cast<int>(groceryArray[cafeteriaFood]);
//			continue;
//		}
//		else if (cafeteriaChoice == "No")
//			continue;
//		else
//		{
//			std::cout << "\n������� ���������� ����� ���� \"Yes\", ���� \"No\": ";
//			std::cin >> cafeteriaChoice;
//			if (cafeteriaChoice == "Yes")
//			{
//				std::cout << "\n������� �������� �������: ";
//				std::cin >> cafeteriaDrink;
//				totalAmount += static_cast<int>(groceryArray[cafeteriaDrink]);
//
//				std::cout << "\n������� �������� �����: ";
//				std::cin >> cafeteriaFood;
//				totalAmount += static_cast<int>(groceryArray[cafeteriaFood]);
//				continue;
//			}
//			else if (cafeteriaChoice == "No")
//				continue;
//			else
//			{
//				std::cerr << "����� ������� ������ �����! ���������� �����!";
//				break;
//			}
//		}
//		
//	}
//	std::cout << "\n�������� ����� ������ ������ ��� ���� ��������: " << totalAmount;
//
//	return 0;*/
//	
//	// ������� 4
//	// ���� ������ ���� ���� �������� ���.
//	// ������� � ������� ������ ����� ����:
//	/*const char* line[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
//
//	for (int ii = 0; ii < 10; ii++)
//	{
//		for (int jj = 0; jj < 10; jj++)
//		{
//			std::cout << line[jj] << ii << " ";
//		}
//
//		std::cout << std::endl;
//	}
//	
//	
//	return 0;*/
//}