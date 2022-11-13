#include <iostream>
using namespace std;


int a;

int pow(int n){

    if(n==0){

        return 1;
    }
    else{
        return a*pow(n-1);
    }

}


int main(){
    
    int x;

    cout<<"Which numbers power do you want "<<endl;
    cin>>a;
    cout<<"What power of "<<a<<" do you want "<<endl;
    cin>>x;
    cout<<"The value is: "<<pow(x)<<endl;


    
    return 0;
}