//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	//������� 1
//	/*�������� ��������� �����������.������� ��� ����������
//	�������. ���� ������ ������ ������ ��������� ���������,
//	������ � �������� ���������� ������.
//	����������� ���� ��� ������������ :
//	������������� �� ������� ���������
//	������������� �� �������� ������� ���������;
//	������� ���������������� ������;
//	�����.*/
//	cout << "��������� <����������>";
//	cout << "������� ���������� ����� � �����������(��� �������� �����) ����� 3 ��������: " << endl;
//	const int quantityPeople = 3;
//	int choiceUser;
//	long long mobileNumberArray[quantityPeople], homeNumber[quantityPeople],
//		startMobileNumberArray[quantityPeople], startHomeNumber[quantityPeople];
//	for (int ii = 0; ii < quantityPeople; ii++)
//	{
//		cout << "�������, ���������� ����� ������, �������� �����(6 ����), "
//			<< "��������� �����(11 ����): \n";
//		cin >> homeNumber[ii] >> mobileNumberArray[ii];
//		startHomeNumber[ii] = homeNumber[ii];
//		startMobileNumberArray[ii] = mobileNumberArray[ii];
//	}
//
//	do
//	{
//		cout << "�������� ��������(�����): " << endl << "1 - ������������� �� ������� ��������� ���������"
//			<< endl << "2 - ������������� �� ������� �������� ���������" << endl
//			<< "3 - ������� ���������������� ������(��� ������, ���� ���������)"
//			<< endl << "4 - ����� �� ���������." << endl;
//		cin >> choiceUser;
//		long long tmp;
//
//		switch (choiceUser)
//		{
//		case 1:
//			for (int jj = 0; jj < quantityPeople - 1; jj++)
//				if (mobileNumberArray[jj] > mobileNumberArray[jj + 1])
//				{
//					tmp = mobileNumberArray[jj];
//					mobileNumberArray[jj] = mobileNumberArray[jj + 1];
//					mobileNumberArray[jj + 1] = tmp;
//				}
//
//			for (int jj = 0; jj < quantityPeople; jj++)
//				cout << mobileNumberArray[jj] << endl;
//			break;
//
//		case 2:
//			for (int jj = 0; jj < quantityPeople - 1; jj++)
//				if (homeNumber[jj] > homeNumber[jj + 1])
//				{
//					tmp = homeNumber[jj];
//					homeNumber[jj] = homeNumber[jj + 1];
//					homeNumber[jj + 1] = tmp;
//				}
//
//			for (int jj = 0; jj < quantityPeople; jj++)
//				cout << homeNumber[jj] << endl;
//			break;
//
//		case 3:
//			for (int ii = 0; ii < quantityPeople; ii++)
//				cout << startHomeNumber[ii] << " "
//				<< startMobileNumberArray[ii] << endl;
//
//		case 4:
//			break;
//
//		default:
//			cerr << "������� �������� ��������!";
//			break;
//		}
//	} while (choiceUser != 4);
//
//	return 0;
//}