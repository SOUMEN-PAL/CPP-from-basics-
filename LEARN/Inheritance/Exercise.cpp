#include <iostream>
#include <math.h>
using namespace std;

class calculator
{
protected:
    int num1;
    int num2;

public:
    void get_data(void)
    {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
    }

    void add()
    {
        cout << "The addition is: " << num1 + num2 << endl;
    }

    void subb()
    {
        cout << "The Substraction is: " << num1 - num2 << endl;
    }

    void division()
    {
        cout << "The division is: " << num1 / num2 << endl;
    }

    void mul()
    {
        cout << "The multiplication is: " << num1 * num2 << endl;
    }
};

class scientific_calculator
{
protected:
    double y;

public:
    void get_value()
    {
        cout << "Enter the angle: ";
        cin >> y;
    }
    void sine()
    {
        cout << "The value of sin(" << y << ") is: " << sin(y) << endl;
    }

    void cosine()
    {
        cout << "The value of cos(" << y << ") is: " << cos(y) << endl;
    }
    void tanjent()
    {
        cout << "The value of tan(" << y << ") is: " << tan(y) << endl;
    }
    void cosecent()
    {
        cout << "The value of cosec(" << y << ") is: " << asin(y) << endl;
    }
};

class hybrid_calculator : public calculator, public scientific_calculator
{

public:
    void display(void)
    {
        get_data();
        add();
        subb();
        division();
        mul();
        get_value();
        sine();
        cosine();
        tanjent();
        cosecent();
        cout << "< ------Homework done------- >" << endl;
    }
};

int main()
{

    hybrid_calculator candidate1;
    candidate1.display();

    return 0;
}