﻿//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	//ЗАДАНИЕ 1
//	/*
//	Пользователь вводит с клавиатуры расстояние до аэропорта и время, за которое нужно доехать.
//	Вычислить скорость, с
//	которой ему нужно ехать.
//	*/
//	////Как я рассуждал тут не нужно  большой точности 
//	////потому что обычно растояние вычисляется в километрах и метрах,
//	////a время в часах иногда в минутах, потому что это лбычно большие растояние.
//	//double kilometers, hours, averageSpeed;
//	//std::cout << "Введите растояние до аэрапорта(километры.метры) = ";
//	//std::cin >> kilometers;
//	//std::cout << "Введите время(часы.минуты) = ";
//	//std::cin >> hours;
//	//averageSpeed = kilometers / hours;
//	//std::cout << "Cкорость, с которой нужно ехать " << averageSpeed << " км/ч";
//
//	//Задание 2
//	/*
//	Пользователь вводит с клавиатуры время начала и время
//	завершения использования скутера (часы, минуты и секунды).
//	Посчитать стоимость поездки, если стоимость минуты —
//	2 гривны.
//	*/
//	//Тут уже придется точно вводить значения до секунд по условию
//	//double price, startTime, endTime;
//	//int startHours, startminutes, startseconds, endHours, endminutes, endseconds;
//	//std::cout << "Ведите время начала и время завершения использования скутера: часы, минуты и секунды"
//	//	<< std::endl;
//	//std::cout << "Начало использования скутера:" << std::endl;
//	//std::cout << "Введите часы, минуты, секунды (через пробел): ";
//	//std::cin >> startHours >> startminutes >> startseconds;
//	//std::cout << "Конец использования скутера:" << std::endl;
//	//std::cout << "Введите часы, минуты, секунды (через пробел): ";
//	//std::cin >> endHours >> endminutes >> endseconds;
//	//// тут я просто использовал алгоритм перевода минут и секунд из прошлой домашки.
//	//startTime = (startHours * 60) + startminutes + (startseconds / 60);// + (startseconds - 60 * (startseconds % 60)) / 100;
//	//endTime = (endHours * 60) + endminutes + (endseconds / 60);// + (endseconds - 60 * (endseconds % 60)) / 100;
//	////Изначально я хотел учитывать еще дробную часть но программа не заработала после большого числак попыток и я оставил эту идею.
//	////Поэтому все что меньше 60 секунд не учитывается программой.
//	//price = (endTime - startTime) * 2;
//	//std::cout << "Cтоимость поездки " << price << " - гривен.";
//
//	//ЗАДАНИЕ 3
//	/*
//	Пользователь вводит с клавиатуры расстояние, расход
//	бензина на 100 км и стоимость трех видов бензина.Вывести
//	на экран сравнительную таблицу со стоимостью поездки на
//	разных видах бензина.
//	*/
//
//	double distance, litersIn100Kilometers, litersInDistance, petrol92, petrol95, diesel;
//	double price92, price95, priceDisel;
//
//	std::cout << "Введите расстояние(в километрах): ";
//	std::cin >> distance;
//	std::cout << "Введите расход бензина(в литрах) на 100 км: ";
//	std::cin >> litersIn100Kilometers;
//	std::cout << "Введите стоить(в рублях) 92 бензина за литр: ";
//	std::cin >> petrol92;
//	std::cout << "Введите стоить(в рублях) 95 бензина за литр: ";
//	std::cin >> petrol95;
//	std::cout << "Введите стоить(в рублях) дизеля за литр: ";
//	std::cin >> diesel;
//
//	//После получения данных соответсвенно нужно через пропорцию
//	//получить число литров за введенной растояние
//
//	litersInDistance = (distance * litersIn100Kilometers) / 100;
//	price92 = petrol92 * litersInDistance;
//	price95 = petrol95 * litersInDistance;
//	priceDisel = diesel * litersInDistance;
//
//	//Я думал использовать таблицу аски, но тогда нужно убирать русскую кодировку,
//	//и поэтому решил сделать простую таблицу.
//	//std::cout << char(201) << char(205) << char(205) << char(187) << std::endl;
//	//std::cout << char(186);
//
//	std::cout << "Цена поездки в литрах(кофициент): " << litersInDistance << " - литров. "
//		<< "Расстояние: " << distance << " - км" << std::endl;
//	std::cout << "|Стоимость поездки на 92 бензине: |" << price92 << "| - руб|" << std::endl;
//		std::cout << "|Стоимость поездки на 95 бензине: |" << price95 << "| - руб|" << std::endl;
//		std::cout << "|Стоимость поездки на дизеле: \t  |" << priceDisel << "| - руб|" << std::endl;
//
//
//
//	return 0;
//}