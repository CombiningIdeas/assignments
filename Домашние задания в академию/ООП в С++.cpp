//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Building
//{
//public:
//	int year;
//	string type;
//
//	void ger_info()
//	{
//		cout << "Type: " << type << ". Year: " << year;
//		cout << endl;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	Building school;
//	school.type = "�����";
//	school.year = 2000;
//	school.ger_info();
//
//	Building hospital;
//	hospital.type = "��������";
//	hospital.year = 1990;
//	hospital.ger_info();
//
//	return 0;
//}



//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Building
//{
//private:
//	int year;
//	string type;
//public:
//	void set_data(int y, string t)
//	{
//		year = y;
//		type = t;
//	}
//
//	void ger_info()
//	{
//		cout << "Type: " << type << ". Year: " << year;
//		cout << endl;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	Building school;
//	school.set_data(2000, "�����");
//	school.ger_info();
//
//	Building hospital;
//	hospital.set_data(1990, "��������");
//	hospital.ger_info();
//
//	return 0;
//}


////�����������
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Building
//{
//private:
//	int year;
//	string type;
//public:
//	Building() {}
//	Building(int y, string t)
//	{
//		set_data(y, t);
//	}
//
//	void set_data(int y, string t)
//	{
//		year = y;
//		type = t;
//	}
//
//	void ger_info()
//	{
//		cout << "Type: " << type << ". Year: " << year;
//		cout << endl;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	Building school(2000, "�����");
//	school.ger_info();
//
//	Building hospital;
//	hospital.set_data(1990, "��������");
//	hospital.ger_info();
//
//	return 0;
//}




////���������� ������� � ������
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Building
//{
//private:
//	int year;
//	string type;
//public:
//	Building() {}
//	Building(int y, string t)
//	{
//		set_data(y, t);
//	}
//
//	Building(int y)
//	{
//		cout << "������ �����������" << endl;
//		set_data(y);
//	}
//
//	void set_data(int y, string t)
//	{
//		year = y;
//		type = t;
//	}
//
//	void set_data(int y)
//	{
//		year = y;
//	}
//
//	void ger_info()
//	{
//		cout << "Type: " << type << ". Year: " << year;
//		cout << endl;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	Building school(2000, "�����");
//	school.ger_info();
//
//	Building hospital(1990);
//	hospital.ger_info();
//
//	return 0;
//}





//// ����������
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Building
//{
//private:
//	int year;
//	string type;
//public:
//	Building() {}
//	Building(int y, string t)
//	{
//		set_data(y, t);
//	}
//
//	Building(int y)
//	{
//		cout << "������ �����������" << endl;
//		set_data(y);
//	}
//
//	void set_data(int y, string t)
//	{
//		year = y;
//		type = t;
//	}
//
//	void set_data(int y)
//	{
//		year = y;
//	}
//
//	void ger_info()
//	{
//		cout << "Type: " << type << ". Year: " << year;
//		cout << endl;
//	}
//
//	~Building()
//	{
//		cout << "Delete object" << endl;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	Building school(2000, "�����");
//	school.ger_info();
//
//	Building hospital(1990);
//	hospital.ger_info();
//
//	return 0;
//}





//// �������� ����� this ����� ��� ���� ����� ���� ������� 
//// ��� ���� � ������ ������������ ������ �� ����� ������
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Building
//{
//private:
//	int year;
//	string type;
//public:
//	Building() {}
//	Building(int y, string t)
//	{
//		set_data(y, t);
//	}
//
//	Building(int y)
//	{
//		cout << "������ �����������" << endl;
//		set_data(y);
//	}
//
//	void set_data(int year, string type)
//	{
//		this->year = year;
//		this->type = type;
//	}
//
//	void set_data(int y)
//	{
//		year = y;
//	}
//
//	void ger_info()
//	{
//		cout << "Type: " << type << ". Year: " << year;
//		cout << endl;
//	}
//
//	~Building()
//	{
//		cout << "Delete object" << endl;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	Building school(2000, "�����");
//	school.ger_info();
//
//	Building hospital(1990);
//	hospital.ger_info();
//
//	return 0;
//}



//// �������� ������������� �������
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Car;
//class Person;
//
//class Person
//{
//private:
//	int age;
//	string name;
//public:
//	Person(string name)
//	{
//		this->name = name;
//	}
//
//	friend void info_car(Car& car, Person& person);
//};
//
//class Car
//{
//private:
//	string name;
//public:
//	Car (string name)
//	{
//		this->name = name;
//	}
//
//	friend void info_car(Car& car, Person& person);
//};
//
//// ������������� �������:
//void info_car(Car& car, Person& person)// �������� ������� ����� ������, ����� ������ ���� �� ��������
//{
//	cout << "������� � ������: " << person.name << " ����� ������: " << car.name << endl;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	Car bmw("BMW");
//	Person jhon("����");
//	info_car(bmw, jhon);
//
//	return 0;
//}





//// �������� �������������� ������
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Dog;
//class Person;
//
//class Dog
//{
//private:
//	int health = 100;
//public:
//	friend class Person;
//};
//
//class Person
//{
//public:
//	void Damage(Dog& dog)
//	{
//		dog.health -= 20;
//		cout << "Health of animal: " << dog.health << endl;
//	}
//
//	void Heal(Dog& dog)
//	{
//		dog.health += 10;
//		cout << "Health of animal: " << dog.health << endl;
//	}
//
//	void Kill(Dog& dog)
//	{
//		dog.health = 0;
//		cout << "Health of animal: " << dog.health << endl;
//	}
//};
//
//
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	Dog skuby;
//	Person alex;
//	alex.Damage(skuby);
//	alex.Damage(skuby);
//	alex.Heal(skuby);
//	alex.Heal(skuby);
//	alex.Heal(skuby);
//	alex.Kill(skuby);
//
//	return 0;
//}


//// ������������ ������� �++
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class PC
//{
//	//���� ����� prortected �� ����� ���������� � ���� ������� � ����� �� ������ ����������
//protected:
//	int diagonal;
//	string os;
//public:
//	PC(int diagonal, string os)
//	{
//		this->diagonal = diagonal;
//		this->os = os;
//	}
//
//	void output()
//	{
//		cout << "���������: " << diagonal << endl;
//		cout << "������������ �������: " << os << endl;
//	}
//};
//
//// ��������� public � protected ������ ����������� � ������ PC � ����
//// ������������� �������
//// �� private ������ ������ �����������
//class Laptop: public PC
//{
//private:
//	double weight;
//public:
//	Laptop(int diagonal, string os, double weight): PC(diagonal, os)
//	{
//		this->weight = weight;
//	}
//
//	//void output()
//	//{
//	//	PC::output();
//	//	cout << "���: " << weight << endl;
//	//}
//
//	void output()
//	{
//		cout << "���������: " << PC::diagonal << endl;
//		cout << "������������ �������: " << PC::os << endl;
//		cout << "���: " << weight << endl;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	Laptop mac(16, "Mac", 1.5);
//	mac.output();
//
//	return 0;
//}



//// ������� �������
//#include <iostream>
//#include <string>
//
//using namespace std;
//using elementType = int;
//
//template <typename T1, typename T2>
//auto outputArray(T1* array, const T2 LENGTH) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//
//	const int LENGTH = 10;
//
//	elementType* array;
//	try
//	{
//		array = new elementType[LENGTH + 1];
//	}
//	catch (const std::bad_alloc&exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//	//��������� ������
//	for (int ii = 0; ii < LENGTH; ii++)
//		cout << (array[ii] = rand() % 41 - 20) << ' ';
//	array[LENGTH] = '\0';//���������� ������������ ���� ��� ��� ��� �� ������
//	cout << endl;
//
//	outputArray<int, int>(array, LENGTH);
//
//	delete[] array;
//
//	return 0;
//}
//
//
//template <typename T1, typename T2>
//auto outputArray(T1* array, const T2 LENGTH) -> void
//{
//	//for (int ii = 0; ii < LENGTH; ii++)
//	//	cout << array[ii] << ' ';
//	//cout << endl;
//
//	//for (int ii = 0; ii < LENGTH; ii++)
//	//	cout << *(array+ii) << ' ';
//	//cout << endl;
//
//	for (; *array != '\0'; array++)
//		cout << *array << ' ';
//	cout << endl;
//}


//// ������� �������
//#include <iostream>
//#include <string>
//
//using namespace std;
//using elementType = int;
//
//
//// ����� ����� ���� ��������� ��������� ����� ������ ������ ��� ��� �������� ����� class
//// ��� ���� ��� ����� ���� ��������� ����� ���� ������ � � �������� � �����
//template <class T>
//class Arrays
//{
//private:
//	int len;
//	//elementType* arr;
//	T* arr;
//public:
//	Arrays(T* a, int len)
//	{
//		this->len = len;
//		//arr = new elementType[len];
//		arr = new T[len];
//
//		for (int ii = 0; ii < len; ii++)
//			arr[ii] = *(a + ii);
//	}
//
//	auto get_info() -> void
//	{
//		for (int ii = 0; ii < len; ii++)
//			cout << arr[ii] << ' ';
//		cout << endl;
//	}
//
//	~Arrays()
//	{
//		delete[] arr;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	//srand(static_cast<unsigned int>(time(nullptr)));
//
//	int arr1[] = { 3, 5 ,2 };
//	int len1 = sizeof(arr1) / sizeof(arr1[0]);
//	Arrays<elementType> object1(arr1, len1);
//	object1.get_info();
//
//	float arr2[] = { 3.34, 5.654 ,2.01 };
//	int len2 = sizeof(arr2) / sizeof(arr2[0]);
//	Arrays<float> object2(arr2, len2);
//	object2.get_info();
//
//
//	return 0;
//}





//#include <iostream>
//#include <string>
//#include "Classes.cpp"
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	//srand(static_cast<unsigned int>(time(nullptr)));
//
//	int arr1[] = { 3, 5 ,2 };
//	int len1 = sizeof(arr1) / sizeof(arr1[0]);
//	Arrays<int> object1(arr1, len1);
//	object1.get_info();
//
//	double arr2[] = { 3.34, 5.654 ,2.01 };
//	int len2 = sizeof(arr2) / sizeof(arr2[0]);
//	Arrays<double> object2(arr2, len2);
//	object2.get_info();
//
//
//	return 0;
//}