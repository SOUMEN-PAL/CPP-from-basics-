#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    friend complex sumcomplex(complex o1, complex o2); //------class se written permission for acessing the private data of complex class---//
    void setnumber(int n1, int n2)
    {
        a = n1; // real part //
        b = n2; // complex part //
    }
    void printnumber()
    {
        cout << "your no is " << a << " + " << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{ //----complex class me yeh function uska private data acess karna chata ha so------//
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
// why not iuse the premade function for setting the number,  as it would be easy to get the out put just by calling the output function //
    
    return o3;
    
}

int main()
{

    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c2.setnumber(5, 8);
    c1.printnumber();
    c2.printnumber();
    sum = sumcomplex(c1, c2);
    sum.printnumber();
    return 0;
}