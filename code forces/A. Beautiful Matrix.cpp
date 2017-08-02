#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int arr[5][5];
    int result;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                result = abs(i - 2) + abs(2 - j);
            }
        }
    }
    cout << result << endl;


    return 0;
}