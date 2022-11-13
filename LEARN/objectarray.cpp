#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;
    string name;

public:
    int x;
    void setdata(void);
    void getdata(void);
    
};
void employee::setdata(void)
{
    salary = 200;
    cout << "Enter your id" << endl;
    cin >> id;
    cout << "Enter your Name" << endl;
    cin >> name;
}
void employee::getdata(void)
{

    cout << "Employee id id " << id << endl;
    cout << "Employee name is: " << name << endl;
}

int main()
{

    employee tb[40];

    
    for (int i = 0; i < 4; i++)
    {
        tb[i].setdata();
        tb[i].getdata();
    }
    
    return 0;
}