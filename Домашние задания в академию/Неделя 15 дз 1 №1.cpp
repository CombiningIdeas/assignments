//#include <iostream> 
//
//using namespace std;
//using elementType = int;
//
//template <typename T>
//auto findMax(T* array, const int LENGTH) -> double;
//
//template <typename T>
//auto findMin(T* array, const int LENGTH) -> double;
//
//template <typename T>
//auto findAvg(T* array, const int LENGTH) -> double;
//
//template <typename T>
//auto outputConsole(T* OutputArray, const int LENGTH) -> void;
//
//template <typename T>
//auto arrayFilling(T* arrayFilling, const int LENGTH) -> void;
//
//template <typename T>
//auto Action(T* arrayA, T* arrayB, const int LENGTHA, 
//	const int LENGTHB, double (*operation)(T*, int)) -> double;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* Çàäàíèå 1. Íàïèñàòü ïðîãðàììó, êîòîðàÿ ñîäåðæèò ôóíêöèþ Action, 
//	ïðèíèìàþùóþ â êà÷åñòâå àðãóìåíòà, óêàçàòåëè íà äâà ìàññèâà (À è Â) è 
//	ðàçìåðû ìàññèâîâ, à òàêæå óêàçàòåëü íà ôóíêöèþ. Ïîëüçîâàòåëþ îòîáðàæàåòñÿ ìåíþ,
//	â êîòîðîì îí ìîæåò âûáðàòü max, min, avg. Åñëè âûáðàí max — ïåðåäàåòñÿ óêàçàòåëü 
//	íà ôóíêöèþ, êîòîðàÿ èùåò ìàêñèìóì, åñëè âûáðàí min — ïåðåäàåòñÿ óêàçàòåëü 
//	íà ôóíêöèþ, êîòîðàÿ èùåò ìèíèìóì, åñëè âûáðàí avg — ïåðåäàåòñÿ óêàçàòåëü íà 
//	ôóíêöèþ, êîòîðàÿ èùåò ñðåäíåå. Âîçâðàùàåìîå çíà÷åíèå ôóíêöèè Action ðåçóëüòàò
//	âûáîðà ïîëüçîâàòåëÿ max, min, avg */
//
//	int lengthA, lengthB;
//	cout << "Ââåäè ðàçìåð ìàññèâà À: ";
//	cin >> lengthA;
//	cout << "Ââåäè ðàçìåð ìàññèâà B: ";
//	cin >> lengthB;
//
//	elementType* arrayA, *arrayB;
//	try
//	{
//		arrayA = new elementType[lengthA + 1];
//		arrayB = new elementType[lengthB + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << endl;
//		return 1;
//	}
//
//	cout << "Ìàññèâ À: " << endl;
//	arrayFilling(arrayA, lengthA);
//	outputConsole(arrayA, lengthA);
//	cout << endl;
//
//	cout << "Ìàññèâ B: " << endl;
//	arrayFilling(arrayB, lengthB);
//	outputConsole(arrayB, lengthB);
//	cout << endl << endl;
//
//	// Ïîëüçîâàòåëþ îòîáðàæàåòñÿ ìåíþ,
//	// â êîòîðîì îí ìîæåò âûáðàòü max, min, avg
//
//	int choice;
//	cout << "Âûáåðåòå îäíî èç çíà÷åíèé \n0 - max(ìàêñèìóóì);\n1 - min(ìèíèìóì);\n2 - avg(ñðåäíåå çíà÷åíèå ìàññèâà):\n";
//	cin >> choice;
//	double result;
//
//	switch (choice)
//	{
//		case 0:
//			result = Action(arrayA, arrayB, lengthA, lengthB, findMax);
//			break;
//		case 1:
//			result = Action(arrayA, arrayB, lengthA, lengthB, findMin);
//			break;
//		case 2:
//			result = Action(arrayA, arrayB, lengthA, lengthB, findAvg);
//			break;
//		default:
//			cout << "Íåêîððåêòíî âûáðàíî çíà÷åíèå! " << endl;
//			return 1;
//	}
//
//	cout << "Ðåçóëüòàò: " << result << endl;
//
//	delete[] arrayA, arrayB;
//	return 0;
//}
//
//template <typename T>
//auto outputConsole(T* OutputArray, const int LENGTH) -> void
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//		cout << OutputArray[ii] << ' ';
//}
//
//template <typename T>
//auto arrayFilling(T* arrayFilling, const int LENGTH) -> void
//{
//	for (int ii = 0; ii < LENGTH; ii++)
//		arrayFilling[ii] = rand() % 9 + 1;
//}
//
//template <typename T>
//auto findMax(T* array, const int LENGTH) -> double
//{
//	int maxNum = array[0];
//	for (int ii = 0; ii < LENGTH; ii++)
//		if (array[ii] > maxNum)
//			maxNum = array[ii];
//
//	return maxNum;
//}
//
//template <typename T>
//auto findMin(T* array, const int LENGTH) -> double
//{
//	int minNum = array[0];
//	for (int ii = 0; ii < LENGTH; ii++)
//		if (array[ii] < minNum)
//			minNum = array[ii];
//
//	return minNum;
//}
//
//template <typename T>
//auto findAvg(T* array, const int LENGTH) -> double
//{
//	int sumNum = 0;
//	for (int ii = 0; ii < LENGTH; ii++)
//		sumNum += array[ii];
//
//	return (static_cast<double>(sumNum) / LENGTH);
//}
//
//
//template <typename T>
//auto Action(T* arrayA, T* arrayB, const int LENGTHA, 
//	const int LENGTHB, double (*operation)(T*, int)) -> double
//{
//	double resultA = operation(arrayA, LENGTHA);// ïåðåäàåì îáà ìàññèâà
//	double resultB = operation(arrayB, LENGTHB);
//
//	if (resultA == findAvg(arrayA, LENGTHA) && 
//		resultB == findAvg(arrayB, LENGTHB))// ñðàâíèâàåì
//	{
//		return ((resultA + resultB) / 2.0);
//	}
//	else if (resultA == findMax(arrayA, LENGTHA) && 
//		resultB == findMax(arrayB, LENGTHB))
//	{
//		if (resultA >= resultB)
//			return resultA;
//		else if (resultA < resultB)
//			return resultB;
//	}
//	else if (resultA == findMin(arrayA, LENGTHA) && 
//		resultB == findMin(arrayB, LENGTHB))
//	{
//		if (resultA <= resultB)
//			return resultA;
//		else if (resultA > resultB)
//			return resultB;
//	}
//
//}
