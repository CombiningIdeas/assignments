//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//
//	// ��� 3 ������� ���� � ������� ������������, ����� ����� ���������� � �� ����������� ��.
//	std::cout << "������� ������ ��������: ";
//	int length;
//	std::cin >> length;
//
//	// ������� �� ����� ������, ����������� ����������� "�".
//	/*for (int ii = 0; ii < length; ii++)
//	{
//		for (int jj = 0; jj < ii; jj++)
//			std::cout << ' ';
//
//		for (int jj = ii; jj < length; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//		
//	}
//	return 0;*/
//	// ������� �� ����� ������, ����������� ����������� "�".
//	/*for (int ii = 1; ii < length; ii++)
//	{
//		for (int jj = length - ii; jj < length; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//		
//	}
//	return 0;*/
//	// ������� �� ����� ������, ����������� ����������� "�".
//	/*for (int ii = 0; ii < length / 2 + 1; ii++)
//	{
//
//		for (int jj = 0; jj < ii; jj++)
//			std::cout << ' ';
//
//		for (int jj = ii; jj < length - ii; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//	}
//	return 0;*/
//
//	// ������� �� ����� ������, ����������� ����������� "�".
//	/*for (int ii = length / 2; ii < length; ii++)
//	{
//
//		for (int jj = 0; jj < length - ii - 1; jj++)
//			std::cout << ' ';
//
//		for (int jj = length - ii - 1; jj <= ii; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//	}
//	return 0;*/
//
//	// ������� �� ����� ������, ����������� ����������� "�".
//	/*for (int ii = 0; ii < length / 2; ii++)
//	{
//
//		for (int jj = 0; jj < ii; jj++)
//			std::cout << ' ';
//
//		for (int jj = ii; jj < length - ii; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//	}
//
//	for (int ii = length / 2; ii < length; ii++)
//	{
//
//		for (int jj = 0; jj < length - ii - 1; jj++)
//			std::cout << ' ';
//
//		for (int jj = length - ii - 1; jj <= ii; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//	}
//
//	return 0;*/
//
//	// ������� �� ����� ������, ����������� ����������� "�".
//	/*int index1 = 1;
//	for (int ii = 0; ii < length / 2; ii++)
//	{
//
//		for (int jj = length - ii - 1; jj < length; jj++)
//			std::cout << '*';
//
//		for (int jj = 0; jj < length - 2 * index1; jj++)
//			std::cout << ' ';
//		index1 += 1;
//
//		for (int jj = length - ii - 1; jj < length; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//		
//	}
//
//	int counter = 0;
//	int index2 = 0;
//	for (int ii = length / 2; ii < length; ii++)
//	{
//
//		for (int jj = 1; jj < length - ii; jj++)
//		{
//			std::cout << '*';
//			counter += 1;
//		}
//
//		index2 = length - counter*2;
//		counter = 0;
//		for (int jj = length; jj < length + index2 ; jj++)
//			std::cout << ' ';
//
//		for (int jj = 1; jj < length - ii; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//
//	}
//	return 0;*/
//
//	// ������� �� ����� ������, ����������� ����������� "�".
//	/*for (int ii = 0; ii < length / 2; ii++)
//	{
//
//		for (int jj = length - ii - 1; jj < length; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//
//	}
//
//	for (int ii = length / 2; ii < length; ii++)
//	{
//
//		for (int jj =0; jj < length - ii; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//
//	}
//	return 0;*/
//
//	// ������� �� ����� ������, ����������� ����������� "�".
//	/*for (int ii = 0; ii < length / 2; ii++)
//	{
//		for (int jj = ii; jj < length - 1; jj++)
//			std::cout << ' ';
//
//		for (int jj = length - ii - 1; jj < length; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//
//	}
//
//	int counter = length - (length / 2);
//	for (int ii = length / 2; ii < length; ii++)
//	{
//		for (int jj = counter; jj < length; jj++)
//			std::cout << ' ';
//		counter -= 1;
//
//		for (int jj = 0; jj < length - ii; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//
//	}
//	return 0;*/
//
//	// ������� �� ����� ������, ����������� ����������� "�".
//	/*for (int ii = 0; ii < length; ii++)
//	{
//		for (int jj = ii; jj < length; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//		return 0;
//	}*/
//
//	// ������� �� ����� ������, ����������� ����������� "�".
//	/*/for (int ii = 0; ii < length; ii++)
//	{
//		for (int jj = ii; jj < length-1; jj++)
//			std::cout << ' ';
//
//		for (int jj = -1; jj < ii; jj++)
//			std::cout << '*';
//
//		std::cout << std::endl;
//	}
//	return 0;*/
//}
