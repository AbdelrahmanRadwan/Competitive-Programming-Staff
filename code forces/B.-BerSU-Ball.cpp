#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, m, *girl, *boy,counter=0,last=0;
    cin >> n;
    boy = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> boy[i];
    }
    cin >> m;
    girl = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin >> girl[i];
    }
    sort(boy, boy + n);
    sort(girl, girl + m);
    for (int i = 0; i < m; i++)
    {
        for (int j = last; j < n; j++)
        {
            if (girl[i] - boy[j] == 0 || girl[i] - boy[j] == -1 || girl[i] - boy[j] == 1)
            {
                last = j+1;
                counter++;
                break;
            }
        }
    }
    cout << counter << endl;
    return 0;
}