#include <iostream>
using namespace std;

class complex{

    private:
    int a,b;
    public:
    complex(void){
        cout<<"The real par: ";
        cin>>a;
    
        cout<<"the imag part: ";
        cin>>b;
    
    }
    void printnumber(){
        cout<<"your no is "<<a<<"+"<<b<<"i"<<endl;
    }



};

// complex::complex(void){
    
// }


int main(){
    

    complex c,v;
    c.printnumber();
    v.printnumber();

    
    return 0;
}