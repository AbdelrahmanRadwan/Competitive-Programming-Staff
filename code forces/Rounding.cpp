#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
    long testcases;
    long long int num, x,compare;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        cin >> num>> x;
        compare = num % 100;
        num = num / 100;
        if (compare >= x)
            num = num * 100 + 100;
        else
            num = num * 100;
        cout << num << endl;
    }
    return 0;
}