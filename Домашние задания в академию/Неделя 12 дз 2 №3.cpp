//#include <iostream>
//using namespace std;
//
//int program_BullsAndCows(int guessedNum, int totalUserNum, int count)
//{
//	cout << "��������� �������� �����: ";
//	cin >> totalUserNum;
//	if (totalUserNum > 9999 || totalUserNum < 1000)
//	{
//		cerr << "������! ������� �� �������������� �����, ���������� �����" << endl;
//		program_BullsAndCows(guessedNum, totalUserNum, count);
//	}
//	count++;
//
//	if (guessedNum == totalUserNum)
//		return count;
//	else
//	{
//		int gues, total, bullsCount = 0, cowCount = 0;
//		for (int ii = guessedNum, jj = totalUserNum; ii > 0 && jj > 0;) // 4 - ������ �����.
//		{
//			gues = ii % 10;
//			total = jj % 10;
//			if (gues == total)
//				cowCount += 1;
//			ii = ii / 10;
//			jj = jj / 10;
//		}
//		
//
//		for (int ii = guessedNum; ii > 0;)// ���� ���� �������� �� guessedNum
//		{
//			gues = ii % 10;
//			for (int jj = totalUserNum; jj > 0;)// � ���� ��� �������� �� totalUserNum 
//			{
//				
//				total = jj % 10;
//				if (gues == total)
//					bullsCount += 1;
//				jj = jj / 10;
//			}
//			ii = ii / 10;
//		}
//
//		cout << "���������� ��������� ���� �����: " << bullsCount << endl;
//		cout << "���������� ��������� ����, ������� ����� �� ����� �����: " 
//			<< cowCount << endl;
//	}
//
//	program_BullsAndCows(guessedNum, totalUserNum, count);
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ������� 3. 
//	/* �������� ���� ����� � �������. ���������
//	����������� ������������� ����� � �������� ������
//	������� ���. ����� ����� ������������� ����� ���������
//	��������, ������� ���� ����� �������(����) � �������
//	���� ������� � ����� �� ������ �����(������).�����
//	����������� ����� �� ����� ���������� 
//	������� ���������� ��������� ������������� �������. � ���������
//	���������� ������������ ��������. */
//	srand(static_cast<unsigned int>(time(nullptr)));
//	// ���������� ������������� �����
//	int	guessedNumber = rand() % 9000 + 1000; 
//	int totalUserNumber = 0, counter = 0;
//
//	cout << "���� ���� � ������. ����� ������� �������������� �����" << endl;
//	cout << "\n����������� �� �������� ����� � �� ��� � ��� ���� " 
//		<< program_BullsAndCows(guessedNumber, totalUserNumber, counter) 
//		<< " - �������\n";
//	 
//
//
//
//	return 0;
//}