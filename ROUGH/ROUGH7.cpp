#include <iostream>
using namespace std;

class calculator;


class complex
{
private:
    int a, b;
    
public:
    friend class calculator;
    friend int calculator::realcomplex(complex o1,complex o2);//----something fissy here---//
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




class calculator
{
public:
    int add(int n, int m)
    {
        return n + m;
    }
    int realcomplex(complex , complex );

    
};

int calculator::realcomplex(complex o1,complex o2){
    return (o1.a+o2.a);
}




    
int main()
{

    return 0;
}