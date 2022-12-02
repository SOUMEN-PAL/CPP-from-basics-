#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> vec1;
    int size;
    cout << "Enter the size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int element;
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);// syntax //
    }

    display(vec1);
    

    return 0;
}