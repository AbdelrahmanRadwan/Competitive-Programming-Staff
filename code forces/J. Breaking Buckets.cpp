#include<iostream>
using namespace std;
int main()
{
    long a;
    int counter=0;
    cin >> a;
    cout << 1;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a%i == 0)
        {
            cout <<" "<< i;
            counter++;
        }
    }
    cout << endl << counter+1 << endl;
    return 0;
}