#include <iostream>
#include <iomanip>
using namespace std;

template <class T1, class T2>
float func(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
}

int main(){
    float a;
    a= func(5,2.34567);
    cout<<setprecision(4)<<a<<endl;
    int x=5,y=6;
    swapp(x,y);
    cout<<x<<endl<<y;

    


    return 0;
}