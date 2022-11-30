#include <iostream>
using namespace std;


template <class T>
class vector{
    
    
    public:
        T *arr = new T[3];
        
        // vector(int m){
        //     size=m;
        //     arr = new T[size];
        // }
        T dotProduct(vector &v){
            T d=0;
            for (int i = 0; i < 3; i++){
                d+=this->arr[i]*v.arr[i]; // this means jo obj uss object ko call kar raha ha uski bat ho rahi ha //
                
            }
            return d;
        }
};



int main(){
    int x;
    cout<<"What types of values do you have:\n1. Integer\n2. Floating point\nYour Choice: ";
    cin>>x;
    if (x==2){
        vector <float> v1;
        cout<<"Give the values of i j k: "<<endl;
        cin>>v1.arr[0]>>v1.arr[1]>>v1.arr[2];

        vector <float> v2;
        cout<<"Give the values of i j k: "<<endl;
        cin>>v2.arr[0]>>v2.arr[1]>>v2.arr[2];

        float a = v1.dotProduct(v2); // this ne v1 ko liye jisne call kiya aur v2 toh argument ha //
        cout<<"The dot product is: "<<a<<endl;
    }
    else if(x==1){
        vector <int> v1;
        cout<<"Give the values of i j k: "<<endl;
        cin>>v1.arr[0]>>v1.arr[1]>>v1.arr[2];

        vector <int> v2;
        cout<<"Give the values of i j k: "<<endl;
        cin>>v2.arr[0]>>v2.arr[1]>>v2.arr[2];

        int a = v1.dotProduct(v2); // this ne v1 ko liye jisne call kiya aur v2 toh argument ha //
        cout<<"The dot product is: "<<a<<endl;
    }
    else{
        cout<<"Invalid Entry"<<endl;
    }

    return 0;
}