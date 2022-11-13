#include <iostream>
using namespace std;

int fact(int n){
    if(n<=1){
//-------Base condition is if n is 1 or less than 1 then it will return 1--------//
        return 1;
    }
    else{
        return n*fact(n-1);
//--------function called it self inside the function until the base condition meeted---------//    
    
    }

}

int main(){
    int a;
    cout<<"what no factorial do you want"<<endl;
    cin>>a;
    cout<<"the factorial of no "<<a<<" is "<<fact(a)<<endl;//------function call------//
    
    return 0;
}