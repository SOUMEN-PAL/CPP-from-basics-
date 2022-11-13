#include <iostream>
using namespace std;
class y; //--------forward declaration-----//
class x
{
    int data;

public:
    void setdata(int a)
    {
        data = a;
    }
    void printdata()
    {
        cout << "the value is: " << data << endl;
    }
    friend void swap(x &, y &);
};
class y
{

    int data2;

public:
    void setdata(int b)
    {
        data2 = b;
    }
    void printdata()
    {
        cout << "the valus is: " << data2 << endl;
    }
    friend void swap(x &, y &);
};

void swap(x &a, y &b)
{
    int c = a.data; //-----x class ke a object uska private value le raha ha------//
    a.data = b.data2;
    b.data2 = c;
}

int main()
{

    x o1;
    o1.setdata(2);

    y o2;
    o2.setdata(4); //----do alag alag classed ko same object name nahi de sakte warna conflicting declaration show hoga--//

    swap(o1, o2);
    cout << "After swap" << endl;
    o1.printdata();
    cout << "After swap" << endl;
    o2.printdata();

    return 0;
}