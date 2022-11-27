//-------Example of Vistual Functions--------//

#include <iostream>
using namespace std;

class Base{
    protected:
        int a;
        int b;
    public:
        
        Base(){
            cout<<"Give vaalue of a and b: "<<endl;
            cin>>a>>b;
        }
        virtual void sum(){
            cout<<"THe sum is: "<<a+b<<endl;
        }
};

class Derived : public Base{
    private:
        int c;
    public:
        Derived():Base(){
            cout<<"Enter The value of c"<<endl;
            cin>>c;
        }

        void sum(){
            cout<<"The sum of all three is: "<<a+b+c<<endl;
        }
};

int main(){
    
    Base *p;
    Derived d;
    p=&d;
    p->sum();



    return 0;
}