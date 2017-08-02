#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
    int size, testcases, *arr, sum;
    cin >> testcases;
    for (int j = 0; j < testcases; j++)
    {
        sum = 0;
        cin >> size;
        arr = new int[size];
        cin >> arr[0];
        for (int i = 1; i < size; i++)
        {
            cin >> arr[i];
            if (abs(arr[i] - arr[i - 1]) <= 4)
            {
                sum += abs(arr[i] - arr[i - 1]);
            }
            else
            {
                sum += (8 - abs(arr[i] - arr[i - 1]));
            }
        }
        if (sum != 1)
        {
            cout << "Password #" << j + 1 << " Gives: " << sum << " Ticks." << endl;
        }
        else
            cout << "Password #" << j + 1 << " Gives: " << sum << " Tick." << endl;
    }
    return 0;
}