#include<iostream>
using namespace std;
int main()
{

    long long  n,result;
    while (cin >> n)
    {
        result = (n + n % 2) / 2;
        if (n % 2 == 1)
        {
            result *= -1;
        }
        cout << result << endl;
    }
    return 0;
}