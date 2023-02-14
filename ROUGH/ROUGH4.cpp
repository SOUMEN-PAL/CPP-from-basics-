//----OOP Memoryarray.cpp----//

#include <iostream>
using namespace std;
int z = 1; //------just for enhancement-------//

class shop
{
private:
    int itemid[100]; //-------memeory allocated for all the shops items in one place--------//
    int intemprice[100];
    int counter;

public: // we could also use constructer here //
    void initcounter(void) { counter = 0; } /*-----we didnt made counter in global scope because when new object will be used the counter value would
     be the previous value done by the object 1*/
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void)
{
    cout << "Enter the item id for shop: " << z << endl;
    cin >> itemid[counter];
    cout << "Enter the price" << endl;
    cin >> intemprice[counter];

    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of Item with ID " << itemid[i] << " is " << intemprice[i] << endl;
        cout << counter << endl;
        
    }
    z++;
    // cout << itemid[3] << endl; //----calling a prvate variable by nested members-----//
} //-----just to check wheather the data is being stored or not-----//

int main()
{

    int x;
    int y;
    cout << "How many items do you want to save for dukan" << z << ": " << endl;
    cin >> x;
    shop dukan;
    dukan.initcounter();
    for (int i = 0; i < x; i++)
    { //-----rather then calll each one one at a time call the function by the user-------//
        // for loop ha ; sign not commas---//
        dukan.setprice();
    }
    dukan.displayprice();
    cout << "How many items do you want to save for dukan" << z << ": " << endl;
    cin >> y;

    shop dukan2; //----so each object dosent hava a individual function it uses a copy and each object gets the same memory of the function------//
    dukan2.initcounter();
    for (int i = 0; i < y; i++)
    { //-----rather then calll each one one at a time call the function by the user-------//
        // for loop ha ; sign not commas---//
        dukan2.setprice();
    }
    dukan2.displayprice();

    return 0;
}