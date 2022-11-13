//--------homework question--------//

#include <iostream>
#include <math.h>
using namespace std;
class point
{
private:
    int a, b;
    friend void distance(point o1,point o2);
public:
    point(void)
    {
        cout << "THe X coordinate: ";
        cin >> a;

        cout << "The y coordinate: ";
        cin >> b;
    }
};
void distance(point o1, point o2)
{
    int x = o1.a - o2.a;
    int y = o1.b - o2.b;
    int res = sqrt(pow(x, 2) + pow(y, 2));
    cout << res << endl;
}

int main()
{

    point p1,p2;
    distance(p1,p2);

    return 0;
}