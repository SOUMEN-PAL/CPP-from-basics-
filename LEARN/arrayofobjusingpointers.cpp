#include <iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id=a;
            price=b;
        }
        void getData(){
            cout<<"Code of this item is: "<<id<<endl;
            cout<<"Price of this item is: "<<price<<endl;
        }

};



int main(){
    int size = 2;
    int p,i;
    float q;
    Shop *ptr = new Shop [size];
    Shop *ptrtemp = ptr;
    for(i=0;i<size;i++){
        cout<<"Enter Id and Price of item "<<i+1<<" ";
        cin>>p>>q;
        ptr->setData(p,q);
        
        ptr++;


    }

    for ( i = 0;i<size;i++){
        cout<<"Item no: "<<i+1<<endl;
        ptr--;
        ptr->getData();


    }
    
    return 0;
}