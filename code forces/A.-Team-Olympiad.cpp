#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, *arr1,*arr2,*arr3,*num,one=0,two=0,three=0;
    int a = 0, b = 0, c = 0;
    cin >> n;
    num = new int[n];
    arr1 = new int[n];
    arr2 = new int[n];
    arr3 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        if (num[i] == 1)
        {
            one++;
            arr1[a] = i+1;
            a++;
        }
        else if (num[i] == 2)
        {
            two++;
            arr2[b] = i+1;
            b++;
        }
        else
        {
            three++;
            arr3[c] = i+1;
            c++;
        }
    }
    if (one != 0 && two != 0 && three != 0)
    {
        cout << min(min(one, two), three) << endl;
        for (int i = 0; i < min(min(one, two), three); i++)
        {
            cout << arr1[i] << " " << arr2[i]<< " " << arr3[i] << endl;
        }
    }
    else
    {
        cout << 0 << endl;
    }



    return 0;
}