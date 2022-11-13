#include <iostream>
using namespace std;
//---------call by value--------//
int swap(int a , int b){

    int temp=a;
    a=b;
    b=temp;
    cout<<a<<endl;
    cout<<b<<endl;

}
//-----this changes the dummy values dosent effect the original values---//
//------This is example of call by value------//
//------Python Works on referencing while C++ dosent-------//


int main(){
    int x=4,y=5;
    cout<<"the current values are"<<x<<y<<endl;
    swap(x,y);
    cout<<"the current values after swap called are"<<x<<y<<endl;

    return 0;
}