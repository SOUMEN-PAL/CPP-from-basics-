#include <iostream>
using namespace std;

class person
{
private:
    string name;
    int age;

public:
    void input()
    {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
    void show()
    { // on;ymaking it for the thir class which will be getting the class as return //
        cout << "Elder person: " << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    person display(person x)
    {
        // i wanted the return as an object so that i cant use the show() function on it //
        cout << "The obj1 is: " << endl;
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;

        cout << "The obj2 is: " << endl;
        cout << "Name: " << x.name << endl;
        cout << "Age: " << x.age << endl;

        if (this->age > x.age)
        {
            return *this;
        }
        else
        {
            return x;
        }
    }
};

int main()
{

    person n, n1, n2;
    n1.input();
    n2.input();
    n = n1.display(n2);
    n.show();

    return 0;
}