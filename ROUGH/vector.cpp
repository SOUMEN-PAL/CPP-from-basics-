#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

template <class T>
void setvec(){
    vector<T> vec1;
    int size;
    cout << "Enter the size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        T element;
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);// syntax //
    }
    display(vec1);
}

int main()
{
    int x;
    cout<<"What type of data do you want:\n1. Integer\n2. Float\n3. Char\nYour Choice: ";
    cin>>x;
    if(x==1){
        setvec<int>();
    }
    else if(x==2){
        setvec<float>();

    }
    else if(x==3){
        setvec<char>();
    }
    else{
        cout<<"Invalid Choice"<<endl;
        cout<<endl;
        return main();
    }


    return 0;
}