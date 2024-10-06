//#include <iostream>
//#include <string.h>
//
//int main()
//{
//	// ЗАДАНИЕ 1
//	/*
//	Пользователь вводит с клавиатуры символ.Определить,
//	какой это символ : Буква, цифра, знак препинания или другое.
//	*/
//	// Не использовал перевод в русский язык, чтобы не сбивалась таблица аски.
//	/*int integer;
//	char symbol;
//	std::cout << "Enter a symbol: ";
//	std::cin >> symbol;
//
//	integer = static_cast<int>(symbol);
//
//	if (integer >= 48 && integer <= 57)
//		std::cout << "It is digit";
//	else if ((integer >= 65 && integer <= 90) || (integer >= 97 && integer <= 122))
//		std::cout << "It is letter";
//	else if (integer == 33 || integer == 34 || (integer >= 44 && integer <= 46) ||
//		integer == 61 || integer == 63)
//		std::cout << "It is a punctuation mark";
//	else
//		std::cout << "It is other";
//
//	return 0;
//	*/
//	//ЗАДАНИЕ 2
//	/*
//	Написать программу подсчета стоимости разговора для
//	разных мобильных операторов.Пользователь вводит длительность разговора 
//	и выбирает с какого на какой оператор
//	он звонит.Вывести стоимость на экран.
//	*/
//	// Пускай разгвор со своим же оператором будет бесплатным, 
//	// а разговор с другими оператарами(1 минута) у всех будет стоить 3 рубля.
//	/*setlocale(LC_ALL, "Russian");
//
//	std::string mobileOperator1, mobileOperator2;
//	int time;
//
//	std::cout << "Введите время разговра(в минутах): ";
//	std::cin >> time;
//	std::cout << "Есть всего 4 оператора \"MTS\", \"Beeline\", \"Tele2\", \"Megafon\"." 
//		<< std::endl;
//
//	std::cout << "Введите с какого оператора на какой звоните: ";
//	std::cin >> mobileOperator1 >> mobileOperator2;
//
//	if (!((mobileOperator1 == "MTS" || mobileOperator1 == "Beeline" ||
//		mobileOperator1 == "Tele2" || mobileOperator1 == "Megafon") &&
//		(mobileOperator2 == "MTS" || mobileOperator2 == "Beeline" ||
//			mobileOperator2 == "Tele2" || mobileOperator2 == "Megafon")))
//	{
//		std::cout << "Неверно указан один из операторов";
//		return 0;
//	}
//	
//	if (mobileOperator1 == mobileOperator2)
//		std::cout << "Звонок бесплатный";
//	else if (mobileOperator1 != mobileOperator2)
//		std::cout << "Стоимость разговора: " << time * 3 << "р";
//
//	return 0;
//	*/
//
//	//ЗАДАНИЕ 3
//	/*Вася работает программистом и получает 50$ за каждые
//		100 строк кода.За каждое третье опоздание на работу Васю
//		штрафуют на 20$.Реализовать меню :
//	1)пользователь вводит желаемый доход Васи и количество
//		опозданий, посчитать, сколько строк кода ему надо написать;
//	2)пользователь вводит количество строк кода, написанное
//		Васей и желаемый объем зарплаты.Посчитать, сколько
//		раз Вася может опоздать;
//	3)пользователь вводит количество строк кода и количество
//		опозданий, определить, сколько денег заплатят Васе и
//		заплатят ли вообще.
//	*/
//	/*setlocale(LC_ALL, "Russian");
//	int linesOfCode, salary, delays;
//	// Приложение №1
//	std::cout << "Введите желаемый доход Васи(в доллорах): ";
//	std::cin >> salary;
//	std::cout << "Введите количество опозданий: ";
//	std::cin >> delays;
//
//	linesOfCode = salary * 2 + delays * 20;
//	std::cout << "Чтобы получить желаемый доход Вacе нужно написать " << linesOfCode
//		<< " - строк кода";
//	return 0;
//	*/
//	/*
//	setlocale(LC_ALL, "Russian");
//	int linesOfCode, salary, delays;
//	// Приложение №2
//	std::cout << "Введите количество строк кода и желаемый обьем зарплаты: ";
//	std::cin >> linesOfCode >> salary;
//
//	if ((linesOfCode / 2) < salary)
//	{
//		std::cout << "Желаемая зарплата выше чем оплата за количество строк кода. "
//			<< "Введите зарплату не большую чем оплату за строки кода еще раз.";
//		return 0;
//	}
//
//	delays = (linesOfCode / 2 - salary) / 20;
//
//	std::cout << "Вася может опоздать " << delays << " - раз";
//
//	return 0;
//
//	*/
//	/*
//	setlocale(LC_ALL, "Russian");
//	int linesOfCode, salary, delays;
//	// Приложение №3
//	std::cout << "Введите количество строк кода и количество опозданий: ";
//	std::cin >> linesOfCode >> delays;
//
//	salary = (linesOfCode / 2) - delays * 20;
//	if (salary == 0)
//		std::cout << "Васе не заплатят денег";
//	else if (salary < 0)
//		std::cout << "Васе не заплатят денег, он еще останется должен компании: "
//		<< -salary << "$";
//	else if (salary > 0)
//		std::cout << "Васе заплатят: " << salary << "$";
//
//	return 0;
//	*/
//}