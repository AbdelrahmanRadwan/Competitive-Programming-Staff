#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double  long a;
    cin >> a;
    if (cbrt(a) == (long long int)cbrt(a))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}