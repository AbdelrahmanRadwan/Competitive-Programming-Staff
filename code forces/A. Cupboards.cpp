#include<iostream>
using namespace std;
int main()
{
	int **arr, n,sum1,sum2;
	while (cin >> n)
	{
		sum1 = 0;
		sum2 = 0;
		arr = new int*[n];
		for (int i = 0; i < n; i++)
		{
			arr[i] = new int [2];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cin >> arr[i][j];
				if (j == 0)
				{
					sum1 += arr[i][j];
				}
				else
				{
					sum2 += arr[i][j];
				}
			}
		}
		if (sum1 > n / 2)
		{
			sum1 = n - sum1;
		}
		if (sum2 > n / 2)
		{
			sum2 = n - sum2;
		}
		cout << sum1 + sum2 << endl;
	}
	return 0;
}