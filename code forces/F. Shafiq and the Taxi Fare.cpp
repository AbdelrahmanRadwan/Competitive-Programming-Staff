#include<iostream>
using namespace std;
int main()
{

    int size,sum;
    int *arr;
    while (cin >> size)
    {
        sum = 0;
        arr = new int[size];
            for (int i = 0; i < size; i++)
            {
                cin >> arr[i];
                sum += arr[i];
            }
            cout << sum << endl;
    }
    return 0;
}