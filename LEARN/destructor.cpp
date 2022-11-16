#include <iostream>
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"THis is the time"<<count<<endl;
    }

//----destructors----//
    ~num(){
        cout<<"This is the time when my destructor is called for obj no"<<count<<endl;
        count--;
    }




};




int main(){
    
    cout<<"MAin function"<<endl;
    cout<<"Crating two objects"<<endl;

    num n1;
    {
        cout<<"enter"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2 ,n3;
        cout<<"exit"<<endl;
    }
    cout<<"Back to main"<<endl;

    
    return 0;
}


// MAin function
// Crating two objects
// THis is the time1
// enter
// Creating two more objects
// THis is the time2
// THis is the time3
// exit
// This is the time when my destructor is called for obj no3
// This is the time when my destructor is called for obj no2
// Back to main
// This is the time when my destructor is called for obj no1