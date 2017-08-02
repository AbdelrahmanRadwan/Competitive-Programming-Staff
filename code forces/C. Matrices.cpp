#include<iostream>
using namespace std;
int n;
int main()
{
    int **arr, temp_n;
    cin >> n;
    arr = new int*[n];
    for (int i = 0; i<n; i++)
    {
        arr[i] = new int[n];
    }
    temp_n = n;
    for (int i = 0; i<n; i++)
    {
        arr[0][i] = arr[i][0] = temp_n--;
    }
    temp_n = n;
    for (int i = 0; i<n; i++)
    {
        arr[n - 1][i] = arr[i][n - 1] = i + 1;
    }
    for (int i = 1; i<n - 1; i++)
    {
        for (int j = 1; j<n - 1; j++)
        {
            arr[i][j] = arr[i - 1][j - 1];
        }
    }


    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout << arr[i][j];
            if (j != n - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;

}