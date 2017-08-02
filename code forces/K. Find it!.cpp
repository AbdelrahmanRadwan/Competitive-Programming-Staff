#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int *arr, size;
    while (cin >> size)
    {
        arr = new int[size];
        for (int i = 0; i < size-1; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + size-1);
        for (int i = 0; i < size; i++)
        {
            if (arr[i] != i + 1)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}