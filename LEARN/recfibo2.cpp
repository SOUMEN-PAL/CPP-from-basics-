#include <iostream>
using namespace std;

fibo(int n){

    if(n<2){
        return 1;
    }
    else{
        return fibo(n-2)+fibo(n-1);
    }






}

//------This varient of fibo counts the fiboseries from 0 th position------//
//----difficult for the user-------//



int main(){
    
    int x;

    cout<<"what term do yo want "<<endl;
    cin>>x;
    cout<<"the term is "<<fibo(x)<<endl;







    
    return 0;
}