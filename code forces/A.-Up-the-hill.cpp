#include<iostream>
using namespace std;
int main()
{
    long a, b;
    while (cin >> a >> b)
    {

        for (int i = 1; i <= a; i++)
        {
            cout << i << " ";
        }
        for (int i = a + b + 1; i >a; i--)
        {
            cout << i;
            if (i!=a-1)
            cout<< " ";
        }
        cout << endl;
    }

    return 0;
}