#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
bool check(bool arr[][1002], int a, int b)
{
    return arr[a][b] && arr[a + 1][b + 1] && arr[a][b + 1] && arr[a + 1][b];
}
int main()
{
    bool arr[1002][1002];
    memset(arr, false, sizeof(arr) );
    int n, m, steps, complete = 0,a,b;
    cin >> n >> m >> steps;
    //nXm





    for (int i = 1; i <=steps; i++)
    {
        cin >> a>> b;
        arr[a][b] = true;
        if (!complete && (check(arr, a, b) || check(arr, a-1, b-1) || check(arr, a, b-1) || check(arr, a-1, b)))
            complete = i;
    }
    cout << complete << endl;


    return 0;
}