#include <iostream>
using namespace std;

int main()
{ int x,y;
    cout<<"enter the value:\n";/*<< this is called an insertion operator*/
    cin>>x;

    cout<<"enter the value:\n";/*>> this is called an extraction operator*/
    cin>>y;

    cout<<"the sum is "<<x+y;
    return 0;
}
