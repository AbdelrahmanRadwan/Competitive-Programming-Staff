#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    char a;
    int n,counter;
    while (cin >> n)
    {
        counter = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a == '*')
            {
                counter++;
            }
            else if (a == '>')
            {
                counter+=2;
            }
            if (counter > 20)
            {
                counter = counter%20;
            }
        }
            cout << counter << endl;
    }
    return 0;
}