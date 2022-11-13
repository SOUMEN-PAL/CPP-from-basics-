#include <iostream>
using namespace std;
class comp{
    private:
    int a,b;
    public:
    comp(int x,int y){
        a=x;
        b=y;
    }
    comp(int x){
        a=x;
        b=0;
    }
    void print(){
        cout<<"your no is: "<<a<<"+"<<b<<endl;
    }


};
int main(){
    comp o1(2,3);
    o1.print();
    comp o2(4);
    o2.print();
    
    return 0;
}