#include <iostream>
using namespace std;

class data1
{
protected:
    int data1;

public:
    void set_data1(int a)
    {
        data1 = a;
    }
    void get_data1(void)
    {
        cout << "Data1 is: " << data1 << endl;
    }
};



class data2
{
protected:
    int data2;

public:
    void set_data2(int b)
    {
        data2 = b;
    }
    void get_data2(void)
    {
        cout << "Data2 is: " << data2 << endl;
    }
};

//-------- Multiple Inheritance is done here -------------//
class data3 : public data1,public data2{
    protected:
    int data3;
    public:
    void operation(){
        cout<<"The multiplication of Data1 and Data2 is: "<<data1*data2<<endl;
    }




};


int main(){

    data3 data;
    data.set_data1(12);
    data.set_data2(2);
    data.get_data1();
    data.get_data2();
    data.operation();



    return 0;
}