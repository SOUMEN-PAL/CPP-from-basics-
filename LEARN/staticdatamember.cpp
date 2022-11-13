#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    int static count; //------as the count variable was not defined so we need to define it------//
public:
    int x;
    void setdata();
    void getdata();
};
// bahar define iss liye kiya kyuki iski memory class ke sath ayegi not with object//
//-------ek bar memory lega phir update hota jayega-----//
int employee::count; //-----for defining\specifing it with the class not objects-----//

void employee::getdata(void)
{

    cout << "Enter the id" << endl;
    cin >> id;
    count++;
}
void employee::setdata(void)
{
    cout << "the id of the employee is " << id << endl;
    cout << "the employee no of the employee is " << count << endl;
}

int main()
{

    employee harry, rohan, yash;

    harry.getdata();
    harry.setdata();

    rohan.getdata();
    rohan.setdata();

    yash.getdata();
    yash.setdata();

    return 0;
}

/*Enter the id
164
the id of the employee is 164
the employee no of the employee is 1-------> these values are of the count and is a variable of the class not the objects
Enter the id
5545
the id of the employee is 5545
the employee no of the employee is 2
Enter the id
4646
the id of the employee is 4646
the employee no of the employee is 3*/