//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// ЗАДАНИЕ 3
//	/*Есть стопка оладий различного радиуса.Единственная
//	операция, проводимая с ними — между любыми двумя суем
//	лопатку и меняем порядок оладий над лопаткой на обратный.
//	Необходимо за минимальное количество операций таких
//	отсортировать снизу вверх по убыванию радиуса.*/
//	srand(static_cast<unsigned int>(time(nullptr)));
//	const int LENGTH = 10;
//	int pancakesaArray[LENGTH];
//	int maxNumber, maxNumberElement, tmp;
//
//
//	
//	cout << "Радиусы аладьев до сортировки:" << endl;
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		pancakesaArray[ii] = rand() % 9 + 1;
//		cout << "\t" << pancakesaArray[ii]<< endl;
//	}
//	cout << endl;
//
//	for (int jj = LENGTH - 1; jj >= 0; jj--)
//	{
//		maxNumber = pancakesaArray[jj];
//		maxNumberElement = jj;
//
//		for (int gg = 00; gg < jj; gg++)
//		{
//			if (pancakesaArray[gg] > maxNumber)
//			{
//				maxNumber = pancakesaArray[gg];
//				maxNumberElement = gg;
//			}
//		}
//
//
//		for (int upheaval = 0; upheaval <= maxNumberElement / 2; upheaval++)
//		{
//
//			tmp = pancakesaArray[upheaval];
//			pancakesaArray[upheaval] = pancakesaArray[maxNumberElement - upheaval];
//			pancakesaArray[maxNumberElement - upheaval] = tmp;
//		}
//
//
//		for (int upheaval = 0; upheaval <= jj / 2; upheaval++)
//		{
//			tmp = pancakesaArray[upheaval];
//			pancakesaArray[upheaval] = pancakesaArray[jj - upheaval];
//			pancakesaArray[jj - upheaval] = tmp;
//		}
//	}
//
//
//	cout << "Радиусы аладьев после сортировки:" << endl;
//	for (int ii = 0; ii < LENGTH; ii++)
//	{
//		cout << "\t" << pancakesaArray[ii] << endl;
//	}
//
//
//
//	return 0;
//}