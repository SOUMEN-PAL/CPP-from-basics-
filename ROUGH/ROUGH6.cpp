#include <iostream>
using namespace std;
int n;
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
//-------unable to di it now but will do it-------//
        a = o1.a + o2.a; //-----getting the rea part of the complex----//
        b = o1.b + o2.b; //-----getting the imaginary part of the complex----//
//------taking the valus in a and b as each objects gets its individual copy of the variables------//
    }
    void printnumber()
    {
        cout << "The comolex no is:" << a << "+" << b << "i" << endl;
    }
};


int main(){
    cout<<"How many complex no do you have"<<endl;
    cin>>n;
    complex in[n];
    for (int i = 0; i<n; i++)
    {
        in[i].setdata();
        in[i].printnumber();
        
        
    }
    
    
    
    
    
    return 0;
}


//------was unable to take multiple arguments in the function ------//