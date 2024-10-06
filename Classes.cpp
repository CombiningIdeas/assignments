#include "Classes.h"
#include <iostream>
#include <string>

using namespace std;

// Класс для работы с массивами:
template <typename T>
class Arrays
{
private:
	int len;
	T* arr;
public:
	Arrays(T* a, int len)
	{
		this->len = len;
		arr = new T[len];

		for (int ii = 0; ii < len; ii++)
			arr[ii] = *(a + ii);
	}

	void get_info();

	~Arrays()
	{
		delete[] arr;
	}
};


class People
{
private:
	double age;// года можно будет тратить на манну, после 75 лет персонаж умирает
	string name;
	// способности людей в игре:
	double* magic;
	// Описание способностей, их будет 3:
	double energy;//общая манна
	double healing;// отхил будет тратиться из общей манны
	double damage;// урон тоже тратиться из общей манны
public:
	People(string name, double age, double* mag)
	{
		this->name = name;
		this->age = age;

		this->magic = new double[3];

		for (int ii = 0; ii < 3; ii++)
			this->magic[ii] = mag[ii];

		energy = this->magic[0];
		healing = this->magic[1];
		damage = this->magic[2];
	}

	auto get_info() -> void
	{
		cout << "Имя: " << name << endl;
		cout << "Возраст: " << age << endl;

		cout << "Потенциальная энергия: " << energy << "/1500" << endl;
		cout << "Здоровье: " << healing << "/900" << endl;
		cout << "Потенциальный урон: " << damage << "/1200" << endl;
	}

	~People()
	{
		cout << name << " - умер. " << endl;
		delete[] magic;
	}
};


