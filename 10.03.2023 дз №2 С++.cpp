//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//
//	//ЗАДАНИЕ 1
//	/*
//	Пользователь вводит с клавиатуры время в секундах, прошедшее с начала дня.
//	Вывести на экран текущее время в часах,
//	минутах и секундах.Посчитать, сколько часов, минут и секунд
//	осталось до полуночи.
//	*/
//	//int startseconds, endhours, endminutes, endseconds, nightSeconds;
//	//std::cout << "ведите время  в секундах, прошедшее с начала дня: ";
//	//std::cin >> startseconds;
//	//// nightSeconds это 43200 секунд тоесть 12:00, но два раза так первый раз это полдень
//	//// значит от полуночи до полуночи 86400 секунд
//	//nightSeconds = 86400;
//	//startseconds = nightSeconds - startseconds;
//	//endhours = startseconds / 3600;
//	//endminutes = startseconds / 60 - endhours * 60;
//	//endseconds = startseconds - (endminutes * 60 + endhours * 3600);
//	//std::cout << "До конца поездки осталось: " << endhours << " - часов; "
//	//	<< endminutes << " - минут; " << endseconds << " - секунд." << std::endl;
//
//	//ЗАДАНИЕ 2
//	/*
//	Пользователь вводит с клавиатуры время в секундах, прошедшее с начала рабочего дня.
//	Посчитать, сколько целых часов
//	ему осталось работать если рабочий день — 8 часов.
//	*/
//	// по факту тоже что и превыдущая программа только с ограничением в 8 часов,
//	// а тогда было 24 часа, и выводить только в целых часах, еще легче.
//	//int startseconds, endhours, endminutes, endseconds, workSeconds;
//	//std::cout << "ведите время  в секундах, прошедшее с начала рабочего дня: ";
//	//std::cin >> startseconds;
//	//workSeconds = 28800;
//	//startseconds = workSeconds - startseconds;
//	//endhours = startseconds / 3600;
//	//std::cout << "До конца рабочего дня осталось : " << endhours << " - часов.";
//	//return 0;
//}
