//#include <iostream>
//
//using namespace std;
//using elementType = int;
//
//
//auto outputConsole(int Outputarray[], const int length) -> void;
//
//
//auto arrayFilling(int arrayFilling[], const int length) -> void;
//
////template <typename T>
////auto notRepeatingAnElement(T* arrayA, T* arrayB) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* Задание 1. Даны два массива: А[M] и B[N] (M и N вводятся
//	с клавиатуры). Необходимо создать третий массив минимально
//	возможного размера, в котором нужно собрать
//	элементы массива A, которые не включаются в массив B,
//	без повторений. */
//
//	//int lengthM, lengthN;
//	cout << "Введите M - длинну массива А: ";
//	const int lengthM = 102;
//	cout << "Введите N - длинну массива B: ";
//	const int lengthN = 102;
//	int arrayA[1025], arrayB[1025];
//	//elementType * arrayB;//*resultArray, resultArray = new elementType[]
//	//try
//	//{
//	//	//arrayA = new elementType[lengthM + 1];// +1 так как в конце терминальный ноль
//	//	//arrayB = new elementType[lengthN + 1];
//	//}
//	//catch (const bad_alloc& exception)
//	//{
//	//	cerr << "Allocation failed: " << exception.what() << endl;
//	//	return 1;
//	//}
//	cout << "Массив А: " << endl;
//	arrayFilling(arrayA, lengthM);
//	outputConsole(arrayA, lengthM);
//	cout << endl;
//
//	cout << "Массив B: " << endl;
//	arrayFilling(arrayB, lengthN);
//	outputConsole(arrayB, lengthN);
//	cout << endl;
//
//
//	//notRepeatingAnElement(arrayA, arrayB);
//
//
//
//	//delete[] arrayA, arrayB;
//	return 0;
//}
//
//auto outputConsole(int Outputarray[], const int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//		cout << Outputarray[ii] << ' ';
//}
//
//
//auto arrayFilling(int arrayFilling[], const int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//		arrayFilling[ii] = rand() % 90 + 10;
//}
//
////template <typename T>
////auto notRepeatingAnElement(T* arrayA, T* arrayB) -> void
////{
////
////
////
////}



//#include <iostream>
//#include <limits>
//
//using namespace std;
//using elementType = int;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//
//	long long number = LLONG_MAX;
//
//	cout << number;
//
//	int num1 = 1;
//	for (int ii = 1; ii < 300; ii++)
//	{
//		num1 += ii * num1 / (ii * ii);
//		cout << num1 << endl;
//	}
//
//	const int length = 15;// так как размер статического массива определяется еще до компиляции
//	int array1[length];
//
//	int digit1 = 0;
//	while (digit1 < length    )
//	{
//		int i = rand() % 20;
//		array1[digit1] = i;
//		cout << array1[digit1] << '\t';
//		++digit1;
//	}
//	cout << endl;
//
//	for (int ii = 0; ii < length; ii++)
//		cout << array1[ii] << endl;
//
//	int array2[length] = {2, 33, 5, 111, 707};
//
//	for (int ii = 0; ii < length; ii++)
//		cout << array2[ii] << '\t';
//
//	int counter1 = 25;
//	do
//	{
//		int num1 = rand()% 21 - 10;
//		int num2 = rand()% 21 - 10;
//		(num1 > num2) ? (cout << "число 1 больше числа 2") : (cout << "число 2 больше числа 1");
//		cout << endl;
//	} while (counter1-- > 10);
//
//	return 0;
//}



//#include <iostream>
//
//using namespace std;
//using elementType = int;
//
//void foo(int* a, int* b)
//{
//	*a += 5;
//	*b += 5;
//}
//
//void foo(int& a, int& b)
//{
//	a += 5;
//	b += 5;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	int a = 0, b = 0;
//
//	foo(&a, &b);
//
//	cout << "a = " << a << "\nb = " << b << endl;
//
//	return 0;
//}


//
//#include <iostream>
//
//using namespace std;
//const int LENGTH = 1024;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	
//	/*for (тип переменная : последовательность)
//	{
//		инструкции;
//	}*/
//	char arrayChar[LENGTH] = {"обычная последовательность 12345..."};//так же при иницализации строки в символьный массив в конце добавиться 
//	// терминальный 0, который говорит о завершеннии строки
//	for (char number1 : arrayChar)//вместо char можно так же написать auto
//	{
//		cout << number1 << '\n';
//	}
//	// auto - это ключевое слово, которое вместо себя подставляет подходящий тип данных.
//
//	//в плюсах нет процедур, тут есть лишь функции и методы.
//
//	return 0;
//}


//#include <iostream>
//#include <string>
//#include <sstream>
//
//using namespace std;
//using elementType = double;
//
//template<typename T>
//T count1(T number1, T number2);//для функции можно и споьзовать и шаблонный тип данных
////но функция тогда должна что либо возвращать(нельзя void)
//
//template<typename T>//это функция для перевода числа в строку
//string count2(T number1, T number2);
//
//int main()
//{
//	system("chcp 1251");
//	
//	double a = 5.5;
//	double b = 10.10;
//	string strr = count2(a, b);
//	cout << endl <<strr;
//
//	return 0;
//}
//
//template<typename T>
//T count1(T number1, T number2)
//{
//	cout << number1 + number2;
//	return (number1 + number2);
//}
//
//template<typename T>
//string count2(T number1, T number2)
//{
//	cout << number1 + number2;
//	//ostringstream str1 << (number1 + number2);//так писать нельзя будет ошибка, сначала нужно
//	// обьявить наш обьект "str1"
//	ostringstream str1;
//	str1<< (number1 + number2);
//	return str1.str();
//}
//






//Задание №5 егэ КИМ № 25030012	
//for ii in range(0, 10 * *6) :
//    copy_ii = ii
//    s = ''
//    notation = 6
//    while ii > 0:
//	      s = str(ii % notation) + s
//		  ii = ii // notation
//
//	  if (s % 3 == 0) :
//		  s = s[:2 : ] + s
//	  elif(s % 3 != 0) :
//		  s2 = (s % 3) * 10
//		  s3 = ''
//        notation = 6
//        while s2 > 0:
//			  s3 = str(s2 % notation) + s3
//            s2 = s2 // notation
//
//	   s = s + s3
//
//	  result = int(s, 6)
//    if (result > 680) :
//        print(result)
//		  print(copy_ii)
//		  break



//Переписываем на С++
//#include <iostream>
//#include <string>
//#include <sstream>
////sstream — заголовочный файл с классами, функциями и переменными для организации работы со строками, 
//// через интерфейс потоков, в языке программирования C++.
//
//using namespace std;
//using elementType = int;
//
//template <typename T>
//string toString(T val)
//{
//	ostringstream oss;
//	oss << val;//обьект класса(ostringstream) oss считывает передоваемое число val
//	return oss.str();//преобразует числов в строку и возвращает обратно
//}
//
//template<typename T>
//T fromString(const string& s)
//{
//	istringstream iss(s);
//	T res;
//	iss >> res;
//	return res;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	//static_cast<double>
//	double s1;
//	string s = "";
//	int number = 555;
//	int notation = 2;
//	while (number > 0)
//	{
//		s1 = (number % notation);
//		cout << s1 << endl;
//		s = toString(s1) + s;
//		number = number / notation;
//	}
//
//	for (int jj = 0; jj < s.length(); jj++)
//	{
//		cout << s[jj];
//	}
//
//	return 0;
//}
//1000101011


//#include <iostream>
//#include <string>
//
//using namespace std;
//const int SIZE = 51;
//
//int main()
//{
//	for (int ii = 1; ii < SIZE; ii++)
//		cout << "number - " << ii << '.' << endl;
//
//
//
//
//
//	return 0;
//}





//многопоточное программирование:
//#include <iostream>
//#include <thread>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	cout << "Начало: " << endl;
//	this_thread::sleep_for(chrono::milliseconds(2500));
//	cout << this_thread::get_id() << endl;
//	cout << "Конец. " << endl;
//
//	return 0;
//}












//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int a, b, c;
//    cin >> a >> b >> c;
//
//    cout << a + b + c;
//
//    return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//
//    int num1, num2, num3;
//    cin >> num1 >> num2 >> num3;
//
//    if (num1 == num2 and num2 == num3)
//        cout << 3;
//    else if (((num1 == num2) or (num1 == num3)) or ((num2 == num1) or (num2 == num3)) or
//        (num3 == num1) or (num3 == num2))
//        cout << 2;
//    else
//        cout << 0;
//
//
//    return 0;
//}
//
//










//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//
//    int num1, num2, num3, num4, res1, res2;
//    cin >> num1 >> num2 >> num3 >> num4;
//    if ((num1 + num2) % 2 == 0)
//        res1 = 1;
//    else
//        res1 = 0;
//
//    if ((num3 + num4) % 2 == 0)
//        res2 = 1;
//    else
//        res2 = 0;
//
//    if (res1 == res2)
//        cout << "YES";
//    else
//        cout << "NO";
//
//    return 0;
//}




//#include <iostream>
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int x;
//    std::cin >> x;
//    switch (x)
//    {
//    case 1:
//        std::cout << "Январь";
//        break;
//    case 2:
//        std::cout << "Февраль";
//        break;
//    case 3:
//        std::cout << "Март";
//        break;
//    case 4:
//        std::cout << "Апрель";
//        break;
//    case 5:
//        std::cout << "Май";
//        break;
//    case 6:
//        std::cout << "Июнь";
//        break;
//    case 7:
//        std::cout << "Июль";
//        break;
//    case 8:
//        std::cout << "Август";
//        break;
//    case 9:
//        std::cout << "Сентябрь";
//        break;
//    case 10:
//        std::cout << "Октябрь";
//        break;
//    case 11:
//        std::cout << "Ноябрь";
//        break;
//    case 12:
//        std::cout << "Декабрь";
//        break;
//    default:
//        std::cout << "вы ошиблись";
//    }
//    return 0;
//}



//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//    int x, y;
//    cin >> x >> y;
//    int max = (pow(x, y) >= pow(y, x)) ? pow(x, y) : pow(y, x);
//    cout << max;
//
//    return 0;
//}








//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int len, tmp_x, summ = 0;
//    cin >> len;
//
//    for (int ii = 0; ii < len; ii++)
//    {
//        cin >> tmp_x;
//        summ += tmp_x;
//    }
//    cout << summ;
//
//    return 0;
//}








//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//    int tmp_num, min_del;
//    cin >> tmp_num;
//
//    for (int ii = 2; ii < tmp_num; ii++)
//        if (tmp_num % ii == 0)
//        {
//            min_del = ii;
//            break;
//        }
//    cout << min_del;
//
//    return 0;
//}






//#include <iostream>
//using namespace std;
//int main() {
//    int i = 2, n;
//    cin >> n;
//    while (i <= n)
//    {
//        if (n % i == 0)
//        {
//            cout << i;
//            break;
//        }
//        i++;
//    }
//
//    return 0;
//}










//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//
//char* NumberToString(int number);
//
//int main()
//{
//	int number;
//	cin >> number;
//	cout << NumberToString(number);
//
//	return 0;
//}
//
//char* NumberToString(int number)
//{
//	char string[BUFFER_SIZE + 1] = "321321";//+1 для терминирующего нуля
//
//	int LENGTH = 1, numLenght = number, count = 0;
//
//	while ((numLenght /= 10) > 0)
//	{
//		LENGTH = LENGTH * 10;
//	}
//	//cout << LENGTH << endl;
//
//	for (int ii = number; ii > 0; ii %= LENGTH, count++, LENGTH /= 10)
//	{
//		string[count] = static_cast<char>((ii / LENGTH) + 48);
//		//+ 48 по таблице аски
//		cout << ii << ' ' << LENGTH << ' ' << count << ' '<< string[count] << endl;
//	}
//	return string;
//}







//не используя арифметики указателей
//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//
//char* NumberToString(long long int number, char* string);
//int count_length(char* str_num);
//
//int main()
//{
//	long long int number;
//	cin >> number;
//	char string[BUFFER_SIZE + 1];//+1 для терминирующего нуля
//	char* str = NumberToString(number, string);
//	//cout << str << ' ' << strlen(str) << endl;
//
//
//
//	cout << count_length(str);
//	
//	return 0;
//}
//
//char* NumberToString(long long int number, char* string)
//{
//	
//	long long int LENGTH = 1, numLenght = number, count = 0;
//
//	while ((numLenght /= 10) > 0)
//	{
//		LENGTH = LENGTH * 10;
//	}
//	
//	for (long long int ii = number; ii > 0; ii %= LENGTH, count++, LENGTH /= 10)
//	{
//		string[count] = static_cast<char>((ii / LENGTH) + 48);
//		//+ 48 по таблице аски
//	}
//
//	string[count] = '\0';
//
//	return string;
//}
//
//
//int count_length(char* str_num)
//{
//	int result = 0;
//	int length = strlen(str_num);
//	//cout << length << endl;
//	for (int ii = 0; ii < length; ii++)
//		result += static_cast<int>(str_num[ii] - 48);
//
//	return result;
//}



////используя арифметику указателей
//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//
//char* NumberToString(long long int number, char* string);
//int count_length(char* str_num);
//
//int main()
//{
//	long long int number;
//	cin >> number;
//	char string[BUFFER_SIZE + 1];//+1 для терминирующего нуля
//	char* str = NumberToString(number, string);
//	cout << str << ' ' << strlen(str) << endl;
//
//
//
//	cout << count_length(str);
//
//	return 0;
//}
//
//char* NumberToString(long long int number, char* string)
//{
//
//	long long int LENGTH = 1, numLenght = number, count = 0;
//
//	while ((numLenght /= 10) > 0)
//	{
//		LENGTH = LENGTH * 10;
//	}
//
//	for (long long int ii = number; ii > 0; ii %= LENGTH, string++, LENGTH /= 10)
//	{
//		*string = static_cast<char>((ii / LENGTH) + 48);
//		//+ 48 по таблице аски
//	}
//
//	string[count] = '\0';
//
//	return string;
//}
//
//
//int count_length(char* str_num)
//{
//	int result = 0;
//	while(*str_num != '\0')
//	{ 
//		result += *str_num - '0';
//		str_num++;
//	}
//
//	return result;
//}








//#include <iostream>
//using namespace std;
//
//static const int BUFFER_SIZE = 1024;
//
//int main()
//{
//	int number;
//	cin >> number;
//
//	char string[BUFFER_SIZE + 1];//+1 для терминирующего нуля
//	int LENGTH = 1, numLenght = number, count = 0;
//
//	while ((numLenght /= 10) > 0)
//	{
//		LENGTH = LENGTH * 10;
//	}
//
//	for (int ii = number; ii > 0; ii %= LENGTH, count++, LENGTH /= 10)
//	{
//		string[count] = static_cast<char>((ii / LENGTH) + 48);
//		//cout << ii << ' ' << LENGTH << ' ' << count << endl;
//		//+ 48 по таблице аски
//	}
//	string[count] = '\0';
//	//char* s = string;
//	//cout << s << endl;
//
//
//	//cout << strlen(string) << endl;
//	int result = 0;
//	for (int ii = 0; ii < strlen(string); ii++)
//	{
//		//cout << string[ii] << ' ';
//		//cout << static_cast<int>(string[ii] - 48) << endl;
//		result += static_cast<int>(string[ii] - 48);
//	}
//
//	cout << result;
//
//	return 0;
//}







//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int len;
//    cin >> len;
//    char string[1024 + 1], tmp_number;
//
//    int ii = 0;
//    for (; ii < len; ii++)
//    {
//        cin >> tmp_number;
//        string[ii] = tmp_number;
//    }
//    string[ii] = '\0';
//    for (int jj = len - 1; jj >= 0; jj--)
//        cout << string[jj] << endl;
//
//    return 0;
//}




//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int a, b;
//    cin >> a;
//    cout << a;
//    cin >> b;
//    do
//    {
//        if (a == b)
//            cout << " " << b;
//        else
//        {
//            a = b;
//            cout << endl << b;
//        }
//        cin >> b;
//    } while (b != 0);
//    return 0;
//}









//#include <iostream>
//using namespace std;
//
//int min_number(int x, int y, int z);
//
//int main()
//{
//    int a, b, c;
//    cin >> a >> b >> c;
//    cout << min_number(a, b, c);
//    return 0;
//}
//
//int min_number(int x, int y, int z)
//{
//    int r = min(x, y);
//    return min(r, z);
//}







//#include <iostream>
//using namespace std;
//int sumOfDigits(int num)
//{
//    int res = 0;
//    for (; num > 0; num /= 10)
//        res += num % 10;
//    return res;
//}
//
//int main() {
//    int num;
//    std::cin >> num;
//    int sum = sumOfDigits(num);
//    cout << sum << endl;
//    return 0;
//}







//#include <iostream>
//
//int main()
//{
//    int n;
//    std::cout << "n = ";
//    std::cin >> n; // ввели размерность массива
//    int* a = new int[n]; // создали и заполнили массив
//    //a это ссылка
//
//    for (int i = 0; i < n; i++)
//    {
//        std::cout << "a[" << i << "] = ";
//        std::cin >> a[i];
//    }
//    int k;
//    std::cout << "k = ";
//    std::cin >> k; // ввели номер удаляемого элемента
//    // если номер отрицательный или больше номера последнего
//    // элемента, то выводим сообщение об ошибке
//    if (k < 0 || k > n - 1)
//    {
//        std::cout << "error";
//        // иначе выполняем сдвиг элементов массива
//    }
//    else
//    {
//        for (int i = k; i < n - 1; i++)
//        {
//            a[i] = a[i + 1];
//            n--; // уменьшаем текущую размерность массива
//        }
//        for (int i = 0; i < n; i++)
//        {
//            // выводим измененный массив на экран
//            std::cout << a[i] << "\t";
//        }
//    }
//    delete[] a;
//    return 0;
//}












//#include <iostream>
//using namespace std;
//
//using ElementType = int;
//
//int main()
//{
//    int len = 5, k;
//    
//    ElementType* array = new ElementType[len];
//
//    for (int ii = 0; ii < len; ii++)
//        cin >> array[ii];
//    cout << endl;
//    cin >> k;
//    cout << endl;
//
//    for (int ii = k; ii < len - 1; ii++)
//        array[ii] = array[ii + 1];
//
//    for (int ii = 0; ii < len - 1; ii++)
//        cout << array[ii] << endl;
//
//    delete[] array;
//    return 0;
//}









//#include <iostream>
//using namespace std;
//
//using ElementType = int;
//
//int main()
//{
//    int len = 7;
//
//    ElementType* array = new ElementType[len];
//
//    for (int ii = 0; ii < len; ii++)
//        cin >> array[ii];
//
//    for (int jj = 0; jj < len; jj++)
//        if (array[jj] <= array[len-1])
//            cout << array[jj] << endl;
//
//    delete[] array;
//    return 0;
//}






//#include <iostream>
//using namespace std;
//
//using ElementType = int;
//
//int main()
//{
//    int len = 8, k1, k2;
//
//    ElementType* array = new ElementType[len];
//
//    for (int ii = 0; ii < len; ii++)
//        cin >> array[ii];
//
//    cin >> k1 >> k2;
//    int counter = 0;
//    cout << endl;
//
//    for (int jj = 0; jj < len; jj++)
//    {
//        if (jj != k1 and (counter == abs(k2 - k1 + 1) or counter == 0))
//            cout << array[jj] << endl;
//        else
//            counter++;
//    }
//        
//
//    delete[] array;
//    return 0;
//}





//#include <iostream>
//using namespace std;
//
//using ElementType = int;
//
//int main()
//{
//    int len = 7, mx = 0;
//
//    ElementType* array = new ElementType[len];
//
//    for (int ii = 0; ii < len; ii++)
//    {
//        cin >> array[ii];
//        if (array[ii] > mx)
//            mx = array[ii];
//    }
//
//    for (int ii = 0; ii < len; ii++)
//        if (array[ii] != mx)
//            cout << array[ii] << endl;
//
//    delete[] array;
//    return 0;
//}









//#include <iostream>
//using namespace std;
//
//using ElementType = int;
//
//int main()
//{
//    int len = 7, k;
//
//    ElementType* array = new ElementType[len];
//
//    for (int ii = 0; ii < len - 1; ii++)
//        cin >> array[ii];
//
//    cin >> k;
//
//    for (int ii = 0; ii < len - 1; ii++)
//    {
//        if (array[ii] % 2 == 0)
//        {
//            int tmp = array[ii];
//            array[ii] = k;
//            k = array[ii + 1];
//            array[ii + 1] = tmp;
//
//            for (int jj = ii+1; jj < len - 1; jj++)
//            {
//                tmp = array[jj+1];
//                array[jj+1] = k;
//                k = tmp;
//            }
//        }
//    }
//
//    for (int ii = 0; ii < len; ii++)
//        cout << array[ii] << endl;
//
//
//    delete[] array;
//    return 0;
//}








//#include <iostream>
//using namespace std;
//
//using ElementType = int;
//
//int main()
//{
//    int len = 6, k;
//
//    ElementType* array = new ElementType[len];
//
//    for (int ii = 0; ii < len; ii++)
//        cin >> array[ii];
//
//    cin >> k;
//
//
//
//
//    for (int ii = 0; ii < len; ii++)
//    {
//        if (array[ii] % 2 == 0)
//            cout << k << endl;
//        cout << array[ii] << endl;
//    }
//
//
//    delete[] array;
//    return 0;
//}









//#include <iostream>
//using namespace std;
//
//using ElementType = int;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int len = 8, k, tmp_lat_num = 0;
//
//    ElementType* array = new ElementType[len];
//
//    for (int ii = 0; ii < len - 1; ii++)\
//    {
//        cin >> array[ii];
//        if (array[ii] > 0)
//            tmp_lat_num = ii;
//    }
//
//    cin >> k;
//
//    for (int ii = 0; ii < len - 2; ii++)
//    {
//        if (tmp_lat_num == ii)
//        {
//            for (int jj = len - 1; jj > tmp_lat_num; jj--)
//                array[jj] = array[jj - 1];
//            break;
//        }
//    }
//    array[++tmp_lat_num] = k;
//
//    for (int ii = 0; ii < len; ii++)
//        cout << array[ii] << endl;
//
//
//    delete[] array;
//    return 0;
//}









//Вариант через ссылки без итераторов. При этом используя длинну массива.
//#include <iostream>
//#include <vector>
//
//using namespace std;
//using ElementType = int;
//
//void removing_even_numbers(vector<ElementType>& myVector, int& len);
//
//int main()
//{
//    int len;
//    cin >> len;
//    vector<ElementType> myVector(len);
//
//    for (int ii = 0; ii < len; ii++)
//        cin >> myVector[ii];
//
//    removing_even_numbers(myVector, len);
//
//    for (int ii = 0; ii < len; ii++)
//        cout << myVector[ii] << endl;
//
//    return 0;
//}
//
//
//void removing_even_numbers(vector<ElementType>& myVector, int& len)
//{
//    for (int ii = len - 1; ii >= 0; ii--)
//        if (myVector[ii] % 2 == 0)
//        {
//            myVector.erase(myVector.begin() + ii);
//            len = len - 1;
//        }
//}



////Вариант через ссылки без итераторов. И не используя длинну массива.
//#include <iostream>
//#include <vector>
//
//using namespace std;
//using ElementType = int;
//
//void removing_even_numbers(vector<ElementType>& myVector);
//
//int main()
//{
//    int len;
//    cin >> len;
//    vector<ElementType> myVector(len);
//
//    for (int ii = 0; ii < len; ii++)
//        cin >> myVector[ii];
//
//    removing_even_numbers(myVector);
//
//    for (int ii = 0; ii < myVector.size(); ii++)
//        cout << myVector[ii] << endl;
//
//    return 0;
//}
//
//
//void removing_even_numbers(vector<ElementType>& myVector)
//{
//    int counter = 0;
//    for (int ii = myVector.size() - 1; ii >= 0; ii--)
//        if (myVector[ii] % 2 == 0)
//            myVector.erase(myVector.begin() + ii);
//}



////Вариант через указатели без итераторов.
//#include <iostream>
//#include <vector>
//
//using namespace std;
//using ElementType = int;
//
//void removing_even_numbers(ElementType* myVector, int* len);
//
//int main()
//{
//    int len;
//    cin >> len;
//    vector<ElementType> myVector(len);
//
//    for (int ii = 0; ii < len; ii++)
//        cin >> myVector[ii];
//
//    removing_even_numbers(&myVector[0], &len);
//
//    for (int ii = 0; ii < len; ii++)
//        cout << myVector[ii] << endl;
//
//    return 0;
//}
//
//
//void removing_even_numbers(ElementType* myVector, int* len)
//{
//    int counter = 0;
//    for (int ii = 0; ii < *len;)
//    {
//        if (*(myVector + ii) % 2 == 0)
//        {
//            for (int jj = ii; jj < (*len) - 1; jj++)
//                *(myVector + jj) = *(myVector + jj + 1);
//            --(*len);
//        }
//        else
//            ii++;
//    }
//}









//for (size_t i = 0; i < len; ) {
//    if (*(myVector + i) % 2 == 0) {
//        // Сдвигаем все элементы после удаляемого на одну позицию влево
//        for (size_t j = i; j < len - 1; ++j) {
//            *(myVector + j) = *(myVector + j + 1);
//        }
//        --len; // Уменьшаем размер, так как один элемент удален
//    }
//    else {
//        ++i; // Переходим к следующему элементу, если текущий не четный
//    }
//}















//#include <iostream>
//#include <vector>
//
//using namespace std;
//using ElementType = int;
//const int BUFFER_SIZE = 10;
//
//int main()
//{
//    srand(static_cast<unsigned int>(time(nullptr)));
//    vector<ElementType> myVector(BUFFER_SIZE);
//
//    for (int ii = 0; ii < BUFFER_SIZE; ii++)
//        myVector[ii] = rand() % 100 - 0;
//
//    for (int ii = 0; ii < BUFFER_SIZE; ii++)
//        cout << myVector[ii] << ' ';
//    cout << endl;
//
//    cout << *min_element(myVector.begin(), myVector.end()) << endl;
//    cout << *max_element(myVector.begin(), myVector.end());
//
//    return 0;
//}
















//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//using ElementType = int;
//
//int main()
//{
//    int len;
//    cin >> len;
//    vector<ElementType> myVector(len);
//
//    for (int ii = 0; ii < len; ii++)
//        cin >> myVector[ii];
//
//    reverse(myVector.begin(), myVector.end());
//
//    for (int ii = 0; ii < len; ii++)
//        cout << myVector[ii] << endl;
//
//    return 0;
//}






//#include <iostream>
//#include <vector>
//
//using namespace std;
//using ElementType = int;
//
//int main()
//{
//    int len;
//    cin >> len;
//    vector<ElementType> myVector(len);
//
//    for (int ii = len - 1; ii >= 0; ii--)
//        cin >> myVector[ii];
//
//
//    for (int ii = 0; ii < len; ii++)
//        cout << myVector[ii] << endl;
//
//    return 0;
//}






//#include <iostream>
//#include <vector>
//
//using namespace std;
//using ElementType = int;
//const int BUFFER_SIZE = 14;
//
//template <typename T>
//auto Swap(T& a, T& b) -> void
//{
//    T tmp = a;
//    a = b;
//    b = tmp;
//}
//
//
//int main()
//{
//    vector<ElementType> myVector(BUFFER_SIZE);
//
//    for (int ii = 0; ii < BUFFER_SIZE; ii++)
//        cin >> myVector[ii];
//
//
//    for (int ii = 0; ii < myVector.size(); ii++)
//        for (int jj = 0; jj < myVector.size() - 1; jj++)
//            if (myVector[jj] > myVector[jj + 1])
//                Swap(myVector[jj], myVector[jj + 1]);
//
//    //for (int ii = 0; ii < myVector.size(); ii++)
//    //    cout << myVector[ii] << ' ';
//    //cout << endl;
//
//    for (int ii = 0; ii < myVector.size() - 1; ii++)
//        if (myVector[ii] == myVector[ii + 1])
//        {
//            myVector.erase(myVector.begin() + ii);
//            ii--;
//        }
//
//    for (int ii = 0; ii < myVector.size(); ii++)
//        cout << myVector[ii] << ' ';
//
//    return 0;
//}










//#include <iostream>
//#include <vector>
//#include <set>
//
//using namespace std;
//using ElementType = int;
//const int BUFFER_SIZE = 14;
//
//template <typename T>
//auto Swap(T& a, T& b) -> void
//{
//    T tmp = a;
//    a = b;
//    b = tmp;
//}
//
//
//int main()
//{
//    vector<ElementType> myVector(BUFFER_SIZE);
//
//    for (int ii = 0; ii < BUFFER_SIZE; ii++)
//        cin >> myVector[ii];
//
//    set<ElementType> newVector(myVector.begin(), myVector.end());
//    set<ElementType>::iterator it;
//
//    for (it = newVector.begin(); it != newVector.end(); it++)
//        cout << *it << ' ';
//
//    return 0;
//}














//#include <iostream>
//#include <vector>
//
//using namespace std;
//using ElementType = int;
//const int BUFFER_SIZE = 14;
//
//template <typename T>
//auto Swap(T& a, T& b) -> void
//{
//    T tmp = a;
//    a = b;
//    b = tmp;
//}
//
//
//int main()
//{
//    vector<ElementType> myVector(BUFFER_SIZE);
//
//    for (int ii = 0; ii < BUFFER_SIZE; ii++)
//        cin >> myVector[ii];
//
//
//    for (int ii = 0; ii < myVector.size(); ii++)
//        for (int jj = ii; jj < myVector.size() - 1; jj++)
//            if (myVector[ii] == myVector[jj + 1])
//            {
//                myVector.erase(myVector.begin() + jj + 1);
//                jj--;
//            }
//
//
//    for (int ii = 0; ii < myVector.size(); ii++)
//        cout << myVector[ii] << ' ';
//
//    return 0;
//}





//#include <iostream>
//#include <vector>
//
//using namespace std;
//using ElementType = int;
//const int BUFFER_SIZE = 10;
//
//template <typename T>
//auto Swap(T& a, T& b) -> void
//{
//    T tmp = a;
//    a = b;
//    b = tmp;
//}
//
//int main()
//{
//    vector<ElementType> myVector(BUFFER_SIZE);
//
//    for (int ii = 0; ii < BUFFER_SIZE; ii++)
//        cin >> myVector[ii];
//
//
//    for (int ii = 0; ii < myVector.size(); ii++)
//        for (int jj = ii; jj < myVector.size() - 1; jj++)
//            if (myVector[ii] == myVector[jj + 1])
//            {
//                myVector.erase(myVector.begin() + jj + 1);
//                jj--;
//            }
//
//    for (int ii = 0; ii < myVector.size(); ii++)
//        for (int jj = 0; jj < myVector.size() - 1; jj++)
//            if (myVector[jj] < myVector[jj + 1])
//                Swap(myVector[jj], myVector[jj + 1]);
//
//    for (int ii = 0; ii < myVector.size(); ii++)
//        cout << myVector[ii] << endl;
//
//    return 0;
//}






//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    char string[100], Delimeter;
//    cin >> Delimeter;
//
//    cin.getline(string, 100, Delimeter);
//    for (int ii = 0; string[ii] != '\0'; ii++)
//        cout << string[ii];
//
//    return 0;
//}





//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    char string[100], Delimeter = ' ';
//    cin.getline(string, 100);
//    cin >> Delimeter;
//
//
//    for (int ii = 0; string[ii] != Delimeter; ii++)
//        cout << string[ii];
//
//    return 0;
//}









//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    char string[1000];
//    cin.getline(string, 1000);
//
//    int len = 0;
//    for (int ii = 0; string[ii] != '\0'; ii++)
//        len++;
//
//    for (int ii = len - 1; ii >= 0; ii--)
//            cout << string[ii];
//
//    return 0;
//}








//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    char string[1000], digit_string[1000];
//    cin.getline(string, 1000);
//
//    double result = 0;
//    int counter = 0;
//
//    for (int ii = 0; ; ii++)
//    {
//        //нужно сделать этот вариант проверки самым первым, чтобы не срабатывал другой
//        if (string[ii] == '\0')
//        {
//            //дописываем конец строки
//            digit_string[++counter] = '\0';
//            result += strtod(digit_string, nullptr);
//            counter = 0;
//
//            //полностью очищаем массив, затирая все элементы Терминальный нолями, 
//            //чтобы в будущем не сбился счет при суммировании:
//            for (int jj = 0; digit_string[jj] != '\0'; jj++)
//                digit_string[jj] = '\0';
//
//            //тут специально выходим из цикла, так как пришлось убрать условие выхода из цикла
//            // чтобы попасть в этот else if
//            break;
//        }
//
//        // а теперь другой вариант проверки:
//        if (string[ii] != ' ')
//            digit_string[counter++] = string[ii];
//        else if (string[ii] == ' ')
//        {
//            //дописываем конец строки
//            digit_string[++counter] = '\0';
//            result += strtod(digit_string, nullptr);
//            counter = 0;
//
//            //полностью очищаем массив, затирая все элементы Терминальный нолями, 
//            //чтобы в будущем не сбился счет при суммировании:
//            for (int jj = 0; digit_string[jj] != '\0'; jj++)
//                digit_string[jj] = '\0';
//        }
//
//    }
//
//    cout << result;
//
//    return 0;
//}






//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string text;
//    getline(cin, text, '\n');
//    cout << text << endl;
//
//    int counter_hat = 0, counter_coat = 0, tmp_count1 = 0, tmp_count2 = 0;
//    string hat = "hat";
//    string coat = "coat";
//    for (int ii = 0, jj = 0, kk = 0; ii < text.size(); ii++)
//    {
//        if (hat[jj] == text[ii])
//        {
//            jj++;
//            tmp_count1++;
//        }
//        else
//        {
//            jj = 0;
//            if (tmp_count1 == 3)
//                counter_hat++;
//            tmp_count1 = 0;
//        }
//
//
//        if (coat[kk] == text[ii])
//        {
//            kk++;
//            tmp_count2++;
//        }
//        else
//        {
//            kk = 0;
//            if (tmp_count2 == 4)
//                counter_coat++;
//            tmp_count2 = 0;
//        }
//    }
//    // доп проверка если после слова ничего не идет
//    if (tmp_count2 == 4)
//        counter_coat++;
//    if (tmp_count1 == 3)
//        counter_hat++;
//
//    cout << "hat: " << counter_hat << ", coat: " << counter_coat << '.';
//
//    return 0;
//}











//#include <Windows.h>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    //system("chcp 1251");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    string text;
//    getline(cin, text, '\n');
//    cout << text << endl;
//
//    int counter_hat = 0, counter_coat = 0, tmp_count1 = 0, tmp_count2 = 0;
//    string hat = "шляпа";
//    string coat = "пальто";
//    for (int ii = 0, jj = 0, kk = 0; ii < text.size(); ii++)
//    {
//        if (hat[jj] == text[ii])
//        {
//            jj++;
//            tmp_count1++;
//        }
//        else
//        {
//            jj = 0;
//            if (tmp_count1 == 5)
//                counter_hat++;
//            tmp_count1 = 0;
//        }
//
//
//        if (coat[kk] == text[ii])
//        {
//            kk++;
//            tmp_count2++;
//        }
//        else
//        {
//            kk = 0;
//            if (tmp_count2 == 6)
//                counter_coat++;
//            tmp_count2 = 0;
//        }
//    }
//    // доп проверка если после слова ничего не идет
//    if (tmp_count2 == 6)
//        counter_coat++;
//    if (tmp_count1 == 5)
//        counter_hat++;
//
//    cout << "Шляп: " << counter_hat << ", пальто: " << counter_coat << '.';
//
//    return 0;
//}

















//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    system("chcp 1251");
//    char text[1024];
//    cin.getline(text, 1024);
//    //cout << text << endl;
//    int size = 0;
//    for (int ii = 0; text[ii] != '\0'; ii++)
//    {
//        cout << text[ii];
//        size++;
//    }
//    cout << endl;
//    cout << size << endl;
//
//    int counter_hat = 0, counter_coat = 0, tmp_count1 = 0, tmp_count2 = 0;
//    char hat[] = "шляпа";
//    char coat[] = "пальто";
//    for (int ii = 0, jj = 0, kk = 0; ii < size; ii++)
//    {
//        if (hat[jj] == text[ii])
//        {
//            jj++;
//            tmp_count1++;
//        }
//        else
//        {
//            jj = 0;
//            if (tmp_count1 == 5)
//                counter_hat++;
//            tmp_count1 = 0;
//        }
//
//
//        if (coat[kk] == text[ii])
//        {
//            kk++;
//            tmp_count2++;
//        }
//        else
//        {
//            kk = 0;
//            if (tmp_count2 == 6)
//                counter_coat++;
//            tmp_count2 = 0;
//        }
//    }
//    // доп проверка если после слова ничего не идет
//    if (tmp_count2 == 6)
//        counter_coat++;
//    if (tmp_count1 == 5)
//        counter_hat++;
//
//    cout << "Шляп: " << counter_hat << ", пальто: " << counter_coat << '.';
//
//    return 0;
//}







//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    char string[100], Delimeter = ' ';
//    cin.getline(string, 100);
//    cin >> Delimeter;
//
//
//    for (int ii = 0; string[ii] != Delimeter; ii++)
//        cout << string[ii];
//
//    return 0;
//}








//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string text, s;
//    getline(cin, text, '\n');
//    getline(cin, s);
//    
//    int summ[1024+1];
//    
//    int ii = 0;
//    for (; ii < s.size(); ii++)
//        summ[ii] = text.find(s[ii]);
//    summ[ii] = '\0';
//
//    for (int ii = 0; ii < s.size(); ii++)
//        cout << summ[ii];
//
//    return 0;
//}





//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string text, s;
//    getline(cin, text, '\n');
//
//    int tmp = text.rfind('.');
//
//    for (int ii = 0; ii <= tmp; ii++)
//        cout << text[ii];
//
//    return 0;
//}





//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string text, s_old, s_new;
//    getline(cin, text, '\n');
//    getline(cin, s_old, '\n');
//    getline(cin, s_new, '\n');
//
//    int tmp = text.find(s_old);//это первое вхождение старого слова
//    int len_old = s_old.size();// это длинна старого слова
//
//    text.replace(tmp, len_old, s_new);
//
//    cout << text;
//
//    return 0;
//}







//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string text, s_delete;
//    getline(cin, text, '\n');
//    getline(cin, s_delete, '\n');
//
//    for (int ii = 0; ii < 100; ii++)
//    {
//        if (text.find(s_delete) != std::string::npos)
//        {
//            int tmp = text.find(s_delete);
//            int len_old = s_delete.size();
//            text.replace(tmp, len_old, "");
//        }
//    }
//
//    cout << text;
//
//    return 0;
//}










//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string text, str;
//    getline(cin, text, '\n');
//    getline(cin, str, '\n');
//
//    char tmp_str[1024];
//
//    int ii = 0;
//    for (; ii < str.size(); ii++)
//        tmp_str[ii] = 'a';//просто создаем доп массив длинной в то слово что ищем
//    tmp_str[ii] = '\0';
//
//    int tmp = text.find(str);
//    int len_old = str.size();
//    text.replace(tmp, len_old, tmp_str);// заменяем наше слово на доп массив чтобы не слетели индексы
//    // как при простом удалении
//
//    cout << text.find(str);
//
//    return 0;
//}










//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string text, str;
//    getline(cin, text, '\n');
//    getline(cin, str, '\n');
//
//    int tmp = text.find(str);
//
//    cout << text.find(str, tmp+1);
//
//    return 0;
//}








//#include <iostream>
//#include <string>
//#include <vector>
//
//// Определяем структуру Person
//struct Person {
//    std::string name;
//    int age;
//    std::string address;
//};
//
//int main() {
//    // Считываем количество строк
//    int n;
//    std::cin >> n;
//
//    // Игнорируем символ новой строки, оставшийся после считывания количества строк,
//    // чтобы он не мешал при считывании строк
//    std::cin.ignore();
//
//    // Создаем пустой вектор структур Person для хранения считанных данных
//    std::vector<Person> people;
//
//    // Считываем n строк с полями структуры, разделенными запятыми, и добавляем
//    // каждую считанную структуру в вектор
//    for (int i = 0; i < n; i++) {
//        std::string input;
//        std::getline(std::cin, input);
//
//        std::string name;
//        int age;
//        std::string address;
//
//        // Разбиваем строку на поля структуры
//        int pos1 = 0, pos2 = input.find(',');
//        name = input.substr(pos1, pos2 - pos1);
//
//        pos1 = pos2 + 1;
//        pos2 = input.find(',', pos1);
//        age = std::stoi(input.substr(pos1, pos2 - pos1));
//
//        pos1 = pos2 + 1;
//        address = input.substr(pos1);
//
//        // Создаем объект структуры и добавляем его в вектор
//        Person person = { name, age, address };
//        people.push_back(person);
//    }
//
//    // Выводим информацию о считанных структурах
//    for (const auto& person : people) {
//        std::cout << "Name: " << person.name << ", Age: " << person.age << ", Address: " << person.address << std::endl;
//    }
//
//    return 0;
//}









//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Student
//{
//    string name;
//    int age;
//    string major;
//
//    void displayInformation()
//    {
//        cout << "Имя: " << name << endl << "Возраст: " << age << endl << "Специальность: " << major << endl;
//    }
//};






//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Student
//{
//    string name;
//    int age;
//    string city;
//    double average_mark;
//    Student() {}
//};
//
//int main()
//{
//    int size;
//    cin >> size;
//    Student* people = new Student[size];
//
//    cin.ignore();
//
//    for (int ii = 0; ii < size; ii++) {
//        string input;
//        getline(cin, input);
//
//        string name;
//        int age;
//        string city;
//        double average_mark;
//
//        // Разбиваем строку на поля структуры
//        int pos1 = 0, pos2 = input.find(',');
//        name = input.substr(pos1, pos2 - pos1);
//
//        pos1 = pos2 + 1;
//        pos2 = input.find(',', pos1);
//        age = stoi(input.substr(pos1, pos2 - pos1));
//
//        pos1 = pos2 + 1;
//        pos2 = input.find(',', pos1);
//        city = input.substr(pos1, pos2 - pos1);
//
//        pos1 = pos2 + 1;
//        average_mark = stod(input.substr(pos1, pos2 - pos1));
//
//        people[ii].name = name;
//        people[ii].age = age;
//        people[ii].city = city;
//        people[ii].average_mark = average_mark;
//    }
//
//    int min_age = 100, tmp_count = 0;
//    for (int ii = 0; ii < size; ii++)
//        if (people[ii].age < min_age)
//        {
//            min_age = people[ii].age;
//            tmp_count = ii;
//        }
//
//    cout << people[tmp_count].name;
//
//    delete[] people;
//    return 0;
//}





//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Student
//{
//    string name;
//    int age;
//    string city;
//    double average_mark;
//    Student() {}
//};
//
//int main()
//{
//    int size;
//    cin >> size;
//    Student* people = new Student[size];
//
//    cin.ignore();
//
//    for (int ii = 0; ii < size; ii++) {
//        string input;
//        getline(cin, input);
//
//        string name;
//        int age;
//        string city;
//        double average_mark;
//
//        // Разбиваем строку на поля структуры
//        int pos1 = 0, pos2 = input.find(',');
//        name = input.substr(pos1, pos2 - pos1);
//
//        pos1 = pos2 + 1;
//        pos2 = input.find(',', pos1);
//        age = stoi(input.substr(pos1, pos2 - pos1));
//
//        pos1 = pos2 + 1;
//        pos2 = input.find(',', pos1);
//        city = input.substr(pos1, pos2 - pos1);
//
//        pos1 = pos2 + 1;
//        average_mark = stod(input.substr(pos1, pos2 - pos1));
//
//        people[ii].name = name;
//        people[ii].age = age;
//        people[ii].city = city;
//        people[ii].average_mark = average_mark;
//    }
//
//    int min_age = 100, tmp_count = 0;
//    double max_mark = 0;
//    for (int ii = 0; ii < size; ii++)
//        if ((people[ii].age <= min_age) and (people[ii].average_mark > max_mark))
//        {
//            min_age = people[ii].age;
//            max_mark = people[ii].average_mark;
//            tmp_count = ii;
//        }
//
//    //в результате выводиться лишний пробел, поэтому удалим его:
//    string result_str = people[tmp_count].city;
//    result_str = result_str.substr(1, (people[tmp_count].city).size());
//
//
//    cout << people[tmp_count].name << '-' << result_str;
//
//    delete[] people;
//    return 0;
//}









//#include <iostream>
//
//using namespace std;
//
//int f(int x)
//{
//    if (x == 1)
//        return 1;
//    return (x / 10);
//}
//
//int main()
//{
//    int x = -1, summ = 0, ten = 10;
//    while (x != 0)
//    {
//        cin >> x;
//        summ += x * ten;
//        ten = ten * 10;
//    }
//    cout << '0' << endl;
//
//    cout << f(summ) << endl;
//    
//
//    return 0;
//}



//#include <iostream>
//#include <string>
//
//// Базовый класс автомобиля
//class Car {
//private:
//    int speed;
//protected:
//    int weight;
//public:
//    std::string model;
//
//    // Конструктор класса для инициализации полей
//    Car(std::string newModel, int newSpeed, int newWeight) {
//        model = newModel;
//        speed = newSpeed;
//        weight = newWeight;
//        std::cout << "Car object created" << std::endl;
//    }
//
//    // Деструктор класса для освобождения ресурсов
//    ~Car() {
//        std::cout << "Car object destroyed" << std::endl;
//    }
//
//    void setSpeed(int newSpeed) {
//        speed = newSpeed;
//    }
//
//    int getSpeed() {
//        return speed;
//    }
//
//    void setWeight(int newWeight) {
//        weight = newWeight;
//    }
//
//    int getWeight() {
//        return weight;
//    }
//};
//
//// Класс электромобиля
//class ElectricCar : public Car {
//private:
//    int batteryCapacity;
//public:
//    std::string electricModel;
//
//    // Конструктор для инициализации полей
//    ElectricCar(std::string newModel,
//        int newSpeed,
//        int newWeight,
//        std::string newElectricModel,
//        int newBatteryCapacity)
//        // Конструктор базового класса для инициализации его полей
//        : Car(newModel, newSpeed, newWeight) {
//        electricModel = newElectricModel;
//        batteryCapacity = newBatteryCapacity;
//        std::cout << "ElectricCar object created" << std::endl;
//    }
//
//    // Деструктор для освобождения ресурсов
//    ~ElectricCar() {
//        std::cout << "ElectricCar object destroyed" << std::endl;
//    }
//
//    void setBatteryCapacity(int newBatteryCapacity) {
//        batteryCapacity = newBatteryCapacity;
//    }
//
//    int getBatteryCapacity() {
//        return batteryCapacity;
//    }
//};
//
//int main() {
//    ElectricCar x("Tesla", 150, 2000, "Model S", 5000);
//
//    std::cout << "Model: " << x.model << std::endl;
//    std::cout << "Speed: " << x.getSpeed() << std::endl;
//    std::cout << "Weight: " << x.getWeight() << std::endl;
//    std::cout << "Electric Model: " << x.electricModel << std::endl;
//    std::cout << "Battery Capacity: " << x.getBatteryCapacity() << std::endl;
//
//    return 0;
//}




//#include <iostream>
//#include <string>
//
//// Базовый класс автомобиля
//class Car {
//private:
//    int speed;
//protected:
//    int weight;
//public:
//    std::string model;
//
//    // Конструктор класса для инициализации полей
//    Car(std::string newModel, int newSpeed, int newWeight) {
//        model = newModel;
//        speed = newSpeed;
//        weight = newWeight;
//        std::cout << "Car object created" << std::endl;
//    }
//
//    // Деструктор класса для освобождения ресурсов
//    virtual ~Car() {
//        std::cout << "Car object destroyed" << std::endl;
//    }
//
//    void setSpeed(int newSpeed) {
//        speed = newSpeed;
//    }
//
//    int getSpeed() {
//        return speed;
//    }
//
//    void setWeight(int newWeight) {
//        weight = newWeight;
//    }
//
//    int getWeight() {
//        return weight;
//    }
//
//    // Виртуальная функция, которую мы переопределим в дочерних классах
//    virtual void printInfo() {
//        std::cout << "Model: " << model << std::endl;
//        std::cout << "Speed: " << speed << std::endl;
//        std::cout << "Weight: " << weight << std::endl;
//    }
//};
//
//// Класс электромобиля
//class ElectricCar : public Car {
//private:
//    int batteryCapacity;
//public:
//    std::string electricModel;
//
//    // Конструктор для инициализации полей
//    ElectricCar(std::string newModel,
//        int newSpeed,
//        int newWeight,
//        std::string newElectricModel,
//        int newBatteryCapacity)
//        // Конструктор базового класса для инициализации его полей
//        : Car(newModel, newSpeed, newWeight) {
//        electricModel = newElectricModel;
//        batteryCapacity = newBatteryCapacity;
//        std::cout << "ElectricCar object created" << std::endl;
//    }
//
//    // Деструктор для освобождения ресурсов
//    ~ElectricCar() override {
//        std::cout << "ElectricCar object destroyed" << std::endl;
//    }
//
//    void setBatteryCapacity(int newBatteryCapacity) {
//        batteryCapacity = newBatteryCapacity;
//    }
//
//    int getBatteryCapacity() {
//        return batteryCapacity;
//    }
//
//    // Переопределяем виртуальную функцию базового класса
//    void printInfo() override {
//        std::cout << "Electric Model: " << electricModel << std::endl;
//        std::cout << "Battery Capacity: " << batteryCapacity << std::endl;
//    }
//};
//
//// Функция для печати информации о машине
//void printCarInfo(Car& car) {
//    car.printInfo();
//}
//
//int main() {
//    Car x("Honda", 100, 1500);
//    ElectricCar y("Tesla", 150, 2000, "Model S", 5000);
//
//    // Вызываем функцию для базового класса и для дочернего класса
//    printCarInfo(x);
//    std::cout << std::endl;
//    printCarInfo(y);
//
//    return 0;
//}








//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person
//{
//private:
//    string name;
//    string surname;
//    int age;
//    string profession;
//public:
//    void setting_values(string name, string surname, int age, string profession)
//    {
//        this->name = name;
//        this->surname = surname;
//        this->age = age;
//        this->profession = profession;
//    }
//
//    void get_info()
//    {
//        cout << "Имя: " << this->name << endl;
//        cout << "Фамилия: " << this->surname << endl;
//        cout << "Возраст: " << this->age << endl;
//        cout << "Профессия: " << this->profession << endl;
//    }
//
//};
//
//int main()
//{
//
//    Person people;
//
//    for (int ii = 0; ii < 1; ii++) {
//        string input;
//        getline(cin, input);
//
//        string name;
//        string surname;
//        int age;
//        string profession;
//
//        // Разбиваем строку на поля структуры
//        int pos1 = 0, pos2 = input.find(',');
//        name = input.substr(pos1, pos2 - pos1);
//
//        pos1 = pos2 + 2;//pos2+2 так как там пробел и запятая
//        pos2 = input.find(',', pos1);
//        surname = input.substr(pos1, pos2 - pos1);
//
//
//        pos1 = pos2 + 2;//pos2+2 так как там пробел и запятая
//        pos2 = input.find(',', pos1);
//        age = stoi(input.substr(pos1, pos2 - pos1));
//
//        pos1 = pos2 + 2;//pos2+2 так как там пробел и запятая
//        profession = input.substr(pos1, pos2 - pos1);
//
//        people.setting_values(name, surname, age, profession);
//    }
//
//    people.get_info();
//
//    return 0;
//}










////Паттерн Observer
//#include <iostream> // Подключение библиотеки ввода/вывода данных
//#include <vector> // Подключение библиотеки для работы с векторами
//
//// Интерфейс для наблюдателя
//class Observer {
//public:
//    virtual void update(const std::string& message) = 0; // Чисто виртуальная функция, которую каждый наблюдатель должен определить
//};
//
//// Конкретный наблюдатель 1
//class ConcreteObserver1 : public Observer {
//public:
//    void update(const std::string& message) { // Функция обновления конкретного наблюдателя 1
//        std::cout << "ConcreteObserver1 received message: " << message << std::endl; // Вывод отображения сообщения
//    }
//};
//
//// Конкретный наблюдатель 2
//class ConcreteObserver2 : public Observer {
//public:
//    void update(const std::string& message) { // Функция обновления конкретного наблюдателя 2
//        std::cout << "ConcreteObserver2 received message: " << message << std::endl; // Вывод отображения сообщения
//    }
//};
//
//// Интерфейс для наблюдаемого объекта (Subject)
//class Subject {
//private:
//    std::vector<Observer*> observers; // Вектор для хранения указателей на наблюдателей
//
//public:
//    void attach(Observer* observer) { // Функция присоединения наблюдателя
//        observers.push_back(observer); // Добавляем наблюдателя в вектор
//    }
//
//    void detach(Observer* observer) { // Функция отсоединения наблюдателя
//        // Найти и удалить наблюдателя из вектора
//        for (auto it = observers.begin(); it != observers.end(); ++it) {
//            if (*it == observer) {
//                observers.erase(it); // Удаление наблюдателя
//                break;
//            }
//        }
//    }
//
//    void notifyObservers(const std::string& message) { // Функция оповещения наблюдателей
//        for (auto observer : observers) { // Проход по всем наблюдателям в векторе
//            observer->update(message); // Вызываем функцию 'update' для каждого наблюдателя с сообщением
//        }
//    }
//
//    void doSomething() { // Функция, которая вызывается при изменении состояния Subject
//        // В этом примере, мы сразу же оповещаем всех наблюдателей
//        notifyObservers("Something happened!"); // Отправка сообщения наблюдателям
//    }
//};
//
//int main() { // Главная функция
//    Subject subject; // Создание объекта subject
//
//    ConcreteObserver1 observer1; // Создание первого наблюдателя
//    ConcreteObserver2 observer2; // Создание второго наблюдателя
//
//    subject.attach(&observer1); // Присоединение первого наблюдателя
//    subject.attach(&observer2); // Присоединение второго наблюдателя
//
//    subject.doSomething(); // Вызов функции, которая оповещает наблюдателей
//
//    return 0; // Возвращаемое значение программы
//}










//#include <Windows.h>
//#include <iostream>
//#include <thread>
//#include <mutex>
//
//using namespace std;
//// Создаем мьютекс для синхронизации доступа к общим данным
//std::mutex mtx;
//int sharedValue = 0;
//
//// Функция для увеличения общего значения
//void incrementSharedValue(int id) {
//    for (int i = 0; i < 5; ++i) {
//        mtx.lock(); // Блокируем мьютекс для обеспечения эксклюзивного доступа к общим данным
//        sharedValue++; // Увеличиваем общее значение
//        std::cout << "Поток " << id << " увеличил значение sharedValue на 1. Новое значение: " << sharedValue << std::endl;
//        mtx.unlock(); // Разблокируем мьютекс после завершения работы с общими данными
//    }
//}
//
//int main()
//{
//    //system("chcp 1251");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    const int numThreads = 3;
//    std::thread threads[numThreads];
//
//    // Создаем потоки и запускаем функцию увеличения общего значения
//    for (int i = 0; i < numThreads; ++i) {
//        threads[i] = std::thread(incrementSharedValue, i + 1);
//    }
//
//    // Ожидаем завершения работы всех потоков
//    for (int i = 0; i < numThreads; ++i) {
//        threads[i].join();
//    }
//
//    // Выводим итоговое значение общего значения
//    std::cout << "Итоговое значение sharedValue: " << sharedValue << std::endl;
//
//    return 0;
//}








//#include <iostream>
//#include <thread>
//#include <semaphore.h>
//
//sem_t semaphore;
//
//void producer() {
//    for (int i = 0; i < 5; ++i) {
//        sem_wait(&semaphore);
//        std::cout << "Производитель создал продукт " << i << std::endl;
//    }
//}
//
//void consumer() {
//    for (int i = 0; i < 5; ++i) {
//        std::this_thread::sleep_for(std::chrono::milliseconds(500));
//        //1. std::this_thread::sleep_for - это функция из стандартной библиотеки C++, которая
//        //предназначена для временной задержки выполнения потока, в данном случае текущего потока.
//
//        //2. std::chrono::milliseconds(500) - это аргумент функции sleep_for, который задает
//        //продолжительность паузы в 500 миллисекунд.
//        std::cout << "Потребитель потребил продукт " << i << std::endl;
//        sem_post(&semaphore);
//    }
//}
//
//int main() {
//    sem_init(&semaphore, 0, 1);
//
//    std::thread producerThread(producer);
//    std::thread consumerThread(consumer);
//
//    producerThread.join();
//    consumerThread.join();
//
//    sem_destroy(&semaphore);
//
//    return 0;
//}





//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <condition_variable>
//#include <queue>
//
//// Очередь для хранения данных
//std::queue<int> data;
///*std::queue<int> представляет собой стандартную контейнерную адаптерную структуру данных из стандартной библиотеки C++, которая реализует структуру данных "очередь" (queue). Очередь представляет собой структуру данных, в которой элементы добавляются в конец (back) очереди и удаляются из начала (front) очереди. Этот принцип называется "первым пришел, первым ушел" (FIFO - First-In-First-Out).
//*/
//// Мьютекс для синхронизации доступа к общим данным (очереди)
//std::mutex mtx;
//// Условная переменная для сигнализации между потребителем и производителем
//std::condition_variable cv;
//
//// Функция-производитель данных
//void producer() {
//    for (int i = 0; i < 5; ++i) {
//        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Имитация создания данных
//
//        {
//            std::lock_guard<std::mutex> lock(mtx); // Блокировка мьютекса для безопасного доступа к очереди
//            data.push(i); // Добавление элемента в очередь
//            std::cout << "Производитель создал элемент: " << i << std::endl;
//        }
//
//        cv.notify_one(); // Уведомление ожидающего потребителя
//    }
//}
//
//// Функция-потребитель данных
//void consumer() {
//    for (int i = 0; i < 5; ++i) {
//        std::unique_lock<std::mutex> lock(mtx); // Уникальная блокировка мьютекса
//        cv.wait(lock, [] { return !data.empty(); }); // Ожидание, пока данные не появятся в очереди
//
//        int value = data.front(); // Получение элемента из очереди
//        data.pop(); // Удаление обработанного элемента из очереди
//
//        std::cout << "Потребитель потребил элемент: " << value << std::endl;
//    }
//}
//
//int main() {
//    std::thread producerThread(producer); // Создание потока для производителя
//    std::thread consumerThread(consumer); // Создание потока для потребителя
//
//    producerThread.join(); // Ожидание завершения работы потока производителя
//    consumerThread.join(); // Ожидание завершения работы потока потребителя
//
//    return 0;
//}








//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int* x = nullptr;
//	int* y = nullptr;
//
//	cout << &x << endl << &y;
//
//	return 0;
//}

//
//#include <iosteam>
//
//using namespace std;



//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class RegistrationRequest
//{
//    public:
//	string email;
//	string password;
//
//	RegistrationRequest(string email, string password)
//	{
//		this->email = email;
//		this->password = password;
//	}
//    
//    void get_info()
//    {
//        cout << "Ваш email: " << email << endl << "Ваш пароль: " << password << endl;
//    }
//
//};
//
//
//
//int main()
//{
//    system("chcp 1251");
//    string email, password;
//    cout << "Регистарция: " << endl;
//    cout << "Введите email: " << endl;
//    getline(cin, email);
//    cout << "Введите пароль: " << endl;
//    getline(cin, password);
//
//	RegistrationRequest Request(email, password);
//	
//    Request.get_info();
//
//
//	return 0;
//}







//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person
//{
//private:
//    string name;
//    string surname;
//    int age;
//    string profession;
//public:
//    void setting_values(string name, string surname, int age, string profession)
//    {
//        this->name = name;
//        this->surname = surname;
//        this->age = age;
//        this->profession = profession;
//    }
//
//    void get_info()
//    {
//        cout << "Имя: " << this->name << endl;
//        cout << "Фамилия: " << this->surname << endl;
//        cout << "Возраст: " << this->age << endl;
//        cout << "Профессия: " << this->profession << endl;
//    }
//
//};
//
//int main()
//{
//
//    Person people;
//
//    for (int ii = 0; ii < 1; ii++) {
//        string input;
//        getline(cin, input);
//
//        string name;
//        string surname;
//        int age;
//        string profession;
//
//        // Разбиваем строку на поля структуры
//        int pos1 = 0, pos2 = input.find(',');
//        name = input.substr(pos1, pos2 - pos1);
//
//        pos1 = pos2 + 2;//pos2+2 так как там пробел и запятая
//        pos2 = input.find(',', pos1);
//        surname = input.substr(pos1, pos2 - pos1);
//
//
//        pos1 = pos2 + 2;//pos2+2 так как там пробел и запятая
//        pos2 = input.find(',', pos1);
//        age = stoi(input.substr(pos1, pos2 - pos1));
//
//        pos1 = pos2 + 2;//pos2+2 так как там пробел и запятая
//        profession = input.substr(pos1, pos2 - pos1);
//
//        people.setting_values(name, surname, age, profession);
//    }
//
//    people.get_info();
//
//    return 0;
////}