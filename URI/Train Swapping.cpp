#include<iostream>
#include<algorithm>
using namespace std;
int order(int arr[], int size)
{
	int counter = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[i])
			{
				swap(arr[j], arr[i]);
				counter++;
			}
		}
	}
	return counter;
}
int main()
{
	int testcases, *arr, n;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		cin >> n;
		arr = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
		}
		cout <<"Optimal train swapping takes "<<order(arr, n) <<" swaps."<< endl;

	}
	return 0;
}