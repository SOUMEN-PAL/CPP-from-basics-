#include <iostream>
using namespace std;

struct employee
{
    int eid;
    char favchar;
    float salary;



};


int main(){
    
    struct employee harry;
    harry.eid = 23451;
    harry.favchar='c';
    harry.salary=122222222222;

    cout<<harry.eid<<endl;
    cout<<harry.salary<<endl;
    return 0;
}