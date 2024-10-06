//#include <iostream>
//using namespace std;
//
//int program_BullsAndCows(int guessedNum, int totalUserNum, int count)
//{
//	cout << "Попробйте отгадать число: ";
//	cin >> totalUserNum;
//	if (totalUserNum > 9999 || totalUserNum < 1000)
//	{
//		cerr << "Ошибка! Введено не четырехзначное число, попробуйте снова" << endl;
//		program_BullsAndCows(guessedNum, totalUserNum, count);
//	}
//	count++;
//
//	if (guessedNum == totalUserNum)
//		return count;
//	else
//	{
//		int gues, total, bullsCount = 0, cowCount = 0;
//		for (int ii = guessedNum, jj = totalUserNum; ii > 0 && jj > 0;) // 4 - длинаа числа.
//		{
//			gues = ii % 10;
//			total = jj % 10;
//			if (gues == total)
//				cowCount += 1;
//			ii = ii / 10;
//			jj = jj / 10;
//		}
//		
//
//		for (int ii = guessedNum; ii > 0;)// этот цикл отвечает за guessedNum
//		{
//			gues = ii % 10;
//			for (int jj = totalUserNum; jj > 0;)// а этот цил отвечает за totalUserNum 
//			{
//				
//				total = jj % 10;
//				if (gues == total)
//					bullsCount += 1;
//				jj = jj / 10;
//			}
//			ii = ii / 10;
//		}
//
//		cout << "Количество угаданных цифр всего: " << bullsCount << endl;
//		cout << "Количество угаданных цифр, которые стоят на своем месте: " 
//			<< cowCount << endl;
//	}
//
//	program_BullsAndCows(guessedNum, totalUserNum, count);
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// Задание 3. 
//	/* Написать игру «Быки и коровы». Программа
//	«загадывает» четырёхзначное число и играющий должен
//	угадать его. После ввода пользователем числа программа
//	сообщает, сколько цифр числа угадано(быки) и сколько
//	цифр угадано и стоит на нужном месте(коровы).После
//	отгадывания числа на экран необходимо 
//	вывести количество сделанных пользователем попыток. В программе
//	необходимо использовать рекурсию. */
//	srand(static_cast<unsigned int>(time(nullptr)));
//	// загадываем четрыхзначное число
//	int	guessedNumber = rand() % 9000 + 1000; 
//	int totalUserNumber = 0, counter = 0;
//
//	cout << "Игра быки и коровы. Нужно угадать четырехзначное число" << endl;
//	cout << "\nПоздравляем вы отгадали число и на это у вас ушло " 
//		<< program_BullsAndCows(guessedNumber, totalUserNumber, counter) 
//		<< " - попыток\n";
//	 
//
//
//
//	return 0;
//}