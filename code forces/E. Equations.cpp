#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double long  a1, a2, b1, b2,c1, c2, x, y;
    cin >> a1>>b1>>c1>>a2>>b2>>c2;
    y = (c1*a2 - c2*a1) / (b1*a2 - a1*b2);
    x = (c1-b1*y) / (a1);
    if (a1==0 ||a2==0||b1*a2==a1*b2 )
        {
            cout << -1 << endl;
        }
    else
    cout << fixed << setprecision(2) << x << " " << fixed << setprecision(2) << y << endl;

    return 0;
}