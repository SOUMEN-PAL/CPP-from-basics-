#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    
    map<string,int> marks;
    marks["Harry"]=98;
    marks["Jack"]=59;
    marks["Rohan"]=2;
    marks.insert({{"abc",12},{"apper",134}}); //insertion of elements//
    map<string,int> :: iterator it=marks.begin();

    for(it ; it!=marks.end() ; it++){
        cout<<(*it).first<<" "<<(*it).second<<"\n";
    }

    return 0;
}