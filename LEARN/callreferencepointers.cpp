#include <iostream>
using namespace std;

void swappointer(int* x,int* y);


//------as the swap pointer is defined so we need a function prototyping--------//
int main(){
    

    int x,y;
    cout<<"Enter a value: "<<endl;
    cin>>x;
    cout<<"Enter another value: "<<endl;
    cin>>y;

    cout<<"The value of x before swaping "<<x<<endl;
    cout<<"The value of y before swaping "<<y<<endl;
    swappointer(&x,&y);//------taking the memory address(&) sign is used thats why concepts of pointer------//
    cout<<"The value of x after swaping "<<x<<endl;
    cout<<"The value of y after swaping "<<y<<endl;
    


    
    return 0;
}
void swappointer(int* a,int* b){
    
    int c=*a;
    *a=*b;
    *b=c;
//-------memory adress ki values swap ho rahi ha so memory me values swap ho gaye-------//

}
