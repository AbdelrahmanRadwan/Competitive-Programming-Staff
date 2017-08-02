#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int size, *arr1, *arr2, index1, index2;
    bool a,first;
    while (cin >> size)
    {
        a = true,first=true;
        index1=index2= 1;
        arr1 = new int[size];
        arr2 = new int[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr1[i];
            arr2[i] = arr1[i];
        }
        sort(arr2, arr2 + size);
        for (int i = 0; i < size; i++)
        {
            if (arr1[i] != arr2[i])
            {
                if (first)
                {
                    first = false;
                index1 = i + 1;
                }
                index2 = i+1;
            }
        }
        for (int i = index1-1, j = index2-1; i<index2; i++, j--)
        {
            if (arr1[i] != arr2[j])
            {
                a = false;
                break;
            }
        }
        if (a)
        {
            cout << "yes" << endl << index1 << " " << index2 << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        delete[]arr1;
        delete[]arr2;
        arr1 =arr2= NULL;
    }

    return 0;
}