#include<iostream>
using namespace std;
int main()
{
    long long int n;
    while (cin >> n)
    {
        int i = 1;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else
        {
            while (n > 1)
            {
                n /= i;
                i++;
            }
        }
        cout << i-1 << endl;
    }

    return 0;
}