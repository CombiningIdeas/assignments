//#include <iostream>
//#include <string>
//#include "Classes.cpp"
//
//using namespace std;
//
//const int BUFFER_SIZE = 50;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	char* name = new char[BUFFER_SIZE];
//	int age;
//	int length = 3;
//	double* magic = new double[length];
//
//	cout << "Введите имя персонажа: ";
//	cin.getline(name, BUFFER_SIZE, '\n');
//
//	cout << "Введите возраст персонажа: ";
//	cin >> age;
//
//	cout << "Введите количество потенциальной энергии: ";
//	cin >> magic[0];
//
//	cout << "Введите количество здоровья: ";
//	cin >> magic[1];
//
//	cout << "Введите количество потенциального урона: ";
//	cin >> magic[2];
//
//	People Anton(name, age, magic);
//	Anton.get_info();
//
//	delete[] magic;
//
//	return 0;
//}
