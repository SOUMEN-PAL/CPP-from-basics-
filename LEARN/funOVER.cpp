#include <iostream>
using namespace std;



int vol(double r,int h){
    return (3.14*r*r*h);
}
int vol(int l,int b,int h){
    return(l*b*h);

}
int vol(int r){
    cout<<"volume of cube is using"<<endl;
    return (r*r*r);
}


int main(){
    

    cout<<"the volume of cylinder "<<vol(1,2)<<endl;
    cout<<"the volume of cuboid "<<vol(2,3,2)<<endl;
    cout<<"the volume of cube "<<vol(4.4)<<endl;
    


    
    return 0;
}