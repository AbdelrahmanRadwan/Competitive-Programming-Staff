#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long x;
    long step=0,sum=0;
    int counter = 0;
    cin >> x;
    for (long long i = 1; i <= x; i++)
    {
        step += i;
        sum += step;
        if (sum > x)
        {
            break;
        }
        counter++;
    }
    cout << counter << endl;
    return 0;
}