//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int ar[] = { 1, 2 };
//	int br[1][2] = { 3, 4 };
//	int sum = 0;
//
//	for (int i = 0; i < 2; i++)
//	{
//		sum += ar[i] + br[0][i];
//		cout << sum << "\n";
//	}
//
//	cout << sum;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int a = 0;
//	while (0 < 0)
//		cout << a++;
//	cout << "Bye";
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	double i = 1;
//	while (i % 5 != 0)
//	{
//		cout << i;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int i = 0, a = 4;
//	while (i < a)
//		cout << a - i;
//	i++;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int a = 0;
//	while (a < 2)
//		cout << a++;
//	cout << "Bye";
//
//	return 0;
//}

#include <iostream>

using namespace std;

//int main()
//{
//	int i = 2;
//	while (i < 7)
//	{
//		if (i != 5)
//			i++;
//		else
//			cout << i++ << " ";
//	}
//	return 0;
//}
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 1;
//	while (i % 5 != 0)
//	{
//		{
//			cout << i;
//		}
//		i++;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int b = 0;
//
//	while[b < 4] <
//		cout << ++b;
//	>
//
//		cout << "Bye";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 0;
//	while (a < 2)
//		cout << a;
//	a++;
//	cout << "Bye";
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int LENGTH = 3;
//
//    int arr[LENGTH] = { 1,2,3 };
//    int arr2[LENGTH];
//    arr2 = arr;
//
//    for (int i = 0; i < 3; i++) {
//        cout << arr2[i];
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    float val = 2.345678;
//    if (val == 2.345678) {
//        cout << "equal!";
//    }
//    else {
//        cout << "not equal!";
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int rows = 3;
//    const int cols = 3;
//
//    int arr[4] = { 1,1,0,2 };
//    int matrix[rows][cols] = { {1,2,2},{3,1,2},{4,2,1} };
//
//    int amt = 0;
//    for (int i = 0; i < 2; i++) {
//        amt += matrix[arr[i]][arr[i + 1]];
//    }
//
//    cout << amt;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int cols = 3;
//    const int rows = 3;
//    int arr[rows][cols] = { 1,2,3,4,5,6,7,8,9 };
//
//    for (int i = 0; i < rows; i++) {
//        for (int j = i; j < i + 1; j++) {
//            cout << arr[i][j];
//        }
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[2][2] = { 1,2,3,4 };
//    int arr2[2][2] = { arr[1][1],arr[1][0],arr[0][1],arr[0][0] };
//
//    cout << arr2[0][1];
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int LENGTH = 3;
//
//    int arr[][LENGTH] = { 1,2,3 };
//    int arr2[LENGTH];
//
//    arr2 = arr[0];
//
//
//    for (int i = 0; i < 3; i++) {
//        cout << arr2[i];
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a = 1;
//    int b = 2;
//    int arr[][2] = { a,b };
//
//    cout << arr[1][0];
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int rows = 3;
//    const int cols = 3;
//    int matrix[rows][cols] = { {1,2,3},{4,5,6},{7,8,9} };
//
//    int j = cols - 1;
//    for (int i = 0; i < rows; i++) {
//        matrix[i][j] = 0;
//        j--;
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int LENGTH = 5;
//
//    int arr[LENGTH] = { 1,2,3,4,5 };
//
//    for (int i = 0; i <= LENGTH; i++) {
//        cout << arr[i];
//    }
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	const char* array = "123";
//
//	cout << atof(array);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int b = 1;
//
//void Test(int a, int b) {
//	cout << a + ::b;
//
//}
//
//int main() {
//	int b = 11;
//	Test(10, b);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int arr[] = { 1, 2, 3 };
//
//void Show() {
//	for (int val : arr) {
//		cout << val;
//	}
//}
//
//int main() {
//	Show();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void Show(int arr[3][2], int cols, int rows) {
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			cout << arr[i][j];
//		}
//		cout << "\n";
//	}
//}
//
//int main() {
//	int arr[2][2] = { 1, 2, 3, 4 };
//	Show(arr, 2, 2);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int a = 20;
//
//void A(int a) {
//	cout << a;
//}
//
//int main() {
//	A(10);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int b = 1;
//
//void Test() {
//	for (int b = 0; b < 3; b++) {
//		cout << b;
//	}
//
//}
//
//int main() {
//	Test();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void A() {
//	cout << "A";
//	void AA() {
//		cout << "AA";
//	}
//}
//
//int main() {
//	A();
//	AA();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void Show(int arr[3]);
//void Show(int arr[2]) {
//	for (int i = 0; i < 3; i++) {
//		cout << arr[i];
//	}
//}
//
//int main() {
//
//	int arr[3] = { 1, 2, 3 };
//	Show(arr);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//const int LENGTH = 3;
//int[] CreateArray(int val) {
//	int arr[3];
//	for (int i = 0; i < LENGTH; i++) {
//		arr[i] = val;
//	}
//	return arr;
//}
//
//int main() {
//
//	int arr[LENGTH] = CreateArray(7);
//	for (int i = 0; i < LENGTH; i++) {
//		cout << arr[i];
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void Show(int arr[3]) {
//	for (int i = 0; i < 3; i++) {
//		cout << arr[i];
//	}
//}
//
//int main() {
//
//	int arr[] = { 1, 2, 3 };
//	Show(arr);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void Test(int a) {
//	int a = 11;
//	cout << a;
//}
//
//int main() {
//	int b = 23;
//	Test(b);
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int stepen(int ch, int st)
//{
//	int rez = ch * stepen(ch, st - 1);
//	return rez;
//}
//int main() {
//	stepen(2, 6);
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//void func(int mas[], int LENGTH)
//{
//	for (int i = 0; i < LENGTH; i++)
//		++mas[i];
//}
//int main()
//{
//	int mas[5] = { 1, 2, 3, 4, 5 };
//	func(mas, 5);
//	for (int i = 0; i < 5; i++)
//		cout << mas[i] << ' ';
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int Sum(int a, int b)
//{
//	int rez = 0;
//	for (int i = a; i <= b; i++)
//		rez += i;
//	return rez;
//}
//
//int main()
//{
//	cout << Sum(3, 5);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void func(int num)
//{
//	num += 10;
//}
//int main()
//{
//	double num = 12.5;
//	func(num);
//	cout << num;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//void sum(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	cout << sum(10, 12);
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int sum(int a, int b)
//{
//	cout << "sum(int, int) ";
//	return a + b;
//}
//
//int sum(int a, int b, int c = 10)
//{
//	cout << "sum(int, int, int) ";
//	return a + b + c;
//}
//
//int main()
//{
//	cout << sum(10, 12);
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	double mas[4] =
//	{ 2.3, 1.4, 3.2, 4.5 };
//	print(mas, 4);
//	return 0;
//}
//void print(int mas[], int LENGTH)
//{
//	for (int i = 0; i < LENGTH; i++)
//		cout << mas[i] << ', ';
//}


//#include <iostream>
//using namespace std;
//
//void init(int arr[], int count);
//
//int main()
//{
//	int arr[5];
//	init(arr, 5);
//	for (int i = 0; i < 5; i++)
//		cout << arr[i] << ' ';
//	return 0;
//}
//
//void init(int mas[], int LENGTH)
//{
//	for (int i = 0; i < LENGTH; i++)
//		mas[i] = i + 10;
//}


//#include <iostream>
//using namespace std;
//
//void Show(int z = 5, float x = 7.7, char y)
//{
//	cout << z << x << y;
//}
//
//int main()
//{
//	Show('W');
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//double Sum(double a, int b)
//{
//	cout << "Sum(double, int) ";
//	return a + b;
//}
//
//int Sum(int a, double b)
//{
//	cout << "Sum(int, double) ";
//	return a + b;
//}
//int main()
//{
//	cout << Sum(12, 5);
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 45;
//	int* ptr = &a;
//	int* ptr2 = ptr;
//	cout << *ptr2 - *ptr;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int* ptr;
//	int arr[] = { 1, 2, 3 };
//
//	for (int i = 0; i < 3; i++) {
//		cout << *(arr + i);
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	long a = 23;
//	int *ptr = &a;
//	int b = 11;
//	long *ptr2 = &b;
//	cout << *ptr - *ptr2;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int* ptr;
//	int arr[] = { 1, 2, 3 };
//	ptr = arr;
//	for (int i = 0; i < 3; i++) {
//		cout << *ptr;
//		ptr += 1;
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 45;
//	int* ptr1 = &a;
//	int& ptr2 = a;
//	cout << ptr1 << endl;
//	cout << ptr2;
//	return 0;
//}


//#include <iostream>
//
//int main()
//{
//	int* x = new int(1);
//	std::cout << sizeof(x) << std::endl;
//	delete x;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 45;
//	int* ptr = a;
//	cout << ptr;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int var = 10;
//	cout << "var = " << var << "\n";
//	int* pVar = &var;
//	pVar = 9;
//	cout << "var = "
//		<< *pVar << "\n";
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//int main()
//{
//	int ar[10] = { 1, 2, 3 };
//	int* ptr = ar;
//	int* ptr2 = &ar[10];
//	cout << ptr2 - ptr;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* b = new int[3];
//	*b = 10;
//	*(b + 1) = 12;
//	*(b + 2) = 14;
//	b = a;
//	delete[] b;
//	return 0;
//} 


//#include <iostream>
//using namespace std;
//int* f1(int LENGTH)
//{
//	int* mas = new int[LENGTH];
//	for (int i = 0; i < LENGTH; i++)
//	{
//		mas[i] = i + 1;
//	}
//	return mas;
//}
//void f2(int* mas, int LENGTH)
//{
//	for (int i = 0; i < LENGTH; i++)
//	{
//		cout << mas[i] << ' ';
//	}
//}
//int* f3(int* mas)
//{
//	delete[] mas;
//	return NULL;
//}
//int main()
//{
//	int LENGTH = 10;
//	int* mas = f1(LENGTH);
//	f2(mas, LENGTH);
//	f3(mas);
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//void func(int* ptr) {
//	int a = 10;
//	ptr = &a;
//}
//int main() {
//	int* p = 0;
//	func(p);
//	*p = 23;
//	cout << *p;
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//void func(int*& ptr) {
//	int a = 10;
//	ptr = &a;
//}
//int main() {
//	int* p = 0;
//	func(p);
//	cout << *p << endl;
//	cout << p;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int* pInt;
//	*pInt = 9;
//
//	cout << "pInt: " << *pInt;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int b = 9;
//	int* pInt = &b;
//
//	cout << "pInt: " << pInt;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int z[5] = { 1, 2, 3, 4, 5 };
//	int* zPtr = &z;
//	for (int i = 0; i < 5; i++)
//		cout << *(zPtr + i) << ' ';
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num = 100, rez = 10;
//	int* numPtr = &num;
//	++* numPtr;
//	rez *= *numPtr;
//	cout << rez;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main() {
//
//	char str2[3];
//
//	str2[0] = "b";
//	str2[1] = "e";
//	str2[2] = "e";
//
//	cout << str2;
//	return 0;
//}


//using namespace std;
//
//int main() {
//	char str[] = "wow";
//	char str2[3];
//
//	for (int i = 0; i < 3; i++)
//		str2[i] = str[i];
//
//	cout << str2;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int Summa(int a, int b) {
//	return a + b;
//}
//
//int Mult(int a, int b) {
//	return a * b;
//}
//
//int Action(int a, int b, int ch, int (*ptr)(int, int)) {
//
//	return ch == 1 ? ptr(a, b) : ptr(a, b);
//}
//int main() {
//
//	cout << Action(3, 4, 2, Summa);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main() {
//
//	char str[] = { 65, 66, 67, '\0' };
//
//	cout << str;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int Summa(int a, int b) {
//	return a + b;
//}
//
//int Mult(int a, int b) {
//	return a * b;
//}
//
//
//int main() {
//	int (*ptr)(int, int) = Summa;
//
//	cout << sizeof(ptr);
//	cout << sizeof(Summa);
//	return 0;
//}



//#include<iostream>
//#include <stdio.h>
//using namespace std;
//
//typedef int (*intMax)(int, int);
//typedef double (*doubleMin)(double, double);
//
//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//double Min(double a, double b) {
//	return a > b ? b : a;
//}
//
//int main() {
//	void* ptr;
//	void* ptr2;
//
//	(intMax&)ptr = Max;
//	(doubleMin&)ptr2 = Min;
//
//	cout << ((intMax)ptr)(1, 2) << "  " << ((doubleMin)ptr2)(1.1, 2.1);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main() {
//	char str[3] = "sun";
//	cout << str[0] << str[1] << str[2];
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void Copy(int src[], int dest[]) {
//	int LENGTH = sizeof(src) / sizeof(int);
//	for (int i = 0; i < LENGTH; i++)
//	{
//		dest[i] = src[i];
//	}
//}
//
//int main() {
//	int src[5] = { 1,2,3,4,5 };
//	int dest[5] = { 0 };
//	Copy(src, dest);
//	for (int i = 0; i < 5; i++)
//		cout << dest[i] << " ";
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int Summa(int a, int b) {
//	return a + b;
//}
//
//int Mult(int a, int b) {
//	return a * b;
//}
//
//int Action(int a, int b, int ch, int (*ptr)(int, int)) {
//
//	return ch == 1 ? ptr(a, b) : ptr(a, b);
//}
//int main() {
//
//	void* ptr = Summa;
//	cout << ptr(1, 2);
//
//	return 0;
//}


//#include<iostream>
//#include <stdio.h>
//using namespace std;
//void Alloc(int* ptr, int LENGTH) {
//	ptr = new int[LENGTH];
//	if (!ptr)
//	{
//		cout << "Error";
//		exit(EXIT_FAILURE);
//	}
//}
//void Init(int* arr, int LENGTH, int val) {
//	for (int i = 0; i < LENGTH; i++)
//	{
//		arr[i] = val;
//	}
//}
//void Show(int* arr, int LENGTH) {
//	for (int i = 0; i < LENGTH; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//}
//int main() {
//	int* ptr = 0;
//	const int LENGTH = 5;
//
//	Alloc(ptr, LENGTH);
//	Init(ptr, LENGTH, 3);
//	Show(ptr, LENGTH);
//
//	delete[] ptr;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char str[20] = "Red color";
//	char* ptr = new char[strlen(str) + 1];
//	strcpy(ptr, "Blue");
//	strcat(ptr, str);
//	cout << ptr << '\t' << str;
//	delete[] ptr;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//char str[3] = "ABC";
//	//char str[] = "some str";
//	//char str[1] = 'A';
//	//char str[] = { 'A', 'b', 'c', 'd', '\0' };
//	//char str[] = 'str';
//	//char str[];
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char str[20] = "Unknown text\n";
//	char str2[] = "text\n";
//	if (strcmp(str, str2))
//		cout << "TEXT";
//	else cout << "Failed";
//	return 0;
//}


//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char str[] = "To be or not to be";
//	cout << strstr(str, "be");
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char str[20] = { 0 }, str2[25];
//	for (int i = 0; i < 5; i++)
//	{
//		str[i] = 'A' + i;
//		str2[i] = 'a' + i;
//	}
//	cout << str << '\t' << str2 << '\n';
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char str[] = "ABC";
//	char str2[] = "abc";
//	int i = 0;
//	while (str[i] != '\0') {
//		cout << (char)(str2[i] - str[i]);
//		i++;
//	}
//
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char str[15] = "Some string";
//	str[4] = '\0';
//	cout << str;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char str[20] = "Some string";
//	char* ptr = str + 7;
//	cout << ptr;
//	return 0;
//}


//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//	//char str[20];
//	//itoa(65, str, 8);
//	//cout << str;
//	char arr[] = "\t\tHello";
//	cout << sizeof(arr);
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int rows = 3, cols = 5;
//	int** mas = new int* [rows];
//	int i;
//	for (i = 0; i < rows; i++)
//		mas[i] = new int[cols];
//
//	cout << mas[i] << "\t";
//
//	for (i = 0; i < cols; i++)
//		delete[] mas[i];
//	delete[] mas;
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int rows, cols;
//	cin >> rows >> cols;
//	int* mas = new int[rows];
//	for (int i = 0; i < rows; i++)
//		mas[i] = new int[cols];
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int** mas = new int* [3];
//	for (int i = 0; i < 3; i++)
//	{
//		mas[i] = new int[3];
//		for (int j = 0; i < 3; j++)
//			mas[i][j] = i * 3 + j;
//	}
//	for (int i = 0; i < 3; i++)
//		cout << mas[i][i] << '\t';
//
//	for (int i = 0; i < 3; i++)
//		delete[] mas[i];
//	delete[] mas;
//
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int ar[2][2] = { { 1, 2 }, { 3, 4 } };
//	int** mas = ar;
//
//	for (int i = 0; i < 2; i++)
//		for (int j = 0; j < 2; j++)
//			cout << mas[i][j] << '\t';
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int** mas = new int* [3];
//	for (int i = 0; i < 3; i++)
//	{
//		mas[i] = new int[3];
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		*(mas + i) = i--;
//		cout << mas[i][i] << '\t';
//	}
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//	int rows = 5, cols = 3, count = 0;
//	int** mas = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		mas[i] = new int[cols];
//		for (int j = 0; j < cols; j++, count++)
//			mas[i][j] = count;
//	}
//	for (int i = 0; i < rows; i++)
//		cout << *mas[i] << "\t";
//	for (int i = 0; i < rows; i++)
//		delete[]mas[i];
//	delete[]mas;
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int** mas = new int* [5];
//	for (int i = 0; i < 5; i++)
//	{
//		mas[i] = new int[5];
//		for (int j = 0; j < 5; j++)
//			mas[i][j] = i * 5 + j;
//	}
//	for (int i = 0; i < 5; i++)
//		cout << *&mas[i][i] << '\t';
//
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int* ar1 = new int[4];
//	int* ar2 = new int[3];
//	int* ar3 = new int[2];
//	for (int i = 0; i < 4; i++)
//		ar1[i] = i + 2;
//	for (int i = 0; i < 3; i++)
//		ar2[i] = i + 1;
//	for (int i = 0; i < 2; i++)
//		ar3[i] = i;
//
//	for (int i = 0; i < 2; i++) {
//		cout << ar3[i];
//	}
//	for (int i = 0; i < 3; i++) {
//		cout << ar2[i];
//	}
//
//	for (int i = 0; i < 4; i++) {
//		cout << ar1[i];
//	}
//	delete[] ar3;
//	delete[] ar2;
//	delete[] ar1;
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int rows, cols;
//	cin >> rows >> cols;
//	int* mas = new int[rows];
//	for (int i = 0; i < rows; i++)
//		mas[i] = new int[cols];
//
//	return 0;
//}




//#include<iostream>
//using namespace std;
//
//void Show(int* arr, int size) {
//	for (int i = 0; i < size; i++) {
//		cout << arr[i];
//	}
//}
//void Init(int* arr, int size, int val) {
//	for (int i = 0; i < size; i++)
//		arr[i] = val;
//}
//void Alloc(int** arr, int size) {
//	*arr = new int[size];
//}
//
//int main() {
//	int* arr;
//
//	Alloc(&arr, 3);
//	Init(arr, 3, 7);
//	Show(arr, 3);
//
//	delete[]arr;
//	return 0;
//}




//#include<iostream>
//using namespace std;
//
//void Create2D(int** arr, int rows, int cols) {
//	arr = new int* [rows];
//	for (int i = 0; i < rows; i++)
//		arr[i] = new int[cols];
//
//}
//
//void Show2D(int** arr, int rows, int cols) {
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//}
//
//void Clean2D(int** arr, int rows) {
//	for (int i = 0; i < rows; i++) {
//		delete[]arr[i];
//	}
//
//	delete[]arr;
//}
//int main() {
//	int** arr;
//	const int rows = 2;
//	const int cols = 2;
//
//	Create2D(arr, rows, cols);
//
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			arr[i][j] = 8;
//		}
//	}
//
//	Show2D(arr, rows, cols);
//	Clean2D(arr, rows);
//
//	return 0;
//}






//#include<iostream>
//using namespace std;
//
//int** Create2D(int rows, int cols) {
//	int** arr = new int* [rows];
//
//	for (int i = 0; i < rows; i++)
//		arr[i] = new int[cols];
//
//	return arr;
//}
//
//void Clean2D(int** arr, int rows) {
//	for (int i = 0; i < rows; i++) {
//		delete[]arr[i];
//	}
//
//	delete[]arr;
//}
//
//int main() {
//
//
//	const int rows = 3;
//	const int cols = 4;
//
//	void** ptr = (void**)Create2D(rows, cols);
//	((int**)ptr)[0][0] = 1;
//	((int**)ptr)[1][0] = 2;
//
//	int** matr = (int**)ptr;
//	cout << ((int**)ptr)[1][0] << " " << matr[1][0];
//
//	Clean2D(matr, rows);
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main() {
//	char arr[] = "Sunny Day";
//	int len = strlen(arr);
//
//	char* ptr = new char[len + 1];
//	for (int i = 0; i < len; i++) {
//		ptr[i] = arr[len - i - 1];
//	}
//
//	cout << ptr;
//
//	delete[]ptr;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//void Create2D(int*** arr, int rows, int cols) {
//	*arr = new int* [rows];
//	for (int i = 0; i < rows; i++)
//		(*arr)[i] = new int[cols];
//
//}
//
//void Show2D(int** arr, int rows, int cols) {
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//}
//
//void Clean2D(int** arr, int rows) {
//	for (int i = 0; i < rows; i++) {
//		delete[]arr[i];
//	}
//
//	delete[]arr;
//}
//int main() {
//	int** arr;
//	const int rows = 2;
//	const int cols = 2;
//
//	Create2D(&arr, rows, cols);
//
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			arr[i][j] = 8;
//		}
//	}
//
//	Show2D(arr, rows, cols);
//	Clean2D(arr, rows);
//
//	return 0;
//}




//#include<iostream>
//using namespace std;
//
//void Show(int* arr, int size) {
//	for (int i = 0; i < size; i++) {
//		cout << arr[i];
//	}
//}
//void Create(int* arr, int size) {
//	arr = new int[size];
//}
//
//
//int main() {
//	int* arr;
//	Create(arr, 3);
//
//	for (int i = 0; i < 3; i++)
//		arr[i] = i;
//
//	Show(arr, 3);
//	delete[]arr;
//
//	return 0;
//}




//#include<iostream>
//using namespace std;
//
//int main() {
//	int** arr;
//
//	arr = new int* [3];
//	for (int i = 0; i < 3; i++)
//		arr[i] = new int[4];
//
//	arr[0][0] = 1;
//	arr[2][3] = 1;
//	cout << arr[0][0] << " " << arr[2][3] << endl;
//
//	for (int i = 0; i < 4; i++) {
//		delete[]arr[i];
//	}
//
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main() {
//	int a = 3;
//	int& r = a;
//
//	int&& rr = r;
//	rr = 44;
//
//	cout << r << " " << rr << " " << a;
//
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main() {
//	int* ptr;
//	int a = 4;
//	ptr = &a;
//	int** ptr2 = &ptr;
//	int**& rptr = ptr2;
//
//	**rptr = 7;
//	cout << **rptr << **ptr2 << *ptr << a;
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//struct str
//{
//	char* txt;
//	int size;
//} S;
//
//int main()
//{
//	char* ptr = new char[100];
//	strcpy_s(ptr, 9, "Some text");
//
//	S.txt = ptr;
//	delete[] ptr;
//	cout << S.txt << "\t" << S.size;
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//struct A {
//	int a;
//	int b;
//};
//
//void SetValues(A obj, int a, int b) {
//	obj.a = a;
//	obj.b = b;
//}
//
//int main() {
//
//	A obj;
//
//	obj.a = 1;
//	obj.b = 2;
//
//	SetValues(obj, 4, 5);
//	cout << obj.a << " " << obj.b;
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//typedef struct A RealA;
//
//struct A {
//	int x;
//	int y;
//};
//
//void ShowValue(A obj) {
//	cout << obj.x << " " << obj.y;
//}
//
//int main() {
//
//	RealA obj;
//
//	obj.x = 1;
//	obj.y = 2;
//
//	ShowValue(obj);
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//struct P
//{
//	int a;
//	double b;
//};
//
//void fill(P* obj) {
//	obj = new P;
//	obj->a = 10;
//	obj->b = 3.44;
//}
//int main()
//{
//	P* o = nullptr;
//	fill(o);
//	cout << o->a << "\t" << o->b << "\n";
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//struct str
//{
//	char* txt;
//	int size;
//};
//
//int main()
//{
//
//	str* obj = new str;
//	obj->txt = new char[20];
//	char tstr[] = "Text from obj";
//
//	strcpy_s(obj->txt, strlen(tstr), tstr);
//	str* obj2 = obj;
//	delete obj;
//	cout << obj2->txt;
//	delete[] obj->txt;
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//struct A {
//	int a;
//	struct B {
//		int b;
//	};
//};
//
//
//int main() {
//
//	A obj;
//
//	obj.a = 2;
//	obj.b = 3;
//
//	cout << obj.a << " " << obj.b;
//
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//struct A {
//	int a;
//	int b;
//};
//
//int main() {
//
//	A obj, obj2;
//
//	obj.a = 1;
//	obj.b = 2;
//
//	obj2.a = 1;
//	obj2.b = 2;
//
//	if (obj == obj2) {
//		cout << "Equal";
//	}
//	else {
//		cout << "Not equal";
//	}
//
//	return 0;
//}





#include <iostream>
using namespace std;

//struct person {
//	char name[20], surname[20];
//	int age;
//} one = { "Ivan", "Sidorov", 50 }, *second = &one;
//// one это один обьект а second это указатель обьект
//// а значек амперсента говорит 
//// о том что в указатель на обьект переносятся все данные этого обьекта
//
//int main()
//{
//	cout << (*second).name << "\t";// = second->name
//	cout << (*second).surname << "\t";// = second->surname
//	cout << (*second).age << "\n";// = second->age
//
//	return 0;
//}





//#include <iostream>
//using namespace std;
//
//struct test {
//	int a;
//	double b;
//	char arr[3];
//};
//
//int main()
//{
//	cout << sizeof(test);
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//struct P
//{
//	char* str;
//	int a;
//};
//
//P* create() {
//	P* ptr = new P;
//	ptr->str = new char[6];
//	strcpy_s(ptr->str, 6, "Hello");
//	ptr->a = 10;
//	return ptr;
//}
//int main() {
//	P* o = create();
//	cout << o->str << "\t" << o->a << "\n";
//	return 0;
//}



//
//#include <iostream>
//using namespace std;
//
//#define SUB_STR(str1,str2) str1-str2
//
//int main()
//{
//	cout << SUB_STR("Hello", "world");
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//#define FUNC
//
//#ifdef FUNC
//void f() {
//	cout << "Hello\n";
//}
//#elif
//void f() {
//	cout << "Preved\n";
//}
//#endif
//
//int main() {
//	f();
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//#ifndef NAME
//#define NAME 100 
//#else
//cout << "Already defined";
//#endif
//
//#undef NAME
//
//int main() {
//	cout << NAME;
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//#define MAKE_INT_ARRAY(name,size) int name[size]; 
//
//int main() {
//	int s = 5;
//	MAKE_INT_ARRAY(arr, s);
//	for (int i = 0; i < s; i++) {
//		arr[i] = i;
//		cout << arr[i] << " ";
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//#define AAA
//
//
//int main() {
//
//#ifdef AAA
//	cout << "A";
//#else
//	cout << "!A";
//#endif
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//#define SOME_VALUE 300
//
//int main() {
//	int ar[SOME_VALUE] = { 1, 3, 3 };
//	cout << sizeof(ar);
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//#define sum(a,b) a+b
//
//int main() {
//	cout << sum(3, 4) << "\t";
//	int a = 10;
//	int b = 100;
//	int c = sum(a, b);
//	cout << c;
//	return 0;
//}



//#include <iostream>
//using namespace std;
//#define DELETE_ARRAY(memblock) delete[] memblock; cout << "Deleted ";
//
//int main() {
//	int* ar = new int[2];
//	ar[0] = 1;
//	ar[1] = 2;
//	int* ptr = ar;
//	DELETE_ARRAY(ar);
//	cout << ptr[0];
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//#define PRINT(arg) cout << arg << "\t";
//
//int main() {
//	PRINT(100);
//	PRINT("Hello");
//	int a = 6;
//	PRINT(a);
//	int* ptr = &a;
//	PRINT(*ptr);
//	return 0;
//}



//#include <iostream>
//using namespace std;
//#define max 100
//
//int main
//{
//	double max = 3.41;
//	cout << max << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main() {
//
//	char str[] = "test";
//	printf("%d", str);
//
//	cout << endl << &str;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main() {
//	int a;
//
//	scanf("%d", a);
//	printf("%d", a);
//
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main() {
//	int a = 3;
//	int b = 2;
//
//	printf("%o", (a | b) << 2);
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int A() {
//	cout << "A";
//	return 0;
//}
//
//int B() {
//	cout << "B";
//	return 1;
//}
//
//int main() {
//
//	if (A() & B()) {
//		cout << "C";
//	}
//
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main() {
//	int a = 2;
//	int b = a << 1;
//	cout << b;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main() {
//	int a = 2;
//	int b = 3;
//	int c = 5;
//	cout << ((a & b) | c);
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main() {
//	int a = 2;
//	int b = 3;
//	cout << (a ^ b);
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int a = 3;
//	int b = 2;
//	int c = (b << 2) | (a << 3);
//	printf("%x", c);
//	return 0;
//
//}



//#include<iostream>
//using namespace std;
//
//int main() {
//	int a = 7;
//	int b = 3;
//	cout << (a | b);
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main() {
//	int a = 16;
//	int b = a >> 1;
//	cout << b;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main() {
//
//	printf("%d", ((7 | 2) & 4) && 1);
//	return 0;
//
//}//



//#include<iostream>
//using namespace std;
//
//int main() {
//	int a = 3;
//	int b = 1;
//	cout << (a & b);
//	return 0;
//}