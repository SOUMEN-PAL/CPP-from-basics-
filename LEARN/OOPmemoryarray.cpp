#include <iostream>
using namespace std;

class shop{
    private:
    int itemid[100];//-------memeory allocated for all the shops items in one place--------//
    int intemprice[100];
    int counter;
    public:
    void initcounter(void){counter=0;}
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void){
    cout<<"Enter the item id"<<endl;
    cin>>itemid[counter];
    cout<<"Enter the price"<<endl;
    cin>>intemprice[counter];

    counter++;

}
void shop::displayprice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of Item with ID "<<itemid[i]<<" is "<<intemprice[i]<<endl;
    }
    


}




int main(){
    

    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();



    
    return 0;
}