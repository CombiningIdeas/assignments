//#include <iostream>
//using namespace std;
//
//struct Complex // ����������� ��� ������
//{
//    double real;// �������������� �����
//    double imaginary;// ������ �����
//};
// 
//Complex number1, number2;//������� ��� �������(��� ����������� �����)
//
//// ������� ��� �������� ����������� �����
//void sumComplex(Complex& result);
//
//// ������� ��� ��������� ����������� �����
//void subtractComplex(Complex& result);
//
//// ������� ��� ��������� ����������� �����
//void multiplyComplex(Complex& result);
//
//// ������� ��� ������� ����������� �����
//void divideComplex(Complex& result);
//
//// ������� ��� ������ ������������ �����
//void outputComplex(const Complex& complexNumber);
//
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    /* ������� 1. �������� ���������, ����������� ����������� �����. ���������� 
//    �������������� �������� � ������������ �������: �����, ��������, 
//    ���������, ������� */
//
//    // ������ ��� i^2 = -1;
//    // z = a + bi. z - ����������� �����
//
//    cout << "��� ������������ �����: z = a + bi; z - ����������� �����." << endl;
//    cout << "������ ����� ������������ �����: 5 3, ��� -4 -2, ��� 5 -3;" << endl;
//    cout << "������� ����������� ����� �1(�������������� � ������ ����� ����� ������): ";
//    cin >> number1.real >> number1.imaginary;
//
//    cout << "������� ����������� ����� �2(�������������� � ������ ����� ����� ������): ";
//    cin >> number2.real >> number2.imaginary;
//
//    // ���������� �������������� ��������
//    // ������� ����� �������:
//    Complex sum;
//    sumComplex(sum);// ����������� ������� ���� ����� �������
//    Complex subtraction;
//    subtractComplex(subtraction);
//    Complex multiplication;
//    multiplyComplex(multiplication);
//    Complex division;
//    divideComplex(division);
//
//    // ����� ����������� ���� �������������� ��������
//    cout << "�����: ";
//    outputComplex(sum);
//    cout << "��������: ";
//    outputComplex(subtraction);
//    cout << "������������: ";
//    outputComplex(multiplication);
//    cout << "�������: ";
//    outputComplex(division);
//
//    return 0;
//}
//
//
//void sumComplex(Complex& result)
//{
//    result.real = number1.real + number2.real;// ���������� �������� �����
//    result.imaginary = number1.imaginary + number2.imaginary;// ���������� ������ �����
//}
//
//
//void subtractComplex(Complex& result)
//{
//    result.real = number1.real - number2.real;// ��������� �������� �����
//    result.imaginary = number1.imaginary - number2.imaginary;// ��������� ������ �����
//}
//
//
//void multiplyComplex(Complex& result)
//{
//    result.real = number1.real * number2.real - 
//        number1.imaginary * number2.imaginary;
//    result.imaginary = number1.imaginary * number2.real + 
//        number1.real * number2.imaginary;
//}
//
//
//void divideComplex(Complex& result)
//{
//    double denominator = number2.real * number2.real//����������� �������� ������ �� ����
//        + number2.imaginary * number2.imaginary;
//    result.real = (number1.real * number2.real + 
//        number1.imaginary * number2.imaginary) / denominator;// ��� ��������� �������� �� ����������� � �������� �����
//    result.imaginary = (number1.imaginary * number2.real - 
//        number1.real * number2.imaginary) / denominator;// ��� ��������� �������� �� ����������� � ������ �����
//}
//
//
//void outputComplex(const Complex& complexNumber)
//{
//    cout << complexNumber.real;// ������� �������� �����
//
//    if (complexNumber.imaginary >= 0)// ������� ������ �����
//        cout << " + " << complexNumber.imaginary << "i";
//    else
//        cout << " - " << -complexNumber.imaginary << "i";
//    // ����� ������ ��������� ������ ��� ����� ��� ������, 
//    // � ��� ����� 2 ������ ���� ���� �� ������
//
//    cout << endl;
//}