#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double long x, y;
    long long q;
    cin >> x >> y >> q;
    x = y / x;
    for (int i = 0; i < q; i++)
    {
        cin >> y;
            cout << ceill(x*y) << endl;
    }
    return 0;
}