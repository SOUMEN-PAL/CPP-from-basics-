#include <iostream>
using namespace std;

int fibo(int n){

    if(n<0){
        cout<<"incorrect value"<<endl;
    }
//---------so as we are asssigning the values of the condtion it is using that value---------//
    else if(n==1){
        return 0;
    }
//---------so as we are asssigning the values of the condtion it is using that value---------//

    else if(n==2){
        return 1;
    }


//----------so when we get fibo 2 or fibo 1 we get return 1 as it is dafault assigned in the conditional statements--------//
    else{
        return fibo(n-1)+fibo(n-2);
    }


}




int main(){
    
    int x;

    cout<<"what term do yo want "<<endl;
    cin>>x;
    cout<<"the term is "<<fibo(x)<<endl;

    
    return 0;
}