#include <iostream>
using namespace std;

class Base{
    protected:
    int a;
    private:
    int b;
    public:
   

};


class Derived : protected Base{
    
    public:
    void print(void){
        a=101;//----- as a  is protected we are able to inherit it----//
        cout<<a<<endl;
    }
    int c;
    
};





int main(){
    Derived dr1;
    dr1.print();

  
    
    return 0;
}