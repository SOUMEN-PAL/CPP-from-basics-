#include <iostream>
using namespace std;
int main(){
    int age;
    
    cout<<"Tell me your age"<<endl;
    
    
    cin>>age;


    


    /* if((age<18) and (age>0)){

        cout<<"you cannot come to my party"<<endl;
    }
    else if(age==18){
        cout<<"you are still a kid not allowed"<<endl;
        
    }

    else if(age<1){

        cout<<"you are not yet born(jananm le le phele)"<<endl;

    }


    else{
        cout<<"you can come to the party"<<endl;
    }*/
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    
    case 22:
        cout<<"you are 22"<<endl;
        break;
    
    case 30:
        cout<<"you are 30"<<endl;
        break;

    default:
        cout<<"NO cases matched"<<endl;
        break;
    }


    return 0;
}