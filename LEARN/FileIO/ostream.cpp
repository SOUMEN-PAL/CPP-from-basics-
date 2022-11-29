#include <iostream>
#include<fstream>
using namespace std;


//_______ostream used for writing in the file_______//


int main(){

    ofstream out("sample.txt");
//---using constructor for opening the file----//
    
    out<<"One two three\n";
    out<<1<<" "<<2<<" "<<3<<" "<<4;
    out<<"\n**The End**";

    return 0;
}

//____output from the proagram to the disk____//