#include <iostream>
using namespace std;

int main(){
    int a =1;
    int *b = &a;
    cout<<b;//----b is also assigned the memory adress
    cout<<&a;
    return 0;
}