#include<iostream>
using namespace std;

int main()
{
    long long *arr;
    long long n,a,b,size;
    cin >> n;
    for (long i = 0;i<n;i++)
    {
        cin >> a >> b >> size;
        arr = new long long[size + 1];
        arr[0] = a;
        arr[1] = b;
        for (long long i = 2; i <= size; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
        cout << arr[size] << endl;
    }
    return 0;
}