#include <bits/stdc++.h>
using namespace std;

void table(int a){

    for (int i = 1; i <= 10; i++)
    {
        int b = (a * i);
        cout << a << " * "<< i << " = "<< b << endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    table(n);
    return 0;
}