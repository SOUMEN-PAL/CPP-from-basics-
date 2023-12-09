#include<bits/stdc++.h>
using namespace std;

int main(){
    int *arr = new int[4];
    for(int i = 0 ; i<4 ; i++){
        cin>>*(arr+i);
    }
    cout<< *(arr+1);


    return 0;
}