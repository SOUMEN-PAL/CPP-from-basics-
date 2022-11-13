#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int n, int m)
    {
        return n + m;
    }
    int realcomplex(complex o1, complex o2);
    int compcomplex(complex o1, complex o2);
};
class complex
{
private:
    int a, b;

public:
    friend int calculator::realcomplex(complex o1, complex o2);
    friend int calculator::compcomplex(complex o1, complex o2);
    void getnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnum()
    {
        cout << "Your no is" << a << " + " << b << " i " << endl;
    }
};

int calculator::realcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::compcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.getnum(1, 4);
    o2.getnum(3, 4);
    calculator calc;
    int res = calc.realcomplex(o1, o2);
    cout << "the sum of real part of complex is " << res << endl;
    int resc = calc.compcomplex(o1, o2);
    cout << "the sum of real part of complex is " << resc << endl;
    return 0;
}