#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream out("io.txt");
    cout<<"Enter Your name: ";
    string name;
    cin>>name;
    out<<"My name is: "+name;
    out.close();// free karna link kat diya //

    ifstream in("io.txt");
    string content;
    getline(in,content);
    cout<<"The content of the file is: "<<content;
    in.close();
    
    return 0;
}