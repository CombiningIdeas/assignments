//#include <iostream>
//#include<windows.h>
//using namespace std;
//
//void function_level_and_health(int &chooseLevel, int &healthPoints, int &randomDigit, int &leftBorder, int &rightBorder, int &counter1, int &counter2, int &countLevelRounds, int & specialNumbers)
//{
//	if (chooseLevel == 1)
//	{
//		cout << "\033[33m" << "\033[47m"
//			<< "��� ������� ��������� 1 � ����������� ����� ��������� ���������� [1, 10]" << endl;
//		cout << "(������� " << "������� - " << counter1++ << ")" << endl;
//		if (!(countLevelRounds >= specialNumbers)) // ��� ��������� ����� ����� ����� ���� ����������� ����� ���������� ����� �� ����������� ������ ��� ����� ������ ��������� �����
//		{
//			cout << "\033[0m";
//			healthPoints = 10 / 2;
//			randomDigit = rand() % 10 + 1;
//			leftBorder = 1;
//			rightBorder = 10;
//		}
//	}
//	else if (chooseLevel == 2)
//	{
//		cout << "\033[33m" << "\033[47m"
//			<< "��� ������� ��������� 2 � ����������� ����� ��������� ���������� [10, 100]" << endl;
//		cout << "(������� " << "������� - " << counter2++ << ")" << endl;
//		cout << "\033[0m";
//		if (!(countLevelRounds >= specialNumbers))
//		{
//			healthPoints = round((100 - 10 + 1.0) / 4); // ���������� 1 ������ ��� ������ ������� � 10 � 100,
//			// ����� � ������ ������ ���� �� �� 10, � 9 ������.
//			randomDigit = rand() % 91 + 10;
//			leftBorder = 10;
//			rightBorder = 100;
//		}
//	}
//}
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	//������� 1
//	/*
//	�������� ���������, ������� ������� �� ����� �����
//	�������� ��������, ������������ ��� ��������������,
//	������ ����� ����� ���������� ������, ��������� � ��������.
//	������� � ������������� ������������ ����� ����.
//	*/
//	/*string lineChoice;
//	char symbolChoice;
//	int speedLines, delayssLines;
//	cout << "������� �� ����� �������� ����� �������� �����: ";
//	cin >> symbolChoice;
//	cout << "�������� ��� �����(horizontal ��� vertical): ";
//	cin >> lineChoice;
//	cout << "�������� ����� �������� ������ �� ����� �����(������� � ������������) - ������ ��������" << endl;
//	cout << "������� ����� �� 1�������(1000��), \n���������� ����� �� 1 ������� �� 2 ������(2000��),\n"
//		<< "��������� ����� �� 2 ������(�� 2000��): ";
//	cin >> speedLines;
//
//	if (0 > speedLines)
//		cout << "�������� ������������� ��������! ������!";
//
//	string vertical = "vertical", horizontal = "horizontal";
//	int result1 = horizontal.compare(lineChoice);
//	int result2 = vertical.compare(lineChoice);
//
//	if (result1 == 0)
//	{
//		for (int ii = 0; ii < 10; ii++)
//		{
//			Sleep(speedLines);
//			cout << symbolChoice;
//		}
//	}
//	else if (result2 == 0)
//	{
//		for (int ii = 0; ii < 10; ii++)
//		{
//			Sleep(speedLines);
//			cout << symbolChoice << endl;
//		}
//	}
//	else
//		cerr << "������! �������� �������� ���� �����!";
//
//	return 0;*/
//
//	// ������� 2
//	/*
//	�������� ���� �������.������������ � ��������� ��
//	������� ������� 2 ������.���������� � ���, � ���� �� ����������� ���� ������� ����� ������.
//	������������� �������� ��������� ����.
//	*/
//
//	// ���� ����� �������� ��������� ����, �� ����� ������ ��� ����� ������� 3 � ����
//	// ����� �������� �������� ������ ��� ��������� ������ ��� ����������
//	// � ��� ����� ������� 4 � ���� ����� ������������ ������� ������
//	// � ����� ������� ������ ����� ����� ��������� ������� ������������� ����� �
//	// ����������� �� ��������� �����, � ����� ����� ��������� � ���� �����
//	/*srand(static_cast<unsigned>(time(nullptr)));
//	int computer�ube1 = 0, computer�ube2 = 0, humanCube1 = 0, humanCube2 = 0, summComputerCube = 0,
//		summUserCube = 0;
//	string ChoiceFirstThrow;
//	cout << "������� ��� ������ ������� ����� (\"user\" ��� \"computer\"): ";
//	cin >> ChoiceFirstThrow;
//	string ChoiceComputer = "computer", ChoiceUser = "user";
//	string wordLength = "������ ����� - ";
//
//	int counter1 = 0;
//	int counter2 = 0;
//	int localCountComputer1 = 0;
//	int localCountUser1 = 0;
//	int localCountUser2 = 0;
//	int localCountComputer2 = 0;
//	
//
//	// ���������� �� ���� ������ ������ ������� ��� �����, ������ ��� ������ ��� ������
//	if (ChoiceComputer.compare(ChoiceFirstThrow) == 0)
//	{
//		// ���� �� ����� ���� ������� ������ ������� � ������� 4,
//		// �� ���� ����� ������ � ������� ������ ����������� ������ � ������ ������ � ������ ���������
//		// ��� ��� ������ ��������, ��� �������� ������� ����� ��������� �� ������� ������ ����
//		// � ���������� ������ ������ � ����� � ���� ������ � ������ ������.
//		// � ������ �������� ���������� �������, ������ ��� ��� ����� 3 ������ � ��� �� ������ ����
//		while (counter1++ < 3)
//		{
//			while (localCountComputer1++ < 2)
//			{
//				// ������� ��������� ��� ���� � ������� ����������.
//				cout << "����� ������� computer:" << endl;
//				computer�ube1 = rand() % 5 + 1;
//				summComputerCube += computer�ube1;
//				if (computer�ube1 <= 3)
//				{
//					cout << "\033[31m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << computer�ube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//				else if (computer�ube1 >= 4)
//				{
//					cout << "\033[32m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << computer�ube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//			}
//			localCountComputer1 = 0;
//			while (localCountUser1++ < 2)
//			{
//				// ������� ����� ��� ���� � ������� ����������.
//				cout << "����� ������� user: " << endl;
//				humanCube1 = rand() % 5 + 1;
//				summUserCube += humanCube1;
//				if (humanCube1 <= 3)
//				{
//					cout << "\033[31m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << humanCube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//				else if (humanCube1 >= 4)
//				{
//					cout << "\033[32m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << humanCube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//			}
//			localCountUser1 = 0;
//		}
//	}
//	else if (ChoiceUser.compare(ChoiceFirstThrow) == 0)
//	{
//		while (counter2++ < 3)
//		{
//			while (localCountUser2++ < 2)
//			{
//				// ������� ����� ��� ���� � ������� ����������.
//				cout << "����� ������� user: " << endl;
//				humanCube1 = rand() % 5 + 1;
//				summUserCube += humanCube1;
//				if (humanCube1 <= 3)
//				{
//					cout << "\033[31m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << humanCube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//				else if (humanCube1 >= 4)
//				{
//					cout << "\033[32m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << humanCube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//			}
//			localCountUser2 = 0;
//
//			while (localCountComputer2++ < 2)
//			{
//				// ������� ��������� ��� ���� � ������� ����������.
//				cout << "����� ������� computer:" << endl;
//				computer�ube1 = rand() % 5 + 1;
//				summComputerCube += computer�ube1;
//				if (computer�ube1 <= 3)
//				{
//					cout << "\033[31m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << computer�ube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//				else if (computer�ube1 >= 4)
//				{
//					cout << "\033[32m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << computer�ube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//			}
//			localCountComputer2 = 0;
//		}
//	}
//	else
//		cerr << "������! ������� ������ �������� ���� ��� ������ ������� �����.";
//
//
//	int cubeMax = max(summComputerCube, summUserCube);
//
//	string winner;
//	// ������������� ���������� ��� user, �� ���� ���������� ��������� �� ��������� �������������
//	// ��� ������ ������ ���� ��� ��������� ������.
//	winner = "User";
//	if (cubeMax == summComputerCube)
//		winner = "Computer";
//
//	cout << "�� ����������� ���� ������� ��������� - " << winner << " � ���� "
//		<< cubeMax << " - �����.";
//
//	return 0;*/
//	
//	// ������� 3
//	/*
//	�������� ���� �GUESS MY NUMBER�.������������
//	��������� �����, ������� �������� ���������.��������
//	2 ������ ��������� : �� ������ ������ ����� �� 1 �� 10, ��
//	������ �� 10 �� 100. � ������ ���� ������������ ��������
//	�������.
//	� ������ ������� ������ ������ ������ ������ � 50 %
//	�� ����� ��������� ���������� �� ������ ������ � 25 % � ��
//	������(������ �������� ����).�� ������ ������ �����
//	���������� � ����� ���� �����.������������� � ���� ����������� ��������� :
//	����������� ����� ������ � ������
//	������.��������� ��������� � ���� �����(������������
//	����� ������� ��������� � ������ ������ ��� ���������� ��
//	���).������� ������������, ���� ����� ��� ��� �� �������
//	(��������� ������ ���� � ����� ������������ ��������
//	� �������).
//	���� ����� ������ � ���������� ���������� ������,
//	���������� �� 5 ��� ������� ������ � �� 10 ��� �������.
//	��������� ����, ���������� ����� ��� ����������, �������
//	� �������.
//	*/
//	/*srand(static_cast<unsigned>(time(nullptr)));
//	cout << "�� ������� � ����: �GUESS MY NUMBER�" << endl;
//	int chooseLevel, healthPoints, randomDigit, leftBorder, rightBorder;
//	int guessedNumber, choiseHint;
//	cout << "�������� ������� ���������(1 ��� 2) - �� ������ ������ ����� �� 1 �� 10, ��"
//		<< "������ �� 10 �� 100: ";
//	cin >> chooseLevel;
//	if (chooseLevel != 1 && chooseLevel != 2)
//		cerr << "������! ��������� ������� ����� ������";
//	else if (chooseLevel == 1)
//	{
//		healthPoints = 10 / 2;
//		randomDigit = rand() % 10 + 1;
//		cout << "��� ������� ��������� 1 � ����������� ����� ��������� ���������� [1, 10]" << endl;
//		leftBorder = 1;
//		rightBorder = 10;
//	}
//	else if (chooseLevel == 2)
//	{
//		healthPoints = round((100 - 10 + 1) / 4); // ���������� 1 ������ ��� ������ ������� � 10 � 100,
//		// ����� � ������ ������ ���� �� �� 10, � 9 ������.
//		randomDigit = rand() % 91 + 10;
//		cout << "��� ������� ��������� 2 � ����������� ����� ��������� ���������� [10, 100]" << endl;
//		leftBorder = 10;
//		rightBorder = 100;
//	}
//
//	cout << "���� ���������� ������ - " << healthPoints << endl;
//	int counterChoice = 1;
//
//	while (healthPoints > 0)
//	{
//		cout << "������� �������������� ���� �����: ";
//		cin >> guessedNumber;
//		if (guessedNumber < leftBorder || guessedNumber > rightBorder)
//			cerr << "�� ����� ����� ��� ��������� ���������� ������! ���������� �������." << endl;
//		else if (guessedNumber == randomDigit)
//		{
//			cout << "�� ��������!" << " ���������� ����� ����������� ����� - " << randomDigit << endl;
//			break;
//		}
//		else if (guessedNumber != randomDigit)
//		{
//			healthPoints = healthPoints - 1;
//			cout << "\033[32m" << "\033[47m" << "�� �� ������� (, � ��� �������� - " << healthPoints << " ������." << endl;
//			cout << "\033[0m";
//			for (int ii = 0; ii < healthPoints; ii++)
//				cout << "\033[32m" << "\033[43m" << "*";
//			cout << endl;
//			cout << "\033[0m";
//			while (counterChoice-- > 0 && healthPoints > 0)
//			{
//				cout << "������ �� ��������������� ����������?!(1 - ��/ 0 - ���): ";
//				cin >> choiseHint;
//				if (choiseHint == 1)
//				{
//					if (guessedNumber > randomDigit)
//						cout << "���� ����� ������ �����, ����������� ����������." << endl;
//					else
//						cout << "���� ����� ������ �����, ����������� ����������." << endl;
//					healthPoints = healthPoints - 1;
//				}
//				else if (choiseHint == 0)
//					break;
//				else
//				{
//					cout << "����������� ������� ��������" << endl;
//				}
//				cout << "\033[32m" << "\033[47m" << "� ��� �������� - " << healthPoints << " ������." << endl;
//				cout << "\033[0m";
//				for (int ii = 0; ii < healthPoints; ii++)
//					cout << "\033[32m" << "\033[43m" << "*";
//				cout << endl;
//				cout << "\033[0m";
//			}
//			counterChoice = 1;
//		}
//	}
//
//	if (guessedNumber != randomDigit)
//		cout << "\033[31m"<< "\033[47m" << "� ��� �� �������� ������. �� ���������! (.";
//	else if(guessedNumber == randomDigit && chooseLevel == 1)
//		cout << "\033[32m" << "\033[47m" << "���� ���� ����� ������: " << healthPoints * 5;
//	else if (guessedNumber == randomDigit && chooseLevel == 2)
//		cout << "\033[32m" << "\033[47m" << "���� ���� ����� ������: " << healthPoints * 10;
//
//	cout << "\033[0m";
//
//
//	return 0;*/
//
//	// ������� 4
//	/*�������������� ���� �GUESS MY NUMBER� ���������
//	������� :
//	 ������������ �� �������� �������, �.�.������� �� �������
//	������ �������� ������ ����� ���������� ������� ���
//	���������(���� ����� ������ ����������);
//	 ������ ������� ������ ��� ������(�� ������ ������
//	������������ ����� �����), � ������ � ��� ������.�����
//	����� ����������� ������ ����� ����� �������.
//	���� ������������ �������� �����, �� ���������� ����������� ���� �� ����� � ������� ��������� �����
//	������������, ���������� �� 5 ��� ������� ������ � ��
//	10 ��� �������;
//	���������� ����� ����������� � ������������� � �������
//	� �������;
//	 ������������� ����� ��������� ����� ������� ������
//	� ������.*/
//	/*srand(static_cast<unsigned>(time(nullptr)));
//	cout << "�� ������� � ����: �GUESS MY NUMBER�" << endl;
//	int chooseLevel, healthPoints, randomDigit, leftBorder, rightBorder;
//	int guessedNumber, choiseHint, amountPoints = 0;
//
//	chooseLevel = 1;
//	int counter1 = 0;
//	int counter2 = 0;
//	int external�ontroller = 0;
//	int startLevel2 = 0;
//
//	int counterChoice = 1;
//	int countLevelRounds = 1, specialNumbers = 4;
//	function_level_and_health(chooseLevel, healthPoints, randomDigit, leftBorder, rightBorder, counter1, counter2, countLevelRounds, specialNumbers);
//
//	while (healthPoints > 0)
//	{
//		while (countLevelRounds < specialNumbers && healthPoints > 0)
//		{
//			cout << "������� �������������� ���� �����: ";
//			cin >> guessedNumber;
//			if (guessedNumber < leftBorder || guessedNumber > rightBorder)
//				cerr << "�� ����� ����� ��� ��������� ���������� ������! ���������� �������." << endl;
//			else if (guessedNumber == randomDigit)
//			{
//				function_level_and_health(chooseLevel, healthPoints, randomDigit, leftBorder, rightBorder, counter1, counter2, countLevelRounds, specialNumbers);
//				cout << "\033[33m" << "\033[47m" << "�� ��������!" 
//					<< " ���������� ����� ����������� ����� - " << randomDigit << endl;
//				if (chooseLevel == 1)
//					amountPoints += healthPoints * 5;
//				else if (chooseLevel == 2)
//					amountPoints += healthPoints * 10;
//				cout << "\033[36m" << "���������� ����� �����: " 
//					<< amountPoints << endl;
//				cout << "\033[0m";
//				++countLevelRounds;
//				if (countLevelRounds >= specialNumbers)
//					break;
//				continue;
//			}
//			else if (guessedNumber != randomDigit)
//			{
//				healthPoints = healthPoints - 1;
//				cout << "\033[32m" << "\033[47m" << "�� �� ������� (, � ��� �������� - " << healthPoints << " ������." << endl;
//				cout << "\033[0m";
//				for (int ii = 0; ii < healthPoints; ii++)
//					cout << "\033[32m" << "\033[43m" << "*";
//				cout << endl;
//				cout << "\033[0m";
//				while (counterChoice-- > 0 && healthPoints > 0)
//				{
//					cout << "������ �� ��������������� ����������?!(1 - ��/ 0 - ���): ";
//					cin >> choiseHint;
//					if (choiseHint == 1)
//					{
//						if (guessedNumber > randomDigit)
//							cout << "���� ����� ������ �����, ����������� �����������." << endl;
//						else
//							cout << "���� ����� ������ �����, ����������� �����������." << endl;
//						healthPoints = healthPoints - 1;
//					}
//					else if (choiseHint == 0)
//						break;
//					else
//					{
//						cout << "����������� ������� ��������" << endl;
//					}
//					cout << "\033[32m" << "\033[47m" << "� ��� �������� - " << healthPoints << " ������." << endl;
//					cout << "\033[0m";
//					for (int ii = 0; ii < healthPoints; ii++)
//						cout << "\033[32m" << "\033[43m" << "*";
//					cout << endl;
//					cout << "\033[0m";
//				}
//				counterChoice = 1;
//			}
//			else
//				cout << "�� ����� �� �����";
//
//		}
//		if (healthPoints <= 0)
//			break;
//		chooseLevel = 2;
//		for (; 1 > startLevel2; startLevel2++)
//		{
//			countLevelRounds = 1;
//			specialNumbers = 3;
//		}
//		external�ontroller++;
//		if (external�ontroller == 2)
//			break;
//		function_level_and_health(chooseLevel, healthPoints, randomDigit, leftBorder, rightBorder, counter1, counter2, countLevelRounds, specialNumbers);
//	}
//
//	if (guessedNumber != randomDigit && chooseLevel == 1)
//	{
//		cout << "\033[31m" << "\033[47m" << "� ��� �� �������� ������. �� ���������! (."
//			<< endl;
//		cout << "\033[31m" << "\033[47m" << "���� ���������� ����� ������ : "
//			<< 10 / 2 * 5;
//	}
//	else if (guessedNumber != randomDigit && chooseLevel == 2)
//	{
//		cout << "\033[31m" << "\033[47m" << "� ��� �� �������� ������. �� ���������! (."
//			<< endl;
//		cout << "\033[31m" << "\033[47m" << "���� ���������� ����� ������ : "
//			<< round((100 - 10 + 1.0) / 4) * 10;
//	}
//	else if (guessedNumber == randomDigit)
//		cout << "\033[32m" << "\033[47m" << "���� ���� ����� ������: " << amountPoints;
//
//	cout << "\033[0m";
//
//	return 0;*/
//}