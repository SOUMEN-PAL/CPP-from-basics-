#include <iostream>
using namespace std;
//------how to check binary---------//
class Binary
{
    private:
    string s;
    void chk_bin(void);//----this function is  in private and is being called from nesting as it is in private------//

    public:
    void read(void);
    
    void complement(void);
    void display(void);

};
void Binary::read(void){
    cout<<"Enter a binary String"<<endl;
    cin>>s;
}
void Binary::chk_bin(void){

    for (int i = 0; i < s.length(); i++)//------as we are taking a string the check should also be for string-------//
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"WRONG Binary format"<<endl;
        
            exit(0);        
        
        }
    }

}

void Binary::complement(void){

    for (int i = 0; i < s.length(); i++)//---as the values are string you need the values in also string form-----//
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
    


}
//------for loop used for displaying------//
void Binary::display(void){
    chk_bin();//------nesting is done here------//
    cout<<"Displaying the binary: "<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
        
    }
    cout<<endl;
}



int main(){
    
    Binary b;//-------object is made as b and binary is called--------//
    b.read();
    // b.chk_bin();
    b.display();
    b.complement();
    b.display();



    
    return 0;
}