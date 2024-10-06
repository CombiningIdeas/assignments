//#include <iostream>
//using namespace std;
//
//// пишем это не в main потому что иначе много параметров передовать в функции
//const int LENGTH = 8;// (от 1 до 8) и (от A до H)
//int X_LETTERS[LENGTH * LENGTH], Y_NUMBERS[LENGTH * LENGTH]; 
//// так как доска шахматная не будет расширятся то будет два статических массива
//
//enum LETTERS_HORIZONTAL
//{
//    A = 1, B = 2, C = 3, D = 4, E = 5, F = 6, G = 7, H = 8
//};
//
//bool exist(int x, int y, int moveCounter);
//
//bool gameAlgorithm(int moveCounter);
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    /* Задание 1. Дана шахматная доска размером 8×8 и шахматный конь. 
//    Программа должна запросить у пользователя
//    координаты клетки поля и поставить туда коня. Задача
//    программы найти и вывести путь коня, при котором он
//    обойдет все клетки доски, становясь в каждую клетку
//    только один раз. (Так как процесс отыскания пути для
//    разных начальных клеток может затянуться, 
//    то рекомендуется сначала опробовать задачу на поле размером
//    6×6). В программе необходимо использовать рекурсию.*/
//    cout << "Введиет какую-нибудь клетку шахматного поля"
//        << "(к примеру A1 или B2 - ввоидте буквы с английской раскладки, через пробел): ";
//
//    char LETTER;
//    cin >> LETTER >> Y_NUMBERS[0];
//
//    if (LETTER == 'A')
//        X_LETTERS[0] = LETTERS_HORIZONTAL::A;
//    else if (LETTER == 'B')
//        X_LETTERS[0] = LETTERS_HORIZONTAL::B;
//    else if (LETTER == 'C')
//        X_LETTERS[0] = LETTERS_HORIZONTAL::C;
//    else if (LETTER == 'D')
//        X_LETTERS[0] = LETTERS_HORIZONTAL::D;
//    else if (LETTER == 'E')
//        X_LETTERS[0] = LETTERS_HORIZONTAL::E;
//    else if (LETTER == 'F')
//        X_LETTERS[0] = LETTERS_HORIZONTAL::F;
//    else if (LETTER == 'G')
//        X_LETTERS[0] = LETTERS_HORIZONTAL::G;
//    else if (LETTER == 'H')
//        X_LETTERS[0] = LETTERS_HORIZONTAL::H;
//
//
//    if (gameAlgorithm(0) == true)// в самом начале мы сделали 0 ходов поэтому передаем в функцию 0
//        for (int i = 0; i < LENGTH * LENGTH; i++)
//        {
//            if (X_LETTERS[i] == 1)
//                LETTER = 'A';
//            else if (X_LETTERS[i] == 2)
//                LETTER = 'B';
//            else if (X_LETTERS[i] == 3)
//                LETTER = 'C';
//            else if (X_LETTERS[i] == 4)
//                LETTER = 'D';
//            else if (X_LETTERS[i] == 5)
//                LETTER = 'E';
//            else if (X_LETTERS[i] == 6)
//                LETTER = 'F';
//            else if (X_LETTERS[i] == 7)
//                LETTER = 'G';
//            else if (X_LETTERS[i] == 8)
//                LETTER = 'H';
//            cout << "(" << LETTER << Y_NUMBERS[i] << "); ";
//        }
//    else cout << "No solutions!!\n";
//}
//
//bool exist(int x, int y, int moveCounter)
//{
//    // этот цикл нужен чтобы конь не возвращался туда где уже был.
//    for (int ii = 0; ii <= moveCounter; ii++)
//        if (X_LETTERS[ii] == x && Y_NUMBERS[ii] == y)
//            return true;
//    return false;
//}
//
//bool gameAlgorithm(int moveCounter)
//{
//    // moveCounter - это счетчик ходов который нужно сделать ровно 64 раза
//    if (moveCounter + 1 >= LENGTH * LENGTH)
//        return true;
//
//    for (int dx = -2; dx <= 2; dx++)
//    {
//        for (int dy = -2; dy <= 2; dy++)
//        {
//            if (abs(dx) + abs(dy) != 3)// это задает как будет ходить фигура
//                continue;// если к примеру, != 1 то тогда будет как король/ладья ходить.
//
//            int xn = X_LETTERS[moveCounter] + dx, yn = Y_NUMBERS[moveCounter] + dy;
//
//            if (xn < 1 || xn > LENGTH || yn < 1 || yn > LENGTH)
//                continue;
//
//            if (exist(xn, yn, moveCounter) == true)
//                continue;
//
//            X_LETTERS[moveCounter + 1] = xn; Y_NUMBERS[moveCounter + 1] = yn;
//            if (gameAlgorithm(moveCounter + 1) == true)
//                return true;
//        }
//    }
//    return false;
//}