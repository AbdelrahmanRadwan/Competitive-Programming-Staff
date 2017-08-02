#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int *arr, n;
	while (cin >> n)
	{
		arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < n-1; i++)
		{
			for (int j = i; j < n; j++)
			{
				if (arr[j] < arr[i])
				{
					swap(arr[i], arr[j]);
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout<< arr[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}