#include <iostream>
using namespace std;





//--------specify the data type in function always------//

int back(int n){

    if(n<1){
        cout<<" "<<endl;
    }
    else{

        cout<<n<<",";
        return back(n-1);

    }

}



int main(){
    
    int x;
    cout<<"upto what series do you want"<<endl;
    cin>>x;
    cout<<"the series is"<<back(x)<<endl;


    

    return 0;
}