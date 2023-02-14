#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

void binary(int n){
    vector <int> v;
    if(n<0){
        n=abs(n);
    }
    while(n>0){
        if(n%2==0){
            v.push_back(0);
        }
        else{
            v.push_back(1); 
        }
        n=n/2;
    }

    for(int i=(v.size()-1) ; i>=0 ; i--){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int bitwiseand(int a , int b){

    int x=(a&b);
    cout<<"The binary is: ";
    binary(x);
    cout<<endl;
    return x;
    
}

int main(){

    int b=10;
    int a=12;
    int c=bitwiseand(a,b);
    cout<<c<<endl;
    c=(~c);
    cout<<c<<endl;
    cout<<bitset<8>(c)<<endl;
    binary(c);
    binary(9);
    



   

    
    return 0;
}