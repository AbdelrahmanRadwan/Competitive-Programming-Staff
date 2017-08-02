#include<iostream>
using namespace std;
int main()
{
	int **arr, n,counter,max;
	while (cin >> n)
	{
		counter = 1;
		max = 1;
		arr = new int*[n];
		for (int i = 0; i < n; i++)
		{
			arr[i] = new int[2];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cin >> arr[i][j];
			}
		}
		for (int i = 0; i < n-1; i++)
		{
			if (arr[i][0] == arr[i + 1][0] && arr[i][1] == arr[i + 1][1])
			{
				counter++;
				if (counter>max)
				{
					max = counter;
				}
			}
			else
			{
				counter = 1;
			}
			
		}
		cout << max << endl;
	}
	return 0;
}
