#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<< v.at(i)<<endl;

    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    vector<int> vec2(3,22);
    int element,size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for(int i=0 ; i<size ; i++){
        cout<<"Enter an element to add: ";
        cin>>element;
        vec1.push_back(element);
    }    
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
//-- initializing a itreator for with name iter and setting its position to the start ----//
    vec1.insert(iter,8008);//---- using the insert command of vector----//
    display(vec1);
    display(vec2);
    return 0;
}