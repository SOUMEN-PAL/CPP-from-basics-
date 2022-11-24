#include <iostream>
using namespace std;

class test{
    public:
        int a;
        int b;
        test(int i , int j) : a(i),b(j){
            cout<<"Value of a is: "<<a<<endl;
            cout<<"Value of b is: "<<b<<endl;
        }




};

int main(){
    
    test t(4,6);


    
    return 0;
}