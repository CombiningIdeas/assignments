//#include <iostream>
//#include <string>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	//ЗАДАНИЕ 1
//	/*
//	Написать программу, реализующую процедуры заказа и
//	расчета его суммы в мини — пиццерии.В меню пиццерии
//	предусмотрено 4 вида пиццы и три вида напитков.
//	Пользователю выводится меню(вначале пиццы, потом
//	напитки), содержащее код и название.Пользователь вводит
//	код желаемого продукта, после чего вводит количество единиц
//	данного продукта.
//	В пиццерии предусмотрены два вида скидок :
//	1)если общая сумма заказа более 50$, то размер скидки составляет 20 % от суммы заказа;
//	2)каждая пятая пицца — в подарок;
//	3)для напитков с ценой более 2$, если количество в заказе более трех, то скидка 15 % 
//	(только на напитки, а не на
//	весь заказ).
//	Вывести пользователю «чек» для оплаты в виде : название —
//	количество — цена.Итого к оплате.
//	*/
//	/*
//	//Если продукты находятся под опредленным кодом, то нужно придумать эту кодировку продуктов
//	//и написать на против какой это продукт и предложить на выбор пользователю.
//	
//	std::cout << "\tМини пиццерия" << std::endl;
//	std::cout << "В рестаране есть 4 пиццы на выбор, каждая из пицц имеет свой кодовый номер:\n"
//		<< "1 - Пепперони\n" << "2 - Маргарита\n" << "3 - Четыре сезона\n" << "4 - Четыре сыра"
//		<< std::endl;
//	std::cout << "В рестаране есть 3 вида напитков:\n"
//		<< "5 - Coca-cola\n" << "6 - Fanta\n" << "7 - Sprite" << std::endl;
//	std::cout << "Чтобы не брать продукт достаточно ввести 0 или в сам продукт,"
//		<< " или в количество продукта\n" << std::endl;
//	std::cout << "Каждая пицца стоит 7,1$(540руб)" << std::endl;
//	std::cout << "1 литр любого напитка стоит 1$(75руб)\n" << std::endl;
//	std::cout << "В пиццерии предусмотрены два вида скидок:\n"
//		<< "1)если общая сумма заказа более 50$, то размер скидки составляет 20 % от суммы заказа;\n"
//		<< "2)каждая пятая пицца — в подарок;\n"
//		<< "3)для напитков с ценой более 2$, если количество в заказе более трех, то скидка 15 %"
//		<< "(только на напитки, а не на весь заказ).\n" << std::endl;
//	int pizza, drink, quantityPizza, giftPizza, cupsBottles;
//	double quantityDrink, resultDrink, resultPizza, result;
//	std::string namePizza, nameDrink;
//	std::cout << "Выберите пиццу(через код) и количество пиццы через пробел: ";
//	std::cin >> pizza >> quantityPizza;
//	std::cout << "Выберите напиток(через код) и количество литров(0.3; 0.5; 1; 2; 2.5)"
//		<< "и число стаканчиков(или бутылок) через пробел : ";
//	std::cin >> drink >> quantityDrink >> cupsBottles;
//	// проверка на правельность введенных литров как в консоле в скобках
//	if (quantityDrink != 0 && quantityDrink != 0.3 && quantityDrink != 0.5 && quantityDrink != 1 &&
//		quantityDrink != 2 && quantityDrink != 2.5)
//	{
//		std::cout << "Введите правильное количество литров!";
//		return 0;
//	}
//	int ii = 0;
//	giftPizza = quantityPizza;
//	// таким образом вычитаем подарочную пиццу.
//	for (; giftPizza >= 5; )
//	{
//		giftPizza = giftPizza - 5;
//		++ii;
//	}
//	quantityPizza = giftPizza + (4 * ii);
//	switch (pizza)
//	{
//	case 1:
//		resultPizza = 7.1 * quantityPizza;
//		break;
//	case 2:
//		resultPizza = 7.1 * quantityPizza;
//		break;
//	case 3:
//		resultPizza = 7.1 * quantityPizza;
//		break;
//	case 4:
//		resultPizza = 7.1 * quantityPizza;
//		break;
//	case 0:
//		resultPizza = 0;
//		quantityPizza = 0;
//		break;
//	default:
//		std::cout << "Ошибка! Введите правильный код продукта";
//		break;
//	}
//	if (pizza == 1)
//		namePizza = "Пицца пепперони";
//	else if (pizza == 2)
//		namePizza = "Пицца маргарита";
//	else if (pizza == 3)
//		namePizza = "Пицца четыре сезона";
//	else if (pizza == 4)
//		namePizza = "Пицца четыре сыра";
//	else if (pizza == 0)
//		namePizza = "Пицца отсутсвует";
//	switch (drink)
//	{
//	case 5:
//		resultDrink = cupsBottles * quantityDrink;
//		break;
//	case 6:
//		resultDrink = cupsBottles * quantityDrink;
//		break;
//	case 7:
//		resultDrink = cupsBottles * quantityDrink;
//		break;
//	case 0:
//		resultDrink = 0;
//		cupsBottles = 0;
//		quantityDrink = 0;
//		break;
//	}
//	if (drink == 5)
//		nameDrink = "Coca-cola";
//	else if (drink == 6)
//		nameDrink = "Fanta";
//	else if (drink == 7)
//		nameDrink = "Sprite";
//	else if (drink == 0)
//		nameDrink = "Напиток отсутсвует";
//	// проверка на скидку по напиткам
//	if (cupsBottles >= 3 && quantityDrink >= 2)// (>= 2) - потому что 1 литр это один доллар, а скидка с двух.
//	{
//		resultDrink = (85 * resultDrink) / 100; // таким образом получаем скидку на 15% на напитки.
//	}
//	
//	result = resultPizza + resultDrink;
//	if ((result) >= 50)
//		result = (80 * result) / 100;
//	std::cout << "\tЧек для оплаты:" << std::endl;
//	std::cout << namePizza << " - " << quantityPizza << " - " << resultPizza << "$" << std::endl;
//	std::cout << nameDrink << " - " << quantityDrink << " литров в количестве" << " - " << cupsBottles
//		<< " стакачиков(бутылок)" << " - " << resultDrink << "$" << std::endl;
//	std::cout << "\tИтог к оплате: " << result << "$";
//	*/
//	
//    //ЗАДАНИЕ 2
//    /*Зарплата менеджера составляет 200$ + процент от продаж,
//    продажи до 500$ — 3 %, от 500 до 1000 — 5 %, свыше 1000 —
//    8 % .Пользователь вводит с клавиатуры уровень продаж
//    для трех менеджеров.Определить их зарплату, определить
//    лучшего менеджера, начислить ему премию 200$, вывести
//    итоги на экран.
//    Примечание: уровень продаж у всех трех менеджеров
//    разный.
//    */
//    /*
//    double percentageManager1, percentageManager2, percentageManager3, salary,
//		totalSalaryManager1, totalSalaryManager2, totalSalaryManager3;
//	std::cout << "Введите уровень процента от продаж трех менеджеров, через пробел: ";
//	std::cin >> percentageManager1 >> percentageManager2 >> percentageManager3;
//    
//	salary = 200;
//
//	if (percentageManager1 <= 500)
//		totalSalaryManager1 = (percentageManager1 * 3) / 100 + 200;
//	else if (500 < percentageManager1 && percentageManager1 <= 1000)
//		totalSalaryManager1 = (percentageManager1 * 5) / 100 + 200;
//	else if (1000 < percentageManager1)
//		totalSalaryManager1 = (percentageManager1 * 8) / 100 + 200;
//
//	if (percentageManager2 <= 500)
//		totalSalaryManager2 = (percentageManager2 * 3) / 100 + 200;
//	else if (500 < percentageManager2 && percentageManager2 <= 1000)
//		totalSalaryManager2 = (percentageManager2 * 5) / 100 + 200;
//	else if (1000 < percentageManager2)
//		totalSalaryManager2 = (percentageManager2 * 8) / 100 + 200;
//
//	if (percentageManager3 <= 500)
//		totalSalaryManager3 = (percentageManager3 * 3) / 100 + 200;
//	else if (500 < percentageManager3 && percentageManager3 <= 1000)
//		totalSalaryManager3 = (percentageManager3 * 5) / 100 + 200;
//	else if (1000 < percentageManager3)
//		totalSalaryManager3 = (percentageManager3 * 8) / 100 + 200;
//
//
//	std::cout << "Зарплаты менеджеров без учета лучшего: " << std::endl;
//	std::cout << "Зарплата первого менеджера: " << totalSalaryManager1 << "$" << std::endl;
//	std::cout << "Зарплата второго менеджера: " << totalSalaryManager2 << "$" << std::endl;
//	std::cout << "Зарплата третьего менеджера: " << totalSalaryManager3 << "$" << std::endl;
//
//	if (totalSalaryManager1 > totalSalaryManager2 && totalSalaryManager1 > totalSalaryManager3)
//	{
//		totalSalaryManager1 = totalSalaryManager1 + 200;
//		std::cout << "Лучшим менеджером является первый менеджер, его зарплата составляет: "
//			<< totalSalaryManager1 << "$";
//	}
//	else if (totalSalaryManager2 > totalSalaryManager3 && totalSalaryManager2 > totalSalaryManager1)
//	{
//		totalSalaryManager2 = totalSalaryManager2 + 200;
//		std::cout << "Лучшим менеджером является второй менеджер, его зарплата составляет: "
//			<< totalSalaryManager2 << "$";
//	}
//	else if (totalSalaryManager3 > totalSalaryManager2 && totalSalaryManager3 > totalSalaryManager1 )
//	{
//		totalSalaryManager3 = totalSalaryManager3 + 200;
//		std::cout << "Лучшим менеджером является третий менеджер, его зарплата составляет: "
//			<< totalSalaryManager3 << "$";
//	}
//
//
//
//
//	// Можно было бы и так ссделать:
//	//double topManager = std::max(totalSalaryManager1, totalSalaryManager2, totalSalaryManager3);
//	//topManager = topManager + 200;
//
//    return 0;
//	*/
//}