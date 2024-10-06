//#include <iostream>
//#include<windows.h>
//using namespace std;
//
//void function_level_and_health(int &chooseLevel, int &healthPoints, int &randomDigit, int &leftBorder, int &rightBorder, int &counter1, int &counter2, int &countLevelRounds, int & specialNumbers)
//{
//	if (chooseLevel == 1)
//	{
//		cout << "\033[33m" << "\033[47m"
//			<< "Ваш уровень сложности 1 и угадываемое число находится вдиапазоне [1, 10]" << endl;
//		cout << "(сыграно " << "раундов - " << counter1++ << ")" << endl;
//		if (!(countLevelRounds >= specialNumbers)) // это сравнение нужно чтобы когда игра закончилась новое загаданное число не создавалось просто так иначе всегда проигрышь будет
//		{
//			cout << "\033[0m";
//			healthPoints = 10 / 2;
//			randomDigit = rand() % 10 + 1;
//			leftBorder = 1;
//			rightBorder = 10;
//		}
//	}
//	else if (chooseLevel == 2)
//	{
//		cout << "\033[33m" << "\033[47m"
//			<< "Ваш уровень сложности 2 и угадываемое число находится вдиапазоне [10, 100]" << endl;
//		cout << "(сыграно " << "раундов - " << counter2++ << ")" << endl;
//		cout << "\033[0m";
//		if (!(countLevelRounds >= specialNumbers))
//		{
//			healthPoints = round((100 - 10 + 1.0) / 4); // Прибовляем 1 потому что длинна включая и 10 и 100,
//			// иначе в первом случае было бы не 10, а 9 длинна.
//			randomDigit = rand() % 91 + 10;
//			leftBorder = 10;
//			rightBorder = 100;
//		}
//	}
//}
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	//ЗАДАНИЕ 1
//	/*
//	Написать программу, которая выводит на экран линию
//	заданным символом, вертикальную или горизонтальную,
//	причем линия может выводиться быстро, нормально и медленно.
//	Общение с пользователем организовать через меню.
//	*/
//	/*string lineChoice;
//	char symbolChoice;
//	int speedLines, delayssLines;
//	cout << "Введите из каких символов будет состоять линия: ";
//	cin >> symbolChoice;
//	cout << "Выберети вид линии(horizontal или vertical): ";
//	cin >> lineChoice;
//	cout << "Выберети режим скорости вывода на экран линии(Вводите в мелисекундах) - тоесть задержки" << endl;
//	cout << "Быстрый режим до 1секунды(1000мс), \nнормальный режим от 1 секунды до 2 секунд(2000мс),\n"
//		<< "медленный режим от 2 секунд(от 2000мс): ";
//	cin >> speedLines;
//
//	if (0 > speedLines)
//		cout << "Указанна отрицательная задержка! Ошибка!";
//
//	string vertical = "vertical", horizontal = "horizontal";
//	int result1 = horizontal.compare(lineChoice);
//	int result2 = vertical.compare(lineChoice);
//
//	if (result1 == 0)
//	{
//		for (int ii = 0; ii < 10; ii++)
//		{
//			Sleep(speedLines);
//			cout << symbolChoice;
//		}
//	}
//	else if (result2 == 0)
//	{
//		for (int ii = 0; ii < 10; ii++)
//		{
//			Sleep(speedLines);
//			cout << symbolChoice << endl;
//		}
//	}
//	else
//		cerr << "Ошибка! Неверное указание вида линии!";
//
//	return 0;*/
//
//	// ЗАДАНИЕ 2
//	/*
//	Написать игру «Кубики».Пользователь и компьютер по
//	очереди бросают 2 кубика.Победитель — тот, у кого по результатам трех бросков сумма больше.
//	Предусмотреть красивый интерфейс игры.
//	*/
//
//	// Если нужен красивый интерфейс игры, то тогда пускай все числа включая 3 и ниже
//	// будут окрашены крассным цветом при выпадении игроку или компьютеру
//	// а все числа включая 4 и выше будут окрашеваться зеленым цветом
//	// и перед показом самого числа будет выводится надпись определенного цвета в
//	// зависимости от выпавшего числа, а потом будет выводится и само число
//	/*srand(static_cast<unsigned>(time(nullptr)));
//	int computerСube1 = 0, computerСube2 = 0, humanCube1 = 0, humanCube2 = 0, summComputerCube = 0,
//		summUserCube = 0;
//	string ChoiceFirstThrow;
//	cout << "Введите кто первый бросает кубик (\"user\" или \"computer\"): ";
//	cin >> ChoiceFirstThrow;
//	string ChoiceComputer = "computer", ChoiceUser = "user";
//	string wordLength = "Выпало число - ";
//
//	int counter1 = 0;
//	int counter2 = 0;
//	int localCountComputer1 = 0;
//	int localCountUser1 = 0;
//	int localCountUser2 = 0;
//	int localCountComputer2 = 0;
//	
//
//	// получается за один бросок должно выпасть два числа, потому что бросам два кубика
//	if (ChoiceComputer.compare(ChoiceFirstThrow) == 0)
//	{
//		// Если бы нужно было сделать больше бросков к примеру 4,
//		// то цикл нужно писать с первого броска захватыйвая первый и второй бросок и дальше повторять
//		// это для четных бросоков, для нечетных бросков нужно повторять со второго броска цикл
//		// и дописывать третий бросок и взять в цикл второй и третий броски.
//		// я возьму НЕчетное количество бросков, потому что мне нужно 3 броска и тут же напишу цикл
//		while (counter1++ < 3)
//		{
//			while (localCountComputer1++ < 2)
//			{
//				// Бросает компьютер два раза и счетчик обнуляется.
//				cout << "кубик бросает computer:" << endl;
//				computerСube1 = rand() % 5 + 1;
//				summComputerCube += computerСube1;
//				if (computerСube1 <= 3)
//				{
//					cout << "\033[31m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << computerСube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//				else if (computerСube1 >= 4)
//				{
//					cout << "\033[32m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << computerСube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//			}
//			localCountComputer1 = 0;
//			while (localCountUser1++ < 2)
//			{
//				// Бросает игрок два раза и счетчик обнуляется.
//				cout << "кубик бросает user: " << endl;
//				humanCube1 = rand() % 5 + 1;
//				summUserCube += humanCube1;
//				if (humanCube1 <= 3)
//				{
//					cout << "\033[31m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << humanCube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//				else if (humanCube1 >= 4)
//				{
//					cout << "\033[32m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << humanCube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//			}
//			localCountUser1 = 0;
//		}
//	}
//	else if (ChoiceUser.compare(ChoiceFirstThrow) == 0)
//	{
//		while (counter2++ < 3)
//		{
//			while (localCountUser2++ < 2)
//			{
//				// Бросает игрок два раза и счетчик обнуляется.
//				cout << "кубик бросает user: " << endl;
//				humanCube1 = rand() % 5 + 1;
//				summUserCube += humanCube1;
//				if (humanCube1 <= 3)
//				{
//					cout << "\033[31m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << humanCube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//				else if (humanCube1 >= 4)
//				{
//					cout << "\033[32m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << humanCube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//			}
//			localCountUser2 = 0;
//
//			while (localCountComputer2++ < 2)
//			{
//				// Бросает компьютер два раза и счетчик обнуляется.
//				cout << "кубик бросает computer:" << endl;
//				computerСube1 = rand() % 5 + 1;
//				summComputerCube += computerСube1;
//				if (computerСube1 <= 3)
//				{
//					cout << "\033[31m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << computerСube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//				else if (computerСube1 >= 4)
//				{
//					cout << "\033[32m" << "\033[47m";
//					for (int ii = 0; ii < wordLength.length(); ii++)
//					{
//						Sleep(150);
//						cout << wordLength[ii];
//					}
//					cout << computerСube1 << endl;
//					std::cout << "\033[0m" << "\033[0m";
//				}
//			}
//			localCountComputer2 = 0;
//		}
//	}
//	else
//		cerr << "Ошибка! Укажите верное название того кто первым бросает кубик.";
//
//
//	int cubeMax = max(summComputerCube, summUserCube);
//
//	string winner;
//	// Автоматически победитель это user, но если победитель компьютер то перменная переписыватся
//	// так просто меньше кода для сравнения писать.
//	winner = "User";
//	if (cubeMax == summComputerCube)
//		winner = "Computer";
//
//	cout << "По результатам трех бросков побеждает - " << winner << " у него "
//		<< cubeMax << " - очков.";
//
//	return 0;*/
//	
//	// ЗАДАНИЕ 3
//	/*
//	Написать игру «GUESS MY NUMBER».Пользователь
//	угадывает число, которое «загадал» компьютер.Возможны
//	2 уровня сложности : на первом уровне число от 1 до 10, на
//	втором от 10 до 100. В начале игры пользователь выбирает
//	уровень.
//	В начале каждого уровня игроку даются «жизни» — 50 %
//	от длины диапазона угадывания на первом уровне и 25 % — на
//	втором(пример приведен ниже).За каждую ошибку игрок
//	штрафуется — минус одна жизнь.Предусмотреть в игре возможность подсказки :
//	«загаданное число больше — меньше
//	твоего».Стоимость подсказки — одна жизнь(пользователь
//	может принять подсказку в случае ошибки или отказаться от
//	нее).Уровень продолжается, пока игрок жив или не угадает
//	(состояние игрока «жив» — «убит» отображается рисунком
//	в консоли).
//	Очки после уровня — количество оставшихся жизней,
//	умноженные на 5 для первого уровня и на 10 для второго.
//	Результат игры, количество очков или «Проигрыш», вывести
//	в консоль.
//	*/
//	/*srand(static_cast<unsigned>(time(nullptr)));
//	cout << "Вы играете в игру: «GUESS MY NUMBER»" << endl;
//	int chooseLevel, healthPoints, randomDigit, leftBorder, rightBorder;
//	int guessedNumber, choiseHint;
//	cout << "Выберете уровень сложности(1 или 2) - на первом уровне число от 1 до 10, на"
//		<< "втором от 10 до 100: ";
//	cin >> chooseLevel;
//	if (chooseLevel != 1 && chooseLevel != 2)
//		cerr << "Ошибка! Правильно укажите номер уровня";
//	else if (chooseLevel == 1)
//	{
//		healthPoints = 10 / 2;
//		randomDigit = rand() % 10 + 1;
//		cout << "Ваш уровень сложности 1 и угадываемое число находится вдиапазоне [1, 10]" << endl;
//		leftBorder = 1;
//		rightBorder = 10;
//	}
//	else if (chooseLevel == 2)
//	{
//		healthPoints = round((100 - 10 + 1) / 4); // Прибовляем 1 потому что длинна включая и 10 и 100,
//		// иначе в первом случае было бы не 10, а 9 длинна.
//		randomDigit = rand() % 91 + 10;
//		cout << "Ваш уровень сложности 2 и угадываемое число находится вдиапазоне [10, 100]" << endl;
//		leftBorder = 10;
//		rightBorder = 100;
//	}
//
//	cout << "Ваше количество жизней - " << healthPoints << endl;
//	int counterChoice = 1;
//
//	while (healthPoints > 0)
//	{
//		cout << "Введите предпологаемое вами число: ";
//		cin >> guessedNumber;
//		if (guessedNumber < leftBorder || guessedNumber > rightBorder)
//			cerr << "Вы ввели число вне диапазона выбранного уровня! Попробуйте сначала." << endl;
//		else if (guessedNumber == randomDigit)
//		{
//			cout << "Вы победили!" << " Загаданное число компьютером равно - " << randomDigit << endl;
//			break;
//		}
//		else if (guessedNumber != randomDigit)
//		{
//			healthPoints = healthPoints - 1;
//			cout << "\033[32m" << "\033[47m" << "Вы не угадали (, у вас осталось - " << healthPoints << " жизней." << endl;
//			cout << "\033[0m";
//			for (int ii = 0; ii < healthPoints; ii++)
//				cout << "\033[32m" << "\033[43m" << "*";
//			cout << endl;
//			cout << "\033[0m";
//			while (counterChoice-- > 0 && healthPoints > 0)
//			{
//				cout << "Хотите ли воспользоваться подсказкой?!(1 - да/ 0 - нет): ";
//				cin >> choiseHint;
//				if (choiseHint == 1)
//				{
//					if (guessedNumber > randomDigit)
//						cout << "Ваше число больше числа, загаданного компьютера." << endl;
//					else
//						cout << "Ваше число меньше числа, загаданного компьютера." << endl;
//					healthPoints = healthPoints - 1;
//				}
//				else if (choiseHint == 0)
//					break;
//				else
//				{
//					cout << "Неправильна введена операция" << endl;
//				}
//				cout << "\033[32m" << "\033[47m" << "У вас осталось - " << healthPoints << " жизней." << endl;
//				cout << "\033[0m";
//				for (int ii = 0; ii < healthPoints; ii++)
//					cout << "\033[32m" << "\033[43m" << "*";
//				cout << endl;
//				cout << "\033[0m";
//			}
//			counterChoice = 1;
//		}
//	}
//
//	if (guessedNumber != randomDigit)
//		cout << "\033[31m"<< "\033[47m" << "У вас не осталось жизней. Вы проиграли! (.";
//	else if(guessedNumber == randomDigit && chooseLevel == 1)
//		cout << "\033[32m" << "\033[47m" << "Ваши очки после уровня: " << healthPoints * 5;
//	else if (guessedNumber == randomDigit && chooseLevel == 2)
//		cout << "\033[32m" << "\033[47m" << "Ваши очки после уровня: " << healthPoints * 10;
//
//	cout << "\033[0m";
//
//
//	return 0;*/
//
//	// ЗАДАНИЕ 4
//	/*Модифицировать игру «GUESS MY NUMBER» следующим
//	образом :
//	 пользователь не выбирает уровень, т.к.переход ко второму
//	уровню возможен только после завершения первого без
//	проигрыша(если игрок желает продолжать);
//	 первый уровень длится три раунда(на каждом раунде
//	загадывается новое число), а второй — два раунда.Новые
//	жизни начисляются игроку перед новым раундом.
//	если пользователь проиграл раунд, то компьютеру начисляются очки за раунд в размере начальные жизни
//	пользователя, умноженные на 5 для первого уровня и на
//	10 для второго;
//	количество очков сохраняется и накапливается в раундах
//	и уровнях;
//	 промежуточные итоги выводятся после каждого раунда
//	и уровня.*/
//	/*srand(static_cast<unsigned>(time(nullptr)));
//	cout << "Вы играете в игру: «GUESS MY NUMBER»" << endl;
//	int chooseLevel, healthPoints, randomDigit, leftBorder, rightBorder;
//	int guessedNumber, choiseHint, amountPoints = 0;
//
//	chooseLevel = 1;
//	int counter1 = 0;
//	int counter2 = 0;
//	int externalСontroller = 0;
//	int startLevel2 = 0;
//
//	int counterChoice = 1;
//	int countLevelRounds = 1, specialNumbers = 4;
//	function_level_and_health(chooseLevel, healthPoints, randomDigit, leftBorder, rightBorder, counter1, counter2, countLevelRounds, specialNumbers);
//
//	while (healthPoints > 0)
//	{
//		while (countLevelRounds < specialNumbers && healthPoints > 0)
//		{
//			cout << "Введите предпологаемое вами число: ";
//			cin >> guessedNumber;
//			if (guessedNumber < leftBorder || guessedNumber > rightBorder)
//				cerr << "Вы ввели число вне диапазона выбранного уровня! Попробуйте сначала." << endl;
//			else if (guessedNumber == randomDigit)
//			{
//				function_level_and_health(chooseLevel, healthPoints, randomDigit, leftBorder, rightBorder, counter1, counter2, countLevelRounds, specialNumbers);
//				cout << "\033[33m" << "\033[47m" << "Вы победили!" 
//					<< " Загаданное число компьютером равно - " << randomDigit << endl;
//				if (chooseLevel == 1)
//					amountPoints += healthPoints * 5;
//				else if (chooseLevel == 2)
//					amountPoints += healthPoints * 10;
//				cout << "\033[36m" << "Количество ваших очков: " 
//					<< amountPoints << endl;
//				cout << "\033[0m";
//				++countLevelRounds;
//				if (countLevelRounds >= specialNumbers)
//					break;
//				continue;
//			}
//			else if (guessedNumber != randomDigit)
//			{
//				healthPoints = healthPoints - 1;
//				cout << "\033[32m" << "\033[47m" << "Вы не угадали (, у вас осталось - " << healthPoints << " жизней." << endl;
//				cout << "\033[0m";
//				for (int ii = 0; ii < healthPoints; ii++)
//					cout << "\033[32m" << "\033[43m" << "*";
//				cout << endl;
//				cout << "\033[0m";
//				while (counterChoice-- > 0 && healthPoints > 0)
//				{
//					cout << "Хотите ли воспользоваться подсказкой?!(1 - да/ 0 - нет): ";
//					cin >> choiseHint;
//					if (choiseHint == 1)
//					{
//						if (guessedNumber > randomDigit)
//							cout << "Ваше число больше числа, загаданного компьютером." << endl;
//						else
//							cout << "Ваше число меньше числа, загаданного компьютером." << endl;
//						healthPoints = healthPoints - 1;
//					}
//					else if (choiseHint == 0)
//						break;
//					else
//					{
//						cout << "Неправильна введена операция" << endl;
//					}
//					cout << "\033[32m" << "\033[47m" << "У вас осталось - " << healthPoints << " жизней." << endl;
//					cout << "\033[0m";
//					for (int ii = 0; ii < healthPoints; ii++)
//						cout << "\033[32m" << "\033[43m" << "*";
//					cout << endl;
//					cout << "\033[0m";
//				}
//				counterChoice = 1;
//			}
//			else
//				cout << "Вы ввели не число";
//
//		}
//		if (healthPoints <= 0)
//			break;
//		chooseLevel = 2;
//		for (; 1 > startLevel2; startLevel2++)
//		{
//			countLevelRounds = 1;
//			specialNumbers = 3;
//		}
//		externalСontroller++;
//		if (externalСontroller == 2)
//			break;
//		function_level_and_health(chooseLevel, healthPoints, randomDigit, leftBorder, rightBorder, counter1, counter2, countLevelRounds, specialNumbers);
//	}
//
//	if (guessedNumber != randomDigit && chooseLevel == 1)
//	{
//		cout << "\033[31m" << "\033[47m" << "У вас не осталось жизней. Вы проиграли! (."
//			<< endl;
//		cout << "\033[31m" << "\033[47m" << "Очки компьютера после уровня : "
//			<< 10 / 2 * 5;
//	}
//	else if (guessedNumber != randomDigit && chooseLevel == 2)
//	{
//		cout << "\033[31m" << "\033[47m" << "У вас не осталось жизней. Вы проиграли! (."
//			<< endl;
//		cout << "\033[31m" << "\033[47m" << "Очки компьютера после уровня : "
//			<< round((100 - 10 + 1.0) / 4) * 10;
//	}
//	else if (guessedNumber == randomDigit)
//		cout << "\033[32m" << "\033[47m" << "Ваши очки после уровня: " << amountPoints;
//
//	cout << "\033[0m";
//
//	return 0;*/
//}