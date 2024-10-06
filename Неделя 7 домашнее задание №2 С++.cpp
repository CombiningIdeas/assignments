//#include <iostream>
//#include <string>
//#include <map>
//
//int main()
//{
//	setlocale(LC_ALL, "russian");
//	//ЗАДАНИЕ 1
//	/*
//	Пользователь вводит число.Определить количество цифр
//	в этом числе, посчитать их сумму и среднее арифметическое.
//	Определить количество нулей в этом числе. Общение с пользователем организовать через меню.
//	*/
//	/*int digit, number, summDigit = 0, counter1 = 0, counter2 = 0;
//	std::cout << "Введите число: ";
//	std::cin >> digit;
//
//	for (int ii = digit; ii > 0; ii = ii / 10)
//	{
//		number = ii % 10;
//		summDigit += number;
//		counter1 += 1;
//		if (number == 0)
//			counter2 += 1;
//	}
//	std::cout << "Сумма цифр числа: " << summDigit << std::endl;
//	double mediumArithmetic = summDigit / static_cast<double>(counter1);
//	std::cout << "Средне арифметическое цифр числа: " << mediumArithmetic << std::endl;
//	std::cout << "Количество нулей в числе: " << counter2;
//
//	return 0;*/
//
//	// ЗАДАНИЕ 2
//	/*
//	Написать программу, которая выводит на экран шахматную
//	доску с заданным размером клеточки.
//	*/
//	// отталкиваемся от того что шахматаная доска это 64 клетки 8*8 стоблцов и рядов,
//	// 32 черных 32 белых клетки
//	// звездочка это белая клтека, а тире это черная клетка.
//	/*int LENGTH;
//	std::cout << "Введите размер клетки: ";
//	std::cin >> LENGTH;
//
//	for (int nn = 0; nn < 4; nn++)
//	{
//		for (int ss = 0; ss < LENGTH; ss++)
//		{
//			for (int ii = 0; ii < 4; ii++)
//			{
//				for (int jj = 0; jj < LENGTH; jj++)
//					std::cout << '*';
//				for (int jj = 0; jj < LENGTH; jj++)
//					std::cout << '-';
//
//			}
//			std::cout << std::endl;
//		}
//
//		for (int ss = 0; ss < LENGTH; ss++)
//		{
//			for (int ii = 0; ii < 4; ii++)
//			{
//				for (int jj = 0; jj < LENGTH; jj++)
//					std::cout << '-';
//				for (int jj = 0; jj < LENGTH; jj++)
//					std::cout << '*';
//
//			}
//			std::cout << std::endl;
//		}
//	}
//	return 0;*/
//
//	// ЗАДАНИЕ 3
//	/*
//	Реализовать программу расчета заказа в кафетерии
//	при условии, что заказ может быть на несколько человек и
//	каждый клиент формирует свою часть заказа.Необходимо
//	спросить у пользователя на сколько человек заказ.Далее
//	каждому человеку выводиться меню(названия напитков,
//	кондитерских изделий и их цена) и он выбирает. 
//	Предусмотреть возможность выбора нескольких элементов меню для
//	клиента, если он желает добавить еще что - то в свой заказ.
//	Результат работы программы — итоговая сумма общего
//	заказа всей компании.
//	*/
//	/*
//	Пример меню я нашел на сайтах и переместил меню сюда.
//	Это применро меню(цены в рублях):
//	Цены в рублях:
//	Напитки:
//	Кофе:
//	60 - Эспрессо Классический
//	100	- Двойной Эспрессо Классический
//	150	- Американо
//	150	- Каппучино Классический
//	250	- Капучино Мега
//	150	- Латте Классический
//	130	- Горячий Шоколад
//
//	Кондитерские изделия:
//	Пирожные:
//	120	- Карамельное Танго
//	120	- Пирожное Миллениум
//	85 - Пирожное Чизкейк
//
//	Мороженое:
//	50 - Мороженое Пломбир
//	*/
//	// В итоге я понял почему задание не работает у меня русификатор в самом коде работает а в консоле русский язык не принимает.
//	/*std::cout << "Меню(Цены в рублях): " << "\nНапитки:" << "\nКофе:"
//		<< "\n60 - EspressoClassic" << "\n60 - DoubleEspressoClassic"
//		<< "\n150 - Americano" << "\n150 - CappuccinoClassic"
//		<< "\n250 - CappuccinoMega" << "\n150 - LatteClassic" << "\n130 - HotChocolate"
//		<< "\n\n\nКондитерские изделия:" << "\nПирожные:" << "\n120 - CaramelTango" 
//		<< "\n120 - MillenniumCake"<< "\n85 - CheesecakeCake" << "\n\nМороженое:"
//		<< "\n50 - IcecreamSundae" << std::endl;
//		
//	int quantityPeople, totalAmount = 0;
//	std::string cafeteriaDrink, cafeteriaFood, cafeteriaChoice;
//	std::cout << "\n\nВведите количество людей: ";
//	std::cin >> quantityPeople;
//	// Тут ниже я нашел способ реализации асоциативного контейнера(похожего на массивы) через map
//	// набором пар {ключ(<std::string), значение(int>)}, <> - это как скобки идут.
//	// Просто я не нашел похожего способа реализацию ассоциативных массивов как в пайтоне, только в С++,
//	// и нашел в итоге map и set.
//	std::map<std::string, int> groceryArray =
//	{
//		{"EspressoClassic", 60}, {"DoubleEspressoClassic", 60},
//		{"Americano", 150}, {"CappuccinoClassic", 150},
//		{"CappuccinoMega", 250}, {"LatteClassic", 150}, {"HotChocolate", 130},
//		{"Caramel Tango", 120}, {"MillenniumCake", 120}, {"CheesecakeCake", 85},
//		{"IcecreamSundae", 50}
//	};
//
//	int counterPeople = 0;
//	while (quantityPeople-- > 0)
//	{
//		counterPeople += 1;
//		std::cout << "Заказ для человека №" << counterPeople << std::endl;
//		std::cout << "\nВведите желаемый напиток: ";
//		std::cin >> cafeteriaDrink;
//		totalAmount += static_cast<int>(groceryArray[cafeteriaDrink]);
//
//		std::cout << "\nВведите желаемое блюдо: ";
//		std::cin >> cafeteriaFood;
//		totalAmount += static_cast<int>(groceryArray[cafeteriaFood]);
//
//		std::cout << "\nХотите ли еще дополнить (Yes/No): ";
//		std::cin >> cafeteriaChoice;
//
//
//		if (cafeteriaChoice == "Yes")
//		{
//			std::cout << "\nВведите желаемый напиток: ";
//			std::cin >> cafeteriaDrink;
//			totalAmount += static_cast<int>(groceryArray[cafeteriaDrink]);
//
//			std::cout << "\nВведите желаемое блюдо: ";
//			std::cin >> cafeteriaFood;
//			totalAmount += static_cast<int>(groceryArray[cafeteriaFood]);
//			continue;
//		}
//		else if (cafeteriaChoice == "No")
//			continue;
//		else
//		{
//			std::cout << "\nВведите правильный ответ либо \"Yes\", либо \"No\": ";
//			std::cin >> cafeteriaChoice;
//			if (cafeteriaChoice == "Yes")
//			{
//				std::cout << "\nВведите желаемый напиток: ";
//				std::cin >> cafeteriaDrink;
//				totalAmount += static_cast<int>(groceryArray[cafeteriaDrink]);
//
//				std::cout << "\nВведите желаемое блюдо: ";
//				std::cin >> cafeteriaFood;
//				totalAmount += static_cast<int>(groceryArray[cafeteriaFood]);
//				continue;
//			}
//			else if (cafeteriaChoice == "No")
//				continue;
//			else
//			{
//				std::cerr << "Опять неверно введен ответ! Попробуйте снова!";
//				break;
//			}
//		}
//		
//	}
//	std::cout << "\nИтоговая сумма общего заказа для всей компании: " << totalAmount;
//
//	return 0;*/
//	
//	// ЗАДАНИЕ 4
//	// Есть пустое поле игры «Морской бой».
//	// Вывести в консоль номера полей игры:
//	/*const char* line[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
//
//	for (int ii = 0; ii < 10; ii++)
//	{
//		for (int jj = 0; jj < 10; jj++)
//		{
//			std::cout << line[jj] << ii << " ";
//		}
//
//		std::cout << std::endl;
//	}
//	
//	
//	return 0;*/
//}