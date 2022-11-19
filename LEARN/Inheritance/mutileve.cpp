#include <iostream>
using namespace std;

class student //-----BAse class----//
{
protected:
    int roll_number;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }
    void get_roll_number()
    {
        cout << "The roll no is: " << roll_number << endl;
    }
};

//----single inheritance done here------//
class exam : public student
{ //------- Derived class --------//
protected:
    float math;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam::set_marks(float m, float p)
{
    math = m;
    physics = p;
}

void exam::get_marks()
{
    cout << "The marks are: " << math << " and " << physics << endl;
}

//------- multilevel inheritance---------//
class result : public exam
{ //------ derived form a derived class --------//
    float percentage;

public:
    void display()
    {
        cout << "your percentage is: " << (math + physics) / 2 << endl;
        get_roll_number();
        get_marks();
    }
};

int main()
{
    result harry;
    harry.set_roll_number(420);
    harry.set_marks(90.0, 94.0);
    harry.display();

    return 0;
}