//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Car // ������� ����� ��� ������ ��� ������
//{
//    // ������� ���� ��� �������� ������� � ����������� � ��������
//    double length;
//    double clearance;
//    double engineVolume;
//    double enginePower;
//    double wheelDiameter;
//    string color;
//    string gearboxType;
//};
//
//Car car;// �������� ������� ������
//
//// ������� ��� ������� �������� ����������
//void setCarValues();
//
//// ������� ��� ����������� �������� ����������
//void displayCarValues();
//
//// ������� ��� ������ �������� ���������� �� ��������� ���������
//void searchCarValues(const string parameter);
//
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    /* ������� 2. ����������� ��������� ������������ (�����, ������� (������
//    �������), ����� ���������, �������� ���������, ������� �����, ����, 
//    ��� ������� �������). �������� ������� ��� ������� ��������, 
//    ����������� ��������, ������ ��������. */
//
//    
//
//    cout << "������� �������� ����������:" << endl;
//    setCarValues();
//
//    cout << "����������� �������� ����������:" << endl;
//    displayCarValues();
//
//
//    cout << "������� ���������� ��� ������: " << endl;
//    cout << "1) - length\n" << "2) - clearance\n" << "3) - engine volume\n"
//        << "4) - engine power\n" << "5) - wheel diameter\n" << "6) - color\n"
//        << "7) - gearbox type\n\n" << "0 - ���� ������ �������� �����\n\n";
//    cout << "������� �������� � �� �����:\n";
//    cout << "����� �������� ����������:" << endl;
//    while (true)
//    {
//        string searchParameter;
//        cout << "������� �������� ��� ������: ";
//        getline(cin, searchParameter, '\n');
//        if (searchParameter == "0")
//            break;
//        searchCarValues(searchParameter);
//    }
//
//    return 0;
//}
//
//
//void setCarValues()
//{
//    cout << "������� ����� ����������(� ������): ";
//    cin >> car.length;
//    cout << "������� ������� (������ �������) ����������(� �����������): ";
//    cin >> car.clearance;
//    cout << "������� ����� ��������� ����������(� ������): ";
//    cin >> car.engineVolume;
//    cout << "������� �������� ��������� ����������, ���� ��� �� 1,36 ��������� ���� ����� 1 ���������(� ����������): ";
//    cin >> car.enginePower;
//    cout << "������� ������� ����� ����������(� �����������): ";
//    cin >> car.wheelDiameter;
//    cout << "������� ���� ����������(�� ����������): ";
//    cin.ignore(1024, '\n'); // ������� ����� ����� ����� ���� ������ �� ���������
//    getline(cin, car.color, '\n');
//    cout << "������� ��� ������� ������� ����������(�� ����������): ";
//    getline(cin, car.gearboxType, '\n');
//}
//
//
//void displayCarValues()
//{
//    cout << "����� ����������: " << car.length << endl;
//    cout << "������� (������ �������) ����������: " << car.clearance << endl;
//    cout << "����� ��������� ����������: " << car.engineVolume << endl;
//    cout << "�������� ��������� ����������: " << car.enginePower << endl;
//    cout << "������� ����� ����������: " << car.wheelDiameter << endl;
//    cout << "���� ����������: " << car.color << endl;
//    cout << "��� ������� ������� ����������: " << car.gearboxType << endl;
//}
//
//
//void searchCarValues(const string parameter)
//{
//    if (parameter == "length")
//        cout << "����� ����������: " << car.length << endl;
//    else if (parameter == "clearance")
//        cout << "������� (������ �������) ����������: " << car.clearance << endl;
//    else if (parameter == "engine volume")
//        cout << "����� ��������� ����������: " << car.engineVolume << endl;
//    else if (parameter == "engine power")
//        cout << "�������� ��������� ����������: " << car.enginePower << endl;
//    else if (parameter == "wheel diameter")
//        cout << "������� ����� ����������: " << car.wheelDiameter << endl;
//    else if (parameter == "color")
//        cout << "���� ����������: " << car.color << endl;
//    else if (parameter == "gearbox type")
//        cout << "��� ������� ������� ����������: " << car.gearboxType << endl;
//    else
//        cout << "������������ �������� ������." << endl;
//}