#include<iostream>
using namespace std;
int main()
{
    long size, index;
    long *arr, min=10000;
    while (cin >> size)
    {
        arr = new long[size];
        for (long i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (long i = 0; i <= size - 3; i++)
        {

            if (arr[i+2] - arr[i] < min)
            {
                min = arr[i+2] - arr[i];
                index = i + 1;
            }
        }
        arr[index] = arr[index - 1];
        min = 0;
        for (long i = 0; i <= size - 2; i++)
        {

            if (arr[i+1] - arr[i] > min)
            {
                min = arr[i+1] - arr[i];
            }

        }
        cout << min << endl;
    }
    return 0;
}