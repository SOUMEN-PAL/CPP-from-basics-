#include <iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        A(){
            a=20;
        }

        void show(){
            cout<<"The value of a: "<<a<<endl;
        }
};


int main(){
    A *p, *q;
    class A a;
    p=q=&a;
    p->show();
    q->show();
    
    return 0;
}