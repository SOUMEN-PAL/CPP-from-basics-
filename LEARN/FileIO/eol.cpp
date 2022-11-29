#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    ofstream out;
    out.open("eof.txt");
    out<<"This is me \n";
    out<<"is this me \n";
    out<<"This is me";
    out.close();


    ifstream in("eof.txt");
    string st;
    // in>>st;
    // cout<<st;
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }


    return 0;
}