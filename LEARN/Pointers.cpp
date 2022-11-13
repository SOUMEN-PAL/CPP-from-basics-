#include <iostream>
using namespace std;

int main(){
    
//-------b ki value me a ki memory-----//
    int a = 10;
    int * b= &a;//& is an operator for getting the memory id of a so we are assigining the memory of a to b//
    //like in python if we stored a same value to two different variables the interpreter automatically assigns the same memory for both the variables with same value//
    //but here in c++ we are manually assigning the memory adress to the other variable//
    cout<<b<<endl;
    cout<<&a<<endl;

    cout<<"the value of b is: "<<*b<<endl;
    int **c=&b;
    cout<<"the v "<<**c;//pointer in pointer matlab a ki memory b me store then b ki apni memory jo c me store and so on and sabki ek hi value//


    
    return 0;
}