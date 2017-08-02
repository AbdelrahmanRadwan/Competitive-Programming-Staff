#include<iostream>
using namespace std;
void mini(int arr[],int size,int i,int &min)
{
    int minimum=arr[i];
    for (int j = i; j < size; j++)
    {
        if (arr[j] <= minimum)
        {
            minimum = arr[j];
            min = j;
        }
    }
}
int main()
{
    int size, counter=0, result[3000][2], *arr;
    cin >> size;
    int k = 0,min;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }




    for (int i = 0; i < size; i++)
    {
        mini(arr, size, i, min);
        if (arr[i] > arr[min])
        {
            swap(arr[i], arr[min]);
            result[k][0] = i;
            result[k][1] = min;
            counter++;
            k++;
        }
    }
    if (counter)
    {
        cout << counter << endl; 
        for (int i = 0; i < k; i++)
        {
            cout << result[i][0] << " " << result[i][1] << endl;
        }
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}