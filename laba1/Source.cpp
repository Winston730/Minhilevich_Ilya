#include <iostream>
#include <conio.h>

using namespace std;

int getValue();
class Kvadrat
{
private:

    int a;
    int square2 = 0;
    int perimeter2 = 0;

public:
    Kvadrat(int b)
    {
        a = b;
    }
    void square()
    {
        square2 = a * a;
    }
    void perimeter()
    {
        perimeter2 = 4 * a;
    }
    int getSquare()
    {
        return square2;
    }
    int getPer()
    {
        return perimeter2;
    }

};

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "��������� �� ���������� ������� � ��������� ��������.";
    cout << endl;
    cout << "������� ������� ��������: ";
    int b = getValue();

    Kvadrat one(b);

    int menu;

    cout << "///////////////////////////////////////////////////////" << endl << endl;
    cout << "                   ����" << endl;
    cout << "\n �������� ��������: ";
    cout << "\n\n 1 - ������� ��������: ";
    cout << "\n 2 - �������� ��������:" << endl << endl;;
    cout << "///////////////////////////////////////////////////////" << endl;
    menu = _getch();

    switch (menu) {
    case 49:
        one.square();
        cout << "������� ��������:" << one.getSquare(); break;
    case 50:
        one.perimeter();
        cout << "�������� ��������:" << one.getPer(); break;
    }

    cout << endl;
    system("pause");
    return 0;
}



int getValue()
{
    while (true)
    {
        int a;
        cin >> a;

        if (cin.fail())
        {
            cout << "������������ ����, ������� �����" << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else
            return a;
    }
}