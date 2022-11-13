#include <iostream>
using namespace std;
//-----a ki address me x ki value but us value ko bhi ek data type hoga so data type lagta ha referencing me-----//
void swappointer(int &a , int &b){

    int c=a;
    a=b;
    b=c;
//-------memory adress hi swap ho rahi ha values toh ho hi gaye --------//

}
int main(){
    
    
    
    int x,y;
    cout<<"Enter a value: "<<endl;
    cin>>x;
    cout<<"Enter another value: "<<endl;
    cin>>y;

    cout<<"The value of x before swaping "<<x<<endl;
    cout<<"The value of y before swaping "<<y<<endl;
    swappointer(x,y);
    cout<<"The value of x after swaping "<<x<<endl;
    cout<<"The value of y after swaping "<<y<<endl;





        
    return 0;
}