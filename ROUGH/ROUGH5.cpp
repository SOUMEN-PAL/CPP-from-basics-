//---------Modified just taking the input rather then specifying the values




#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    void setdata(void)
    {

        cout<<"Enter the real part: "<<endl;
        cin>>a;
        cout<<"enter the imginary part: "<<endl;
        cin>>b;
        
    }
    //--------Taking the objects in function and using the objects to pass value---------//
    void setdatasum(complex o1, complex o2)
    {

        a = o1.a + o2.a; //-----getting the rea part of the complex----//
        b = o1.b + o2.b; //-----getting the imaginary part of the complex----//
//------taking the valus in a and b as each objects gets its individual copy of the variables------//
    }
    void printnumber()
    {
        cout << "The comolex no is:" << a << "+" << b << "i" << endl;
    }
};

int main()
{

    complex c1, c2, c3;
    c1.setdata();
    c1.printnumber();
    c2.setdata();
    c2.printnumber();
    //-------passing the objects in the c3------//
    c3.setdatasum(c1, c2);
    c3.printnumber();

    return 0;
}