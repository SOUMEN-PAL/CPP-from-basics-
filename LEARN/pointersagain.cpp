#include <iostream>
#include <math.h>
using namespace std;

int findelement(int arr[] , int n , int x){
    int res = -1;
    for(int i = 0 ; i<n ; i++){
        if(arr[i] == x){
            res = i;
            break;
        }
    }
    return res;
}

int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9,15,47};
    int e;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter element to find: ";
    cin>>e;
    int ans = findelement(arr , n , e);
    cout<<"The element is in: "<<ans<<endl;


    
   
   




    return 0;
}