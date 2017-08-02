#include<iostream>
using namespace std;
void operate(long long &x, char &b, long long &y)
{
    if (b == '+')
    {
        x = x + y;
    }
    if (b == '-')
    {
        x = x - y;
    }
    if (b == '*')
    {
        x = x*y;
    }
    if (b == '/')
    {
        x = x / y;
    }
}
int main()
{
    long long x, y;
    char a = '0';
    cin >> x;
    while (a != '.')
    {
        cin >> a >> y;
        operate(x, a, y);
        if (a == '.')break;
    }
    cout << x << endl;
    return 0;
}