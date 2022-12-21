#include <iostream>
using namespace std;


template <class T>
class sizeofarray{
    private:
        T *arr;
        int size;
    public:
        sizeofarray(){
            cout<<"Enter the Size of array do you want: ";
            cin>>size;
            arr = new T [size];
            
        }

        void setdata(){
            for (int i = 0; i < size; i++)
            {
                cout<<"Give input for the array item "<<i<<" : ";
                cin>>arr[i];
                
            }
            
        }

        int display(){
            int y = (sizeof(arr))/sizeof(arr[0]);
            return y;
        }



};

int main(){
    int x;
    cout<<"What type of values do you have:"<<"\n1. Integer"<<"\n2. Floating point"<<"\n3. String"<<"\n4. Char"<<"\nYour Choie: ";
    cin>>x;
    if(x==1){
        sizeofarray <int> a;
    a.setdata();
    int m = a.display();
    cout<<"The size of the array is: "<<m<<endl;
    return 0;
    }
    else if(x==2){
        sizeofarray <float> a;
        a.setdata();
        int m = a.display();
        cout<<"The size of the array is: "<<m<<endl;
        return 0;
    }
    else if(x==2){
        sizeofarray <float> a;
        a.setdata();
        int m = a.display();
        cout<<"The size of the array is: "<<m<<endl;
        return 0;
    }
    else if(x==3){
        sizeofarray <string> a;
        a.setdata();
        int m = a.display();
        cout<<"The size of the array is: "<<m<<endl;
        return 0;
    }
    else if(x==4){
        sizeofarray <char> a;
        a.setdata();
        int m = a.display();
        cout<<"The size of the array is: "<<m<<endl;
        return 0;
    }
    else{
        cout<<"Invalid Choice"<<endl;
    }

}