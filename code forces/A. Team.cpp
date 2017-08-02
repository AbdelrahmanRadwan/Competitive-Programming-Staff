#include<iostream>
using namespace std;
int main()
{
	int n, **arr,sum,counter;
	while (cin >> n)
	{
		counter = 0;
		arr = new int *[n];
		for (int i = 0; i < n; i++)
		{
			arr[i] = new int[3];
		}
		for (int i = 0; i < n; i++)
		{
			sum = 0;
			for (int j = 0; j < 3; j++)
			{
				cin >> arr[i][j];
				sum += arr[i][j];
			}
			if (sum >= 2)
			{
				counter++;
			}
		}
		cout << counter << endl;
	}
	return 0;
}
