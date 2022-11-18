#include <iostream>
using namespace std;

class operater{
    private:
    int num1,num2;
    public:
    void sum(void){
        cout<<"GIve no 1: "<<endl;
        cin>>num1;
        cout<<"Give no 2: "<<endl;

        cin>>num2;
    }
    void print(){
        cout<<"The values are "<<num1<<" and "<<num2<<endl;
    }


};



class sub:public operater{
    public:
    int c;
    ser(){
        cout<<"Give c"<<endl;
        cin>>c;
        
    }
};







int main(){
    
    operater add;
    add.sum();
    add.print();

    sub li;
    li.sum();
    li.print();
    li.ser();







    return 0;
}