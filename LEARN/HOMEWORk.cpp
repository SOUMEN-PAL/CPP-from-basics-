#include <iostream>
#include <iomanip>
using namespace std;
int main(){



    for(int i = 1;i<=10;i++){


        int a=6;
        int b=(a*i);
        cout<<"6 * "<<setw(2)<<i<<" = "<<setw(2)<<b<<endl;
    }
    cin.get();
    return 0;
}