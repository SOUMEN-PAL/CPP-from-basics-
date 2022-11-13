#include <iostream>
using namespace std;


int sum(int a,int b);//FUnction Prototyping (used for assurinthe compiler that a function of that name is present)//
int main(){
    
    int a,b;
    cout<<"enter no 1"<<endl;
    cin>>a;
    cout<<"enter 2 nd no"<<endl;
    cin>>b;
    cout<<"the sum of the nos are "<<sum(a,b);



    
    return 0;
}


int sum(int a,int b){


    int c=(a+b);
    return c;


}