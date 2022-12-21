#include <iostream>
using namespace std;

// . try block of code which may cause an exception is typically placed inside 
// the try block it folled by one or more catch blocks if an exception occours

/* catch: this block catches the exception throw from the try block.code to hadle
the exception is written inside the catch block

thow: a proagram throws an exception when a proagram showa up thsi is done
using a throw kwyword.



*/


int main(){
    
    int nume,dene,result=0;
    cout<<"enter two numbers"<<endl;
    cin>>nume>>dene;
    try{
        if(dene==0){
            throw dene;
        }
        result=nume/dene;// division happens here //

    }
    catch(int exception){
        cout<<"Divide by zerro error "<<exception;
    }
    cout<<"division is: "<<result<<endl;





    return 0;
}