#include<iostream>
#include<iomanip>
using std::endl;
using std::setw;//so if you do not use namespace std you  have to later include what manipulators you want for use//
// if you want to not specify use using namespace std//

int main(){

    int a=22;
    int b=33333;
    std::cout<<"the value of a is "<<setw(-5)<<a<<endl;
    std::cout<<"the value of b is "<<setw(-5)<<b<<endl;



    return 0;

}