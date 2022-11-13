#include <iostream>
using namespace std;

class complex{
    private:
    int a;
    int b;
    public:
    void setdata(int re , int im){
        
        a=re;
        b=im;

    }
//--------Taking the objects in function and using the objects to pass value---------//
    void setdatasum(complex o1,complex o2){

        a=o1.a+o2.a;//-----getting the rea part of the complex----//
        b=o1.b+o2.b;//-----getting the imaginary part of the complex----//
//------taking the valus in a and b as each objects gets its individual copy of the variables------//


    }
    void printnumber(){
        cout<<"The comolex no is:"<<a<<"+"<<b<<"i"<<endl;


    }



};


int main(){
    
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.printnumber();
    c2.setdata(3,4);
    c2.printnumber();
//-------passing the objects in the c3------//
    c3.setdatasum(c1,c2);
    c3.printnumber();






    
    return 0;
}