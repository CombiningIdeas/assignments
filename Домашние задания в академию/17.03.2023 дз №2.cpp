//#include <iostream>
//#include <string>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	//������� 1
//	/*
//	�������� ���������, ����������� ��������� ������ �
//	������� ��� ����� � ���� � ��������.� ���� ��������
//	������������� 4 ���� ����� � ��� ���� ��������.
//	������������ ��������� ����(������� �����, �����
//	�������), ���������� ��� � ��������.������������ ������
//	��� ��������� ��������, ����� ���� ������ ���������� ������
//	������� ��������.
//	� �������� ������������� ��� ���� ������ :
//	1)���� ����� ����� ������ ����� 50$, �� ������ ������ ���������� 20 % �� ����� ������;
//	2)������ ����� ����� � � �������;
//	3)��� �������� � ����� ����� 2$, ���� ���������� � ������ ����� ����, �� ������ 15 % 
//	(������ �� �������, � �� ��
//	���� �����).
//	������� ������������ ���� ��� ������ � ���� : �������� �
//	���������� � ����.����� � ������.
//	*/
//	/*
//	//���� �������� ��������� ��� ����������� �����, �� ����� ��������� ��� ��������� ���������
//	//� �������� �� ������ ����� ��� ������� � ���������� �� ����� ������������.
//	
//	std::cout << "\t���� ��������" << std::endl;
//	std::cout << "� ��������� ���� 4 ����� �� �����, ������ �� ���� ����� ���� ������� �����:\n"
//		<< "1 - ���������\n" << "2 - ���������\n" << "3 - ������ ������\n" << "4 - ������ ����"
//		<< std::endl;
//	std::cout << "� ��������� ���� 3 ���� ��������:\n"
//		<< "5 - Coca-cola\n" << "6 - Fanta\n" << "7 - Sprite" << std::endl;
//	std::cout << "����� �� ����� ������� ���������� ������ 0 ��� � ��� �������,"
//		<< " ��� � ���������� ��������\n" << std::endl;
//	std::cout << "������ ����� ����� 7,1$(540���)" << std::endl;
//	std::cout << "1 ���� ������ ������� ����� 1$(75���)\n" << std::endl;
//	std::cout << "� �������� ������������� ��� ���� ������:\n"
//		<< "1)���� ����� ����� ������ ����� 50$, �� ������ ������ ���������� 20 % �� ����� ������;\n"
//		<< "2)������ ����� ����� � � �������;\n"
//		<< "3)��� �������� � ����� ����� 2$, ���� ���������� � ������ ����� ����, �� ������ 15 %"
//		<< "(������ �� �������, � �� �� ���� �����).\n" << std::endl;
//	int pizza, drink, quantityPizza, giftPizza, cupsBottles;
//	double quantityDrink, resultDrink, resultPizza, result;
//	std::string namePizza, nameDrink;
//	std::cout << "�������� �����(����� ���) � ���������� ����� ����� ������: ";
//	std::cin >> pizza >> quantityPizza;
//	std::cout << "�������� �������(����� ���) � ���������� ������(0.3; 0.5; 1; 2; 2.5)"
//		<< "� ����� �����������(��� �������) ����� ������ : ";
//	std::cin >> drink >> quantityDrink >> cupsBottles;
//	// �������� �� ������������ ��������� ������ ��� � ������� � �������
//	if (quantityDrink != 0 && quantityDrink != 0.3 && quantityDrink != 0.5 && quantityDrink != 1 &&
//		quantityDrink != 2 && quantityDrink != 2.5)
//	{
//		std::cout << "������� ���������� ���������� ������!";
//		return 0;
//	}
//	int ii = 0;
//	giftPizza = quantityPizza;
//	// ����� ������� �������� ���������� �����.
//	for (; giftPizza >= 5; )
//	{
//		giftPizza = giftPizza - 5;
//		++ii;
//	}
//	quantityPizza = giftPizza + (4 * ii);
//	switch (pizza)
//	{
//	case 1:
//		resultPizza = 7.1 * quantityPizza;
//		break;
//	case 2:
//		resultPizza = 7.1 * quantityPizza;
//		break;
//	case 3:
//		resultPizza = 7.1 * quantityPizza;
//		break;
//	case 4:
//		resultPizza = 7.1 * quantityPizza;
//		break;
//	case 0:
//		resultPizza = 0;
//		quantityPizza = 0;
//		break;
//	default:
//		std::cout << "������! ������� ���������� ��� ��������";
//		break;
//	}
//	if (pizza == 1)
//		namePizza = "����� ���������";
//	else if (pizza == 2)
//		namePizza = "����� ���������";
//	else if (pizza == 3)
//		namePizza = "����� ������ ������";
//	else if (pizza == 4)
//		namePizza = "����� ������ ����";
//	else if (pizza == 0)
//		namePizza = "����� ����������";
//	switch (drink)
//	{
//	case 5:
//		resultDrink = cupsBottles * quantityDrink;
//		break;
//	case 6:
//		resultDrink = cupsBottles * quantityDrink;
//		break;
//	case 7:
//		resultDrink = cupsBottles * quantityDrink;
//		break;
//	case 0:
//		resultDrink = 0;
//		cupsBottles = 0;
//		quantityDrink = 0;
//		break;
//	}
//	if (drink == 5)
//		nameDrink = "Coca-cola";
//	else if (drink == 6)
//		nameDrink = "Fanta";
//	else if (drink == 7)
//		nameDrink = "Sprite";
//	else if (drink == 0)
//		nameDrink = "������� ����������";
//	// �������� �� ������ �� ��������
//	if (cupsBottles >= 3 && quantityDrink >= 2)// (>= 2) - ������ ��� 1 ���� ��� ���� ������, � ������ � ����.
//	{
//		resultDrink = (85 * resultDrink) / 100; // ����� ������� �������� ������ �� 15% �� �������.
//	}
//	
//	result = resultPizza + resultDrink;
//	if ((result) >= 50)
//		result = (80 * result) / 100;
//	std::cout << "\t��� ��� ������:" << std::endl;
//	std::cout << namePizza << " - " << quantityPizza << " - " << resultPizza << "$" << std::endl;
//	std::cout << nameDrink << " - " << quantityDrink << " ������ � ����������" << " - " << cupsBottles
//		<< " ����������(�������)" << " - " << resultDrink << "$" << std::endl;
//	std::cout << "\t���� � ������: " << result << "$";
//	*/
//	
//    //������� 2
//    /*�������� ��������� ���������� 200$ + ������� �� ������,
//    ������� �� 500$ � 3 %, �� 500 �� 1000 � 5 %, ����� 1000 �
//    8 % .������������ ������ � ���������� ������� ������
//    ��� ���� ����������.���������� �� ��������, ����������
//    ������� ���������, ��������� ��� ������ 200$, �������
//    ����� �� �����.
//    ����������: ������� ������ � ���� ���� ����������
//    ������.
//    */
//    /*
//    double percentageManager1, percentageManager2, percentageManager3, salary,
//		totalSalaryManager1, totalSalaryManager2, totalSalaryManager3;
//	std::cout << "������� ������� �������� �� ������ ���� ����������, ����� ������: ";
//	std::cin >> percentageManager1 >> percentageManager2 >> percentageManager3;
//    
//	salary = 200;
//
//	if (percentageManager1 <= 500)
//		totalSalaryManager1 = (percentageManager1 * 3) / 100 + 200;
//	else if (500 < percentageManager1 && percentageManager1 <= 1000)
//		totalSalaryManager1 = (percentageManager1 * 5) / 100 + 200;
//	else if (1000 < percentageManager1)
//		totalSalaryManager1 = (percentageManager1 * 8) / 100 + 200;
//
//	if (percentageManager2 <= 500)
//		totalSalaryManager2 = (percentageManager2 * 3) / 100 + 200;
//	else if (500 < percentageManager2 && percentageManager2 <= 1000)
//		totalSalaryManager2 = (percentageManager2 * 5) / 100 + 200;
//	else if (1000 < percentageManager2)
//		totalSalaryManager2 = (percentageManager2 * 8) / 100 + 200;
//
//	if (percentageManager3 <= 500)
//		totalSalaryManager3 = (percentageManager3 * 3) / 100 + 200;
//	else if (500 < percentageManager3 && percentageManager3 <= 1000)
//		totalSalaryManager3 = (percentageManager3 * 5) / 100 + 200;
//	else if (1000 < percentageManager3)
//		totalSalaryManager3 = (percentageManager3 * 8) / 100 + 200;
//
//
//	std::cout << "�������� ���������� ��� ����� �������: " << std::endl;
//	std::cout << "�������� ������� ���������: " << totalSalaryManager1 << "$" << std::endl;
//	std::cout << "�������� ������� ���������: " << totalSalaryManager2 << "$" << std::endl;
//	std::cout << "�������� �������� ���������: " << totalSalaryManager3 << "$" << std::endl;
//
//	if (totalSalaryManager1 > totalSalaryManager2 && totalSalaryManager1 > totalSalaryManager3)
//	{
//		totalSalaryManager1 = totalSalaryManager1 + 200;
//		std::cout << "������ ���������� �������� ������ ��������, ��� �������� ����������: "
//			<< totalSalaryManager1 << "$";
//	}
//	else if (totalSalaryManager2 > totalSalaryManager3 && totalSalaryManager2 > totalSalaryManager1)
//	{
//		totalSalaryManager2 = totalSalaryManager2 + 200;
//		std::cout << "������ ���������� �������� ������ ��������, ��� �������� ����������: "
//			<< totalSalaryManager2 << "$";
//	}
//	else if (totalSalaryManager3 > totalSalaryManager2 && totalSalaryManager3 > totalSalaryManager1 )
//	{
//		totalSalaryManager3 = totalSalaryManager3 + 200;
//		std::cout << "������ ���������� �������� ������ ��������, ��� �������� ����������: "
//			<< totalSalaryManager3 << "$";
//	}
//
//
//
//
//	// ����� ���� �� � ��� ��������:
//	//double topManager = std::max(totalSalaryManager1, totalSalaryManager2, totalSalaryManager3);
//	//topManager = topManager + 200;
//
//    return 0;
//	*/
//}