

//--------------------MOdified and user desired multiplication table---------------//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    cout << "which table you wanna write: ";
    cin >> a;
    for (int i = 1; i <= 10; i++)
    {
        int b = (a * i);
        cout << a << " * " << setw(2) << i << " = " << setw(2) << b << endl;
    }

    cin.get();
    return 0;
}