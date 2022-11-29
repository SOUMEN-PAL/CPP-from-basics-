#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string n;// declaring the variable for storing the values //
    
    ifstream in("sample.txt");
    in>>n;// n is taking one string at a time //
    cout<<n<<" ";
    in>>n;// so we are updating again and again //
    cout<<n<<" ";
    in>>n;// for printing more content of the line //
    cout<<n<<" "<<endl;
    in.close();
    
    return 0;
}