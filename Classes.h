#pragma once

// можно и от суда подключать сразу класс но тут принято именно писать прототип класса
// а уже в cpp файлах расписывать конкретный функционал, для каждого класса свой cpp
// файл, а для прототипов один .h файл
//#include <iostream>
template <typename T>
class Arrays;
//{
//private:
//	int len;
//	T* arr;
//public:
//	Arrays(T* a, int len)
//	{
//		this->len = len;
//		arr = new T[len];
//
//		for (int ii = 0; ii < len; ii++)
//			arr[ii] = *(a + ii);
//	}
//
//	auto get_info() -> void
//	{
//		for (int ii = 0; ii < len; ii++)
//			std::cout << arr[ii] << ' ';
//		std::cout << std::endl;
//	}
//
//	~Arrays()
//	{
//		delete[] arr;
//	}
//};


class People;