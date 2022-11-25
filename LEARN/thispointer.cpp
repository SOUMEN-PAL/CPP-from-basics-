#include <iostream>
using namespace std;

class A{
    int a;
    public:
    void setdata(int a){
        // (*this).a=a; or//
        this->a=a;
        // return *this;
    }

    void getdata(){
        cout<<"The value is: "<<a<<endl;
    }
};

int main(){
    A a;
    a.setdata(2).getdata();
    
    
    return 0;
}