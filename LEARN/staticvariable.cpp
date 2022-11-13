#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    int static count; //------as the count variable was not defined so we need to define it------//
public:
    void setdata();
    void getdata();
    void static getcount(void);
};
// bahar define iss liye kiya kyuki iski memory class ke sath ayegi not with object//
//-------ek bar memory lega phir update hota jayega-----//
int employee::count=100; //-----for defining\specifing it with the class not objects-----//

void employee::getdata(void)
{

    cout << "Enter the id" << endl;
    // cin >> id;
    count++;
}
void employee::setdata(void)
{
    cout << "the id of the employee is " << id << endl;
    cout << "the employee no of the employee is " << count << endl;
}
void employee::getcount(void){
    cout<<"the count is "<<count<<endl;
    // cout<<count<<endl; cant be used as id is not a staticmember//

}

int main()
{

    employee harry, rohan, yash;

    harry.getdata();
    harry.setdata();
    employee::getcount();
    rohan.getdata();
    rohan.setdata();
    employee::getcount();
    yash.getdata();
    yash.setdata();
    employee::getcount();
    return 0;
}