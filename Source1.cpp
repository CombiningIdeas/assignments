//#include <iostream>
//
//void addRow(int** arr, int col, int row	, int newRow)
//{
//	newRow += row;	
//	int** newArr = new int* [newRow];
//
//	for (int i = 0; i < newRow; ++i)
//		newArr[i] = new int[newRow];
//
//	for (int i = 0; i < col; i++)
//	{
//		for (int j = 0; j < newRow; j++)
//			std::cout << (arr[i][j] = rand() % 10) << " ";
//		std::cout << std::endl;
//	}
//}
//
//int main()
//{
//	int col = 3;
//	const int row = 4;
//
//	int** arr = new int* [col];
//
//	for (int i = 0; i < col; ++i)
//		arr[i] = new int[col];
//	
//	for (int i = 0; i < col; i++)
//	{
//		for (int j = 0; j < row; j++)
//			std::cout << (arr[i][j] = rand() % 10) << " ";
//		std::cout << std::endl;
//	}
//
//	int newRow = 10;
//
//	std::cout << std::endl;
//	addRow(arr, col, row, newRow);
//	std::cout << std::endl;
//	
//	for (int i = 0; i < col; i++)
//	{
//		for (int j = 0; j < row + newRow; j++)
//			std::cout << arr[i][j] << " ";
//		std::cout << std::endl;
//	}
//
//	delete[] arr;
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//using elementType = double;
//const int BUFFER_SIZE = 1024;
//
//auto uniqueSets(elementType *array1, elementType *array2, elementType *resultArray, const int LENGHT1, const int LENGHT2) -> elementType*;
//void outputOfTheSet(elementType* resultArray, const int LENGHT3);
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	elementType *array1, *array2, *resultArray;
//	int lenght1, lenght2;
//
//	try 
//	{
//		array1 = new elementType[BUFFER_SIZE + 1];
//		array2 = new elementType[BUFFER_SIZE + 1];
//		resultArray = new elementType[BUFFER_SIZE + 1];
//	}
//	catch (bad_alloc& exception)
//	{
//		cerr << "Bad alloc:" << exception.what();
//		return 1;
//	}
//
//	cout << "Введите обе длины массивов(через пробел): ";
//	cin >> lenght1 >> lenght2;
//
//	for (int ii = 0; ii < lenght1; ii++, array1++)
//	{
//		*array1 = rand() % 11 - 5;
//		cout << *array1 << " ";
//	}
//	cout << endl;
//
//	for (int ii = 0; ii < lenght2; ii++, array2++)
//	{
//		*array2 = rand() % 11 - 5;
//		cout << *array2 << " ";
//	}
//	cout << endl;
//
//	uniqueSets(array1, array2, resultArray, lenght1, lenght2);
//
//	delete[] array1;
//	delete[] array2;
//	delete[] resultArray;
//
//	return 0;
//}
//
//
//auto uniqueSets(elementType *array1, elementType *array2, elementType *resultArray,
//	const int LENGHT1, const int LENGHT2) -> elementType*
//{
//	int longer, shorter, lenght3 = 0;
//
//	elementType* CopyResultArray;
//	try
//	{
//		CopyResultArray = new elementType[BUFFER_SIZE + 1];
//	}
//	catch (bad_alloc& exception)
//	{
//		cerr << "Bad alloc:" << exception.what();
//		exit(1);
//	}
//	
//
//	if (LENGHT1 >= LENGHT2)
//	{
//		longer = LENGHT1;
//		shorter = LENGHT2;
//		for (int ii = 0; ii < longer;ii++, array1++)
//		{
//			for (int jj = 0; jj < shorter; jj++, array2++)
//			{
//				
//				if (*array2 == *array1)
//				{
//					int specialCounter = 0;
//					if (CopyResultArray != nullptr)
//					{
//						
//						for (int ii = 0; ii < lenght3; ii++, CopyResultArray++)
//						{
//							if (*CopyResultArray == *array2)
//								specialCounter++;
//						}
//					}
//						if (specialCounter == 0)
//						{
//							resultArray++;
//							*resultArray = *array2;
//							*CopyResultArray = *array2;
//							lenght3 += 1;
//						}
//				}
//			}
//		}
//	}
//	else
//	{
//		longer = LENGHT2;
//		shorter = LENGHT1;
//		for (int ii = 0; ii < longer;ii++, array2++)
//		{
//			for (int jj = 0; jj < shorter; jj++, array1++)
//			{
//
//				if (*array1 == *array2)
//				{
//					int specialCounter = 0;
//					if (CopyResultArray != nullptr)
//					{
//						
//						for (int ii = 0; ii < lenght3; ii++, CopyResultArray++)
//						{
//							if (*CopyResultArray == *array2)
//								specialCounter++;
//						}
//					}
//					if (specialCounter == 0)
//					{
//						resultArray++;
//						*resultArray = *array1;
//						*CopyResultArray = *array2;
//						lenght3 += 1;
//					}
//					CopyResultArray = 0;
//				}
//			}
//		}
//	}
//
//	
//	outputOfTheSet(resultArray, lenght3);
//
//	delete[] CopyResultArray;
//}
//
//
//
//void outputOfTheSet(elementType* resultArray, const int LENGHT3)
//{
//	for (int ii = 0; ii < LENGHT3; ii++, resultArray++)
//		cout << *resultArray;
//}