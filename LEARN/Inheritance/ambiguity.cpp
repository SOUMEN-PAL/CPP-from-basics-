#include <iostream>
using namespace std;

class base1{
    public:
    void greed(){
        cout<<"How are you"<<endl;
    }

};

class base2{
    public:
    void greed(){
        cout<<"Kaise ho"<<endl;
    }
};


class derived : public base1,public base2{
    int a;
    public:
    void greed(){
        base1::greed();// ------ambiguity resolution is done here------ //
    }


};

class b{
    public:
    void say(){
        cout<<"Hello world"<<endl;
    }
};

class d : public b{
    int a;
    public:
    void say(){
        cout<<"Kaise ho"<<endl;
    }
};


int main(){

/* AMBIGUITY 1  
    base1 base1obj;
    base2 base2obj;
    base1obj.greed();
    base2obj.greed();
    derived d;
    d.greed();

*/
//AMbiguity 2//
    d D;
    D.say();




    return 0;
}