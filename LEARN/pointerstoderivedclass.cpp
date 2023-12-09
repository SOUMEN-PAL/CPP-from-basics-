#include <iostream>
using namespace std;


class Base_class{
    public:
        int var_base;
        void display(){
            cout<<"The value of Var_base is: "<<var_base<<endl;
        }
};

class Derived_class : public Base_class{
    public:
        int Var_derived;
        void display(){
            cout<<"The value of Var_base is: "<<var_base<<endl;
            cout<<"The value of Derived_Base is: "<<Var_derived<<endl;
        }

};



int main(){

    Base_class *Base_class_pointer;
    
    // Base_class_pointer->var_base=20;
    // Base_class_pointer->display();
    
    
    Derived_class obj_derived;
    Base_class obj_base;
    Base_class_pointer=&obj_derived;
    Base_class_pointer->var_base=10;
    
    Base_class_pointer->display();
    obj_derived.display();
 


    return 0 ;
}