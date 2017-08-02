#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    long double  l,*arr,max;
    long long n;
    cin >> n >> l;
    arr = new long double[n+1];
    arr[n] = l;
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n+1);
    max = arr[0] - 0;
    for (long long i = 0; i < n-1; i++)
    {
        if ((arr[i + 1] - arr[i])/2>max)
        {
            max = (arr[i + 1] - arr[i])/2;
        }
    }
    if (arr[n] - arr[n - 1] > max)
    {
        max = arr[n] - arr[n - 1];
    }
    cout <<fixed<<setprecision(10)<< max<< endl;

    return 0;
}