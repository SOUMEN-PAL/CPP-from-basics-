#include <iostream>
using namespace std;

class A
{
private:
    int x;
    int y;
public:
    void dispay(){
        cout<<x<<y<<endl;
    }
};

int main()
{

    A a;
    int *p = (int *)&a; //---it points to the member of the a object----//
    //----- Using (int *) means 'treat value as an address'. ------//
    // Using & means 'address of'.//
    //------ and the lines means treat the adress of a as adress -------//
    *p = 3;
    p++;
    *p = 9;
    p--;
    cout << *p << endl;
    p++;
    cout << *p << endl;

    

    return 0;
}