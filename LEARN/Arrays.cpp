#include <iostream>
using namespace std;

int main(){





//------------------FOR LOOP-----------------//
    cout<<"this is for output"<<endl;
//-----------0 1 2 3 4 5 6------Indentation-------//
    int a[]={1,2,3,4,5,6,7};
    cout<<"[ ";
    for (int i = 0; i <= 3; i++)
    {
        cout<<a[i]<<",";
        
    }
    cout<<"]";
    cout<<endl;
//----------------WHILE LOOP-----------------//

    cout<<"THis is while output"<<endl;

    int b=0;
    while(b<4)
    {
        cout<<a[b]<<endl;
        b++;


    }
    cout<<endl;

//---------------DO WHILE------------------//
cout<<"ths is do while output"<<endl;
int x=0;
do{
    cout<<a[x]<<endl;
    x++;
}while(x<4);


    

    return 0;
}