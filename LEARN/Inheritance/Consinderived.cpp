#include <iostream>
using namespace std;


class base1{
    int data1;
    public:
        base1(int i){ //--argument ha----//
            data1=i;
            cout<<"Base1 class constructor run"<<endl;
        }
        void printdatab1(void){
            cout<<"THe value of data1 is "<<data1<<endl;
        }

};


class base2{
    int data2;
    public:
        base2(int i){//--argument ha----//
            data2=i;
            cout<<"Base2 class constructor run"<<endl;
        }
        void printdatab2(void){
            cout<<"THe value of data2 is "<<data2<<endl;
        }




};


class derived : public base1, public base2{
    int derived1,derived2;
    public:
        derived(int a,int b,int c,int d): base1(a),base2(b){
//------as base class constructor me arguments ha toh derived class me saro ko pass karake batna padega--//
            derived1=c;
            derived2=d;
            cout<<"derived class constructor called "<<endl;
        }

        void printdatad(void){
            cout<<"THe value of derived1 is "<<derived1<<endl;
            cout<<"THe value of derived2 is "<<derived2<<endl;
        }

        

};

int main(){
    derived harry(1,2,3,4);
    harry.printdatab1();
    



    
    return 0;
}



/*
Base1 class constructor run
Base2 class constructor run
derived class constructor called        
THe value of data1 is 1
*/