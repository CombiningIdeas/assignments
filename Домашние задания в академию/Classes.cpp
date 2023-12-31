#include "Classes.h"
#include <iostream>
#include <string>

using namespace std;

// ����� ��� ������ � ���������:
template <class T>
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

	auto get_info() -> void
	{
		for (int ii = 0; ii < len; ii++)
			cout << arr[ii] << ' ';
		cout << endl;
	}

	~Arrays()
	{
		delete[] arr;
	}
};


class People
{
private:
	double age;// ���� ����� ����� ������� �� �����, ����� 75 ��� �������� �������
	string name;
	// ����������� ����� � ����:
	double* magic;
	// �������� ������������, �� ����� 3:
	double energy;//����� �����
	double healing;// ����� ����� ��������� �� ����� �����
	double damage;// ���� ���� ��������� �� ����� �����
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
		cout << "���: " << name << endl;
		cout << "�������: " << age << endl;

		cout << "������������� �������: " << energy << "/1500" << endl;
		cout << "��������: " << healing << "/900" << endl;
		cout << "������������� ����: " << damage << "/1200" << endl;
	}

	~People()
	{
		cout << name << " - ����. " << endl;
		delete[] magic;
	}
};