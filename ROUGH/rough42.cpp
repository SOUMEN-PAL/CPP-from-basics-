#include <iostream>
using namespace std;
class expo
{
private:
    int A;
    int B;
    int C;

public:
    void setdata(void)
    {
        cin >> A >> B >> C;
    }
    void getdata(void)
    {
        if ((A > B and A > C) and (B > C))
        {
            A = A - 1;
            B = B - 1;
        }
        else if ((B > C) and (B > A) and C > A)
        {
            B = B - 1;
            C = C - 1;
        }
        else
        {
            C = C - 1;
            A = A - 1;
        }
        if (A == 0 and B == 0 and C == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
};
int main()
{
    int Z;
    cin >> Z;

    expo one;
    for (int i = 0; i <= Z; i++)
    {
        one.setdata();
    }
    one.getdata();

    return 0;
}