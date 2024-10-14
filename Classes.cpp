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



