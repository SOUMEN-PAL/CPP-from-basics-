#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    
    int a[]={12,13,14,15,160,33,44,56,32,4,5};
    

//trying for loop with pointers//
    int len=sizeof(a);
    int x=len/4;//size of a in giving me the the size of the memory in bytes so divide it by 4 it will give the no of terms but it will change//
//in every different data type//
    cout<<"len is "<<x<<endl;

    int*p=a;
    
    for(int i=0;i<x;i++)                        //--------NEEDS FURTHER MODIFICATION---------//
    {

        cout<<setw(3)<<*(p+i)<<endl;//this *(p+i) is the main key thats doing the work//


    }

    cout<<"size of a "<<sizeof(*(a))<<endl;


    p=p+14;//matlab kuch bhi kuch bhi memory adress nikal gaya toh kuch bhi//
    cout<<*p<<endl;
    
    return 0;
}