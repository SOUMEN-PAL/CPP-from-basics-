#include <iostream>
using namespace std;

class Base_class{
    public:
        int Var_base;
        virtual void display(){
            cout<<"The value of Var_base is: "<<Var_base<<endl;
        }
};

class Derived_class : public Base_class{
    public:
        int Var_derived=3;
        void display(){
            cout<<"The value of Var_base is: "<<Var_base<<endl;
            cout<<"The value of Derived_Base is: "<<Var_derived<<endl;
        }

};



int main(){
    

    Base_class *Base_class_pointer;
    Derived_class Obj_derived;
    Base_class_pointer=&Obj_derived;
    Base_class_pointer->Var_base=20;
    Base_class_pointer->display();

    
    return 0;
}