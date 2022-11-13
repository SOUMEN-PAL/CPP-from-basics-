#include <iostream>
using namespace std;
int main(){


    const int a=40;
    float b=20.34;
    float & z=b;//------REFERENCING IS DONE------//
    
    cout<<"the reference of b is "<<(int)z<<endl;//-------type casting is done here-----//


    return 0;
}