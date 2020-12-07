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

    cout << "Программа по вычислению площади и периметра квадрата.";
    cout << endl;
    cout << "Введите сторону квадрата: ";
    int b = getValue();

    Kvadrat one(b);

    int menu;

    cout << "///////////////////////////////////////////////////////" << endl << endl;
    cout << "                   МЕНЮ" << endl;
    cout << "\n Выберете действие: ";
    cout << "\n\n 1 - Площадь квадрата: ";
    cout << "\n 2 - Периметр квадрата:" << endl << endl;;
    cout << "///////////////////////////////////////////////////////" << endl;
    menu = _getch();

    switch (menu) {
    case 49:
        one.square();
        cout << "Площадь квадрата:" << one.getSquare(); break;
    case 50:
        one.perimeter();
        cout << "Периметр квадрата:" << one.getPer(); break;
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
            cout << "Некорректный ввод, введите число" << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else
            return a;
    }
}