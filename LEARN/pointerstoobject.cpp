#include <iostream>
using namespace std;
class complex{
    private:
        int real,imaginary;
    public:
        void getdata(){
            cout<<"The complex no is: "<<real<<" + j"<<imaginary<<endl;
        }
        void setdata(int a,int b){
            real=a;
            imaginary=b;
        }
};


int main(){
    complex c1;
    complex *ptr=&c1;
    c1.setdata(3,4);
    (*ptr).setdata(9,1);
    c1.getdata();

    ptr->getdata();//--better syntax--//

    complex *ptr1 = new complex[4];
    ptr1->setdata(1,4);
    ptr1->getdata();
    
    return 0;
}