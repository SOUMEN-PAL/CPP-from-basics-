#include <iostream>
using namespace std;

int main(){
    
    int a=2;
    int &y=a;
    cout<<a<<endl;
    cout<<y<<endl;
    cout<<"the memory address of a "<<&a<<endl;
    cout<<"the memory address of y "<<&y<<endl;
    
    return 0;
}
/*-----same memory address in referencing koi copy nahi bani bas usi variable ka naya name ha------*/