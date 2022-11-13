#include <iostream>
using namespace std;

float moneyrec(int money, float rate=1.04){

    return money*rate;



}



int main(){
    
    int money=100000;

    cout<<"if you have"<<money<<"then you will get "<<moneyrec(money)<<endl;
    cout<<"if you are a vip with money"<<money<<"then you will get "<<moneyrec(money,1.1)<<endl;



    
    return 0;
}