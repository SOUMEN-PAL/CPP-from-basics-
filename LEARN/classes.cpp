#include <iostream>
using namespace std;


class employee
{

    private:
    int a,b,c;//-----we cant declare function in private if declared it will onlyr acessed bu the functions declared here-------//
    public:
    int d,e;
    void setdata(int a1, int b1, int c1);//declaration somewhat like prototyping//
    void getdata();



};
void employee::getdata(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;            
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of d is "<<d<<endl;
    cout<<"the value of e is "<<e<<endl;
}

void employee::setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;

}


int main(){
    


    employee harry;//------this is an object in class employee-----//
    harry.d=4;/*as the data lies in the public area it is easily modified*/
    harry.e=5;
    harry.setdata(1,2,3);
    harry.getdata();



    
    return 0;
}