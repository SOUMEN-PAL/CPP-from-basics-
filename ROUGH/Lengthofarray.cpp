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
            int y = (sizeof(arr)*size)/sizeof(T);
            return y;
        }



};

int main(){
    sizeofarray <int> a;
    a.setdata();
    int m = a.display();
    cout<<"The size of the array is: "<<m<<endl;
    return 0;
}