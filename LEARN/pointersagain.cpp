#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int a=9;
    
    int*ptr=&a;
    cout<<*ptr<<endl;
    
    int *arr= new int[3];
    for(int i=0;i<3;i++){
        arr[i]=pow(i,2);
        cout<<arr[i]<<endl;
    }   

    
   
   




    return 0;
}