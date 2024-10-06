//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//using elementType = int;
//
//template <typename T>
//inline void Swap(T& a, T& b);
//
//template <typename T>
//auto matrixFillingAndInput(T** matrix, int lengthRow, int lengthColumn) -> void;
//
//template <typename T>
//auto outputConsoleArray(T** array, const int lengthRow,
//	const int lengthColumn) -> void;
//
//template <typename T>
//auto commonValuesFor3Marix(T** matrixA, T** matrixB, T** matrixC,
//	int lengthRowA, int lengthRowB, int lengthRowC, int lengthColumnA,
//	int lengthColumnB, int lengthColumnC) -> int*;
//
//template <typename T>
//auto uniqueValues(T** matrixA, T** matrixB, T** matrixC,
//	int lengthRowA, int lengthRowB, int lengthRowC, int lengthColumnA,
//	int lengthColumnB, int lengthColumnC) -> int*;
//
//template <typename T>
//auto commonValuesFor2Marix(T** matrixA, T** matrixC, int lengthRowA, 
//	int lengthRowC, int lengthColumnA, int lengthColumnC) -> int*;
//
//template <typename T>
//auto  negativeValuesWithoutRepeats(T** matrixA, T** matrixB, T** matrixC,
//	int lengthRowA, int lengthRowB, int lengthRowC, int lengthColumnA, 
//	int lengthColumnB, int lengthColumnC) -> int*;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* Задание 2. Есть 3 двумерных массива A, B, C. Количество строк и столбцов 
//	для них вводит пользователь с клавиатуры для каждого из них. Реализуйте
//	1) Создайте одномерный массив, который содержит общие значения для A, B, C;
//	2) Создайте одномерный массив, который содержит уникальные значения 
//	для A, B, C;
//	3) Создайте одномерный массив, который содержит общие значения для A и C;
//	4) Создайте одномерный массив, который содержит отрицательные значения 
//	для A, B, C без повторений. */
//
//	int lengthRowA, lengthRowB, lengthRowC;
//	int lengthColumnA, lengthColumnB, lengthColumnC;
//
//	cout << "Введите колчиство строк массива A: ";
//	cin >> lengthRowA;
//	cout << "Введите колчиство столбцов массива A: ";
//	cin >> lengthColumnA;
//	cout << "Введите колчиство строк массива B: ";
//	cin >> lengthRowB;
//	cout << "Введите колчиство столбцов массива B: ";
//	cin >> lengthColumnB;
//	cout << "Введите колчиство строк массива C: ";
//	cin >> lengthRowC;
//	cout << "Введите колчиство столбцов массива C: ";
//	cin >> lengthColumnC;
//
//	elementType** matrixA, ** matrixB, ** matrixC;
//	try
//	{
//		matrixA = new elementType*[lengthRowA + 1];
//		for (int ii = 0; ii < lengthRowA; ii++)
//			matrixA[ii] = new elementType[lengthColumnA];
//
//		matrixB = new elementType*[lengthRowB + 1];
//		for (int ii = 0; ii < lengthRowB; ii++)
//			matrixB[ii] = new elementType[lengthColumnB];
//
//		matrixC = new elementType*[lengthRowC + 1];
//		for (int ii = 0; ii < lengthRowC; ii++)
//			matrixC[ii] = new elementType[lengthColumnC];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//	// заполняем и выводим матрицы:
//	cout << "Изначальный матрица A: " << endl;
//	matrixFillingAndInput(matrixA, lengthRowA, lengthColumnA);
//	cout << endl;
//
//	cout << "Изначальный матрица B: " << endl;
//	matrixFillingAndInput(matrixB, lengthRowB, lengthColumnB);
//	cout << endl;
//
//	cout << "Изначальный матрица C: " << endl;
//	matrixFillingAndInput(matrixC, lengthRowC, lengthColumnC);
//	cout << endl;
//
//	// Выводим массив в нужном порядке:
//	cout << "1) Одномерный массив, который содержит общие значения для A, B, C: " << endl;
//	int* resultTotalNumbersArray = commonValuesFor3Marix(matrixA, matrixB, matrixC,
//		lengthRowA, lengthRowB, lengthRowC, lengthColumnA, lengthColumnB,
//		lengthColumnC);
//	cout << endl;
//
//	cout << "2) Одномерный массив, который содержит уникальные значения "
//		<< "для A, B, C: " << endl;
//	int* resultuniqueNumbersArray = uniqueValues(matrixA, matrixB, matrixC,
//		lengthRowA, lengthRowB, lengthRowC, lengthColumnA, lengthColumnB,
//		lengthColumnC);
//	cout << endl;
//
//	cout << "3) Одномерный массив, который содержит общие значения для A и C: " << endl;
//	int* resultTotalNumbersArrayCAndA = commonValuesFor2Marix(matrixA, matrixC, 
//		lengthRowA, lengthRowC, lengthColumnA, lengthColumnC);
//	cout << endl;
//
//	cout << "4) Одномерный массив, который содержит отрицательные значения "
//		<< "для A, B, C без повторений: " << endl;
//	int* resulNegativetArray = negativeValuesWithoutRepeats(matrixA, matrixB, matrixC,
//		lengthRowA, lengthRowB, lengthRowC, lengthColumnA, lengthColumnB, 
//		lengthColumnC);
//	cout << endl;
//	
//	
//	for (int ii = 0; ii < lengthRowA; ii++)
//        delete[] matrixA[ii];
//	delete[] matrixA;
//
//	for (int ii = 0; ii < lengthRowB; ii++)
//		delete[] matrixB[ii];
//	delete[] matrixB;
//
//	for (int ii = 0; ii < lengthRowC; ii++)
//		delete[] matrixC[ii];
//	delete[] matrixC;
//
//	delete[] resultTotalNumbersArray, resultuniqueNumbersArray,
//		resultTotalNumbersArrayCAndA, resulNegativetArray;
//
//	return 0;
//}
//
//
//
//template <typename T>
//inline void Swap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//
//
//template <typename T>
//auto matrixFillingAndInput(T** matrix, int lengthRow, int lengthColumn) -> void
//{
//	for (int ii = 0; ii < lengthRow; ii++)
//	{
//		for (int jj = 0; jj < lengthColumn; jj++)
//			cout << ' ' << setw(2) << (matrix[ii][jj] = rand() % 19 - 9);
//		cout << endl;
//	}
//}
//
//
//
//template <typename T>
//auto  commonValuesFor3Marix(T** matrixA, T** matrixB, T** matrixC,
//	int lengthRowA, int lengthRowB, int lengthRowC, int lengthColumnA,
//	int lengthColumnB, int lengthColumnC) -> int*
//{
//	int lengthСopyResultArray = lengthRowA * lengthColumnA +
//		lengthRowB * lengthColumnB + lengthRowC * lengthColumnC;
//
//	elementType* СopyResultArray;
//	try
//	{
//		СopyResultArray = new elementType[lengthСopyResultArray + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		exit(1);
//	}
//
//	int indexResultArray = 0;
//	// просто заполняем наш массив
//	for (int ii = 0; ii < lengthRowA; ii++)
//		for (int jj = 0; jj < lengthColumnA; jj++)
//			СopyResultArray[indexResultArray++] = matrixA[ii][jj];
//
//	for (int ii = 0; ii < lengthRowB; ii++)
//		for (int jj = 0; jj < lengthColumnB; jj++)
//			СopyResultArray[indexResultArray++] = matrixB[ii][jj];
//
//	for (int ii = 0; ii < lengthRowC; ii++)
//		for (int jj = 0; jj < lengthColumnC; jj++)
//			СopyResultArray[indexResultArray++] = matrixC[ii][jj];
//
//	int newIndexResultArray = 0;//длинна нового массива
//
//	bool countCopy = true;
//	// это одновременно и убирание повторений в массиве и так же
//	// и так же проверка на общий ли это элемент в трех массивах
//	bool commonElement = false, elemenArrayA = false, elemenArrayB = false,
//		elemenArrayC = false;
//
//	for (int ii = 0; ii < indexResultArray; ii++)
//	{
//		for (int gg = 0; gg < lengthRowA; gg++)
//			for (int hh = 0; hh < lengthColumnA; hh++)
//				if (matrixA[gg][hh] == СopyResultArray[ii])
//					elemenArrayA = true;
//
//		for (int gg = 0; gg < lengthRowB; gg++)
//			for (int hh = 0; hh < lengthColumnB; hh++)
//				if (matrixB[gg][hh] == СopyResultArray[ii])
//					elemenArrayB = true;
//
//		for (int gg = 0; gg < lengthRowC; gg++)
//			for (int hh = 0; hh < lengthColumnC; hh++)
//				if (matrixC[gg][hh] == СopyResultArray[ii])
//					elemenArrayC = true;
//
//		if (elemenArrayA == true && elemenArrayB == true && elemenArrayC == true)
//			commonElement = true;
//
//		for (int jj = 0; jj <= ii; jj++)
//			if (СopyResultArray[ii] == СopyResultArray[jj] && ii != jj)
//			{
//				countCopy = false;
//				break;
//			}
//
//		if (countCopy == true && commonElement == true)
//			newIndexResultArray++;
//
//		countCopy = true;
//		commonElement = false;
//		elemenArrayA = false, elemenArrayB = false, elemenArrayC = false;
//	}
//
//	elementType* resultArray;
//	try
//	{
//		resultArray = new elementType[newIndexResultArray + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		exit(1);
//	}
//
//	newIndexResultArray = 0;//обнуляем для заполнения массива
//
//	for (int ii = 0; ii < indexResultArray; ii++)
//	{
//		for (int gg = 0; gg < lengthRowA; gg++)
//			for (int hh = 0; hh < lengthColumnA; hh++)
//				if (matrixA[gg][hh] == СopyResultArray[ii])
//					elemenArrayA = true;
//
//		for (int gg = 0; gg < lengthRowB; gg++)
//			for (int hh = 0; hh < lengthColumnB; hh++)
//				if (matrixB[gg][hh] == СopyResultArray[ii])
//					elemenArrayB = true;
//
//		for (int gg = 0; gg < lengthRowC; gg++)
//			for (int hh = 0; hh < lengthColumnC; hh++)
//				if (matrixC[gg][hh] == СopyResultArray[ii])
//					elemenArrayC = true;
//
//		if (elemenArrayA == true && elemenArrayB == true && elemenArrayC == true)
//			commonElement = true;
//
//		for (int jj = 0; jj <= ii; jj++)
//			if (СopyResultArray[ii] == СopyResultArray[jj] && ii != jj)
//			{
//				countCopy = false;
//				break;
//			}
//
//		if (countCopy == true && commonElement == true)
//			resultArray[newIndexResultArray++] = СopyResultArray[ii];
//
//		countCopy = true;
//		commonElement = false;
//		elemenArrayA = false, elemenArrayB = false, elemenArrayC = false;
//	}
//
//	for (int ii = 0; ii < newIndexResultArray; ii++)
//		cout << setw(2) << resultArray[ii] << ' ';
//
//	delete[] СopyResultArray;
//
//	return resultArray;
//}
//
//
//
//template <typename T>
//auto uniqueValues(T** matrixA, T** matrixB, T** matrixC,
//	int lengthRowA, int lengthRowB, int lengthRowC, int lengthColumnA,
//	int lengthColumnB, int lengthColumnC) -> int*
//{
//	int lengthСopyResultArray = lengthRowA * lengthColumnA +
//		lengthRowB * lengthColumnB + lengthRowC * lengthColumnC;
//
//	elementType* СopyResultArray;
//	try
//	{
//		СopyResultArray = new elementType[lengthСopyResultArray + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		exit(1);
//	}
//
//	int indexResultArray = 0;
//	// просто заполняем наш массив
//	for (int ii = 0; ii < lengthRowA; ii++)
//		for (int jj = 0; jj < lengthColumnA; jj++)
//			СopyResultArray[indexResultArray++] = matrixA[ii][jj];
//
//	for (int ii = 0; ii < lengthRowB; ii++)
//		for (int jj = 0; jj < lengthColumnB; jj++)
//			СopyResultArray[indexResultArray++] = matrixB[ii][jj];
//
//	for (int ii = 0; ii < lengthRowC; ii++)
//		for (int jj = 0; jj < lengthColumnC; jj++)
//			СopyResultArray[indexResultArray++] = matrixC[ii][jj];
//
//	int newIndexResultArray = 0;//длинна нового массива
//
//	bool countCopy = true;
//	// это одновременно и убирание повторений в массиве и так же
//	// и так же проверка на общий ли это элемент в трех массивах
//	bool commonElement = false, elemenArrayA = false, elemenArrayB = false,
//		elemenArrayC = false;
//
//	for (int ii = 0; ii < indexResultArray; ii++)
//	{
//		for (int gg = 0; gg < lengthRowA; gg++)
//			for (int hh = 0; hh < lengthColumnA; hh++)
//				if (matrixA[gg][hh] == СopyResultArray[ii])
//					elemenArrayA = true;
//
//		for (int gg = 0; gg < lengthRowB; gg++)
//			for (int hh = 0; hh < lengthColumnB; hh++)
//				if (matrixB[gg][hh] == СopyResultArray[ii])
//					elemenArrayB = true;
//
//		for (int gg = 0; gg < lengthRowC; gg++)
//			for (int hh = 0; hh < lengthColumnC; hh++)
//				if (matrixC[gg][hh] == СopyResultArray[ii])
//					elemenArrayC = true;
//
//		if ((elemenArrayA == true && elemenArrayB == false
//			&& elemenArrayC == false) || (elemenArrayA == false && 
//				elemenArrayB == true && elemenArrayC == false) || 
//			(elemenArrayA == false && elemenArrayB == false 
//				&& elemenArrayC == true))
//			commonElement = true;
//
//		for (int jj = 0; jj <= ii; jj++)
//			if (СopyResultArray[ii] == СopyResultArray[jj] && ii != jj)
//			{
//				countCopy = false;
//				break;
//			}
//
//		if (countCopy == true && commonElement == true)
//			newIndexResultArray++;
//
//		countCopy = true;
//		commonElement = false;
//		elemenArrayA = false, elemenArrayB = false, elemenArrayC = false;
//	}
//
//	elementType* resultArray;
//	try
//	{
//		resultArray = new elementType[newIndexResultArray + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		exit(1);
//	}
//
//	newIndexResultArray = 0;//обнуляем для заполнения массива
//
//	countCopy = true;
//	commonElement = false, elemenArrayA = false, elemenArrayB = false,
//		elemenArrayC = false;
//	for (int ii = 0; ii < indexResultArray; ii++)
//	{
//		for (int gg = 0; gg < lengthRowA; gg++)
//			for (int hh = 0; hh < lengthColumnA; hh++)
//				if (matrixA[gg][hh] == СopyResultArray[ii])
//					elemenArrayA = true;
//
//		for (int gg = 0; gg < lengthRowB; gg++)
//			for (int hh = 0; hh < lengthColumnB; hh++)
//				if (matrixB[gg][hh] == СopyResultArray[ii])
//					elemenArrayB = true;
//
//		for (int gg = 0; gg < lengthRowC; gg++)
//			for (int hh = 0; hh < lengthColumnC; hh++)
//				if (matrixC[gg][hh] == СopyResultArray[ii])
//					elemenArrayC = true;
//
//		if ((elemenArrayA == true && elemenArrayB == false
//			&& elemenArrayC == false) || (elemenArrayA == false &&
//				elemenArrayB == true && elemenArrayC == false) ||
//			(elemenArrayA == false && elemenArrayB == false
//				&& elemenArrayC == true))
//			commonElement = true;
//
//		for (int jj = 0; jj <= ii; jj++)
//			if (СopyResultArray[ii] == СopyResultArray[jj] && ii != jj)
//			{
//				countCopy = false;
//				break;
//			}
//
//		if (countCopy == true && commonElement == true)
//			resultArray[newIndexResultArray++] = СopyResultArray[ii];
//
//		countCopy = true;
//		commonElement = false;
//		elemenArrayA = false, elemenArrayB = false, elemenArrayC = false;
//	}
//
//	for (int ii = 0; ii < newIndexResultArray; ii++)
//		cout << setw(2) << resultArray[ii] << ' ';
//
//	delete[] СopyResultArray;
//
//	return resultArray;
//}
//
//
//template <typename T>
//auto commonValuesFor2Marix(T** matrixA, T** matrixC, int lengthRowA,
//	int lengthRowC, int lengthColumnA, int lengthColumnC) -> int*
//{
//	int lengthСopyResultArray = lengthRowA * lengthColumnA + 
//		lengthRowC * lengthColumnC;
//
//	elementType* СopyResultArray;
//	try
//	{
//		СopyResultArray = new elementType[lengthСopyResultArray + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		exit(1);
//	}
//
//	int indexResultArray = 0;
//	// просто заполняем наш массив
//	for (int ii = 0; ii < lengthRowA; ii++)
//		for (int jj = 0; jj < lengthColumnA; jj++)
//			СopyResultArray[indexResultArray++] = matrixA[ii][jj];
//
//	for (int ii = 0; ii < lengthRowC; ii++)
//		for (int jj = 0; jj < lengthColumnC; jj++)
//			СopyResultArray[indexResultArray++] = matrixC[ii][jj];
//
//	int newIndexResultArray = 0;//длинна нового массива
//
//	bool countCopy = true;
//	// это одновременно и убирание повторений в массиве и так же
//	// и так же проверка на общий ли это элемент в трех массивах
//	bool commonElement = false, elemenArrayA = false, elemenArrayB = false,
//		elemenArrayC = false;
//
//	for (int ii = 0; ii < indexResultArray; ii++)
//	{
//		for (int gg = 0; gg < lengthRowA; gg++)
//			for (int hh = 0; hh < lengthColumnA; hh++)
//				if (matrixA[gg][hh] == СopyResultArray[ii])
//					elemenArrayA = true;
//
//		for (int gg = 0; gg < lengthRowC; gg++)
//			for (int hh = 0; hh < lengthColumnC; hh++)
//				if (matrixC[gg][hh] == СopyResultArray[ii])
//					elemenArrayC = true;
//
//		if (elemenArrayA == true && elemenArrayC == true)
//			commonElement = true;
//
//		for (int jj = 0; jj <= ii; jj++)
//			if (СopyResultArray[ii] == СopyResultArray[jj] && ii != jj)
//			{
//				countCopy = false;
//				break;
//			}
//
//		if (countCopy == true && commonElement == true)
//			newIndexResultArray++;
//
//		countCopy = true;
//		commonElement = false;
//		elemenArrayA = false, elemenArrayB = false, elemenArrayC = false;
//	}
//
//	elementType* resultArray;
//	try
//	{
//		resultArray = new elementType[newIndexResultArray + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		exit(1);
//	}
//
//	newIndexResultArray = 0;//обнуляем для заполнения массива
//
//	for (int ii = 0; ii < indexResultArray; ii++)
//	{
//		for (int gg = 0; gg < lengthRowA; gg++)
//			for (int hh = 0; hh < lengthColumnA; hh++)
//				if (matrixA[gg][hh] == СopyResultArray[ii])
//					elemenArrayA = true;
//
//		for (int gg = 0; gg < lengthRowC; gg++)
//			for (int hh = 0; hh < lengthColumnC; hh++)
//				if (matrixC[gg][hh] == СopyResultArray[ii])
//					elemenArrayC = true;
//
//		if (elemenArrayA == true && elemenArrayC == true)
//			commonElement = true;
//
//		for (int jj = 0; jj <= ii; jj++)
//			if (СopyResultArray[ii] == СopyResultArray[jj] && ii != jj)
//			{
//				countCopy = false;
//				break;
//			}
//
//		if (countCopy == true && commonElement == true)
//			resultArray[newIndexResultArray++] = СopyResultArray[ii];
//
//		countCopy = true;
//		commonElement = false;
//		elemenArrayA = false, elemenArrayB = false, elemenArrayC = false;
//	}
//
//	for (int ii = 0; ii < newIndexResultArray; ii++)
//		cout << setw(2) << resultArray[ii] << ' ';
//
//	delete[] СopyResultArray;
//
//	return resultArray;
//}
//
//
//template <typename T>
//auto  negativeValuesWithoutRepeats(T** matrixA, T** matrixB, T** matrixC,
//	int lengthRowA, int lengthRowB, int lengthRowC, int lengthColumnA,
//	int lengthColumnB, int lengthColumnC) -> int*
//{
//	
//	int lengthСopyResultArray = lengthRowA * lengthColumnA +
//		lengthRowB * lengthColumnB + lengthRowC * lengthColumnC;
//	// создаем массив с копиями:
//	elementType* СopyResultArray;
//	try
//	{
//		СopyResultArray = new elementType[lengthСopyResultArray + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		exit(1);
//	}
//
//	int indexResultArray = 0;
//	// просто заполняем наш массив
//	for (int ii = 0; ii < lengthRowA; ii++)
//		for (int jj = 0; jj < lengthColumnA; jj++)
//			if (matrixA[ii][jj] < 0)
//				СopyResultArray[indexResultArray++] = matrixA[ii][jj];
//
//	for (int ii = 0; ii < lengthRowB; ii++)
//		for (int jj = 0; jj < lengthColumnB; jj++)
//			if (matrixB[ii][jj] < 0)
//				СopyResultArray[indexResultArray++] = matrixB[ii][jj];
//
//	for (int ii = 0; ii < lengthRowC; ii++)
//		for (int jj = 0; jj < lengthColumnC; jj++)
//			if (matrixC[ii][jj] < 0)
//				СopyResultArray[indexResultArray++] = matrixC[ii][jj];
//
//	int newIndexResultArray = 0;//длинна нового массива
//
//	bool countCopy = true;
//
//	for (int ii = 0; ii < indexResultArray; ii++)
//	{
//		for (int jj = 0; jj <= ii; jj++)
//			if (СopyResultArray[ii] == СopyResultArray[jj] && ii != jj)
//			{
//				countCopy = false;
//				break;
//			}
//
//		if (countCopy == true)
//			newIndexResultArray++;
//
//		countCopy = true;
//	}
//
//	elementType* resultArray;
//	try
//	{
//		resultArray = new elementType[newIndexResultArray + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		exit(1);
//	}
//
//	newIndexResultArray = 0;//обнуляем для заполнения массива
//
//	for (int ii = 0; ii < indexResultArray; ii++)
//	{
//		for (int jj = 0; jj <= ii; jj++)
//			if (СopyResultArray[ii] == СopyResultArray[jj] && ii != jj)
//			{
//				countCopy = false;
//				break;
//			}
//
//		if (countCopy == true)
//			resultArray[newIndexResultArray++] = СopyResultArray[ii];
//
//		countCopy = true;
//	}
//
//
//
//	for (int ii = 0; ii < newIndexResultArray; ii++)
//		cout << setw(2) << resultArray[ii] << ' ';
//
//
//	delete[] СopyResultArray;
//
//	return resultArray;
//}
