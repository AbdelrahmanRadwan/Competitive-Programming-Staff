#include<iostream>
using namespace std;
void order(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j]>arr[i])
			{
				swap(arr[j], arr[i]);
			}
		}
	}
}
int main()
{
	int n, a, b, *arr;
	while (cin >> n >> a >> b)
	{
		arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		order(arr, n);
		cout << arr[a-1] - arr[a]<<endl;
	}
	return 0;
}