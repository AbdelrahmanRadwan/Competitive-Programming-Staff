#include<iostream>
using namespace std;
int main()
{
    long long test, add, a, b,current=1,watch=0;
    cin >> test>> add;
    for (long long  i = 0; i < test; i++)
    {
        cin >> a >> b;
        while (current + add <= a)
            current += add;
        //watch += (a-current)+1+(b - a);
        watch += b - current + 1;
        current =b+1;
    }
    cout << watch << endl;
    return 0;
}