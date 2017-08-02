#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	string state;
	int *arr, testcases, n,counter;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		counter = 0;
		cin >> n;
		arr = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
		}
		cin >> state;
		for (int k = 0;k<n;k++)
			{
			if ((state[k] == 'J' && arr[k]>2) || (state[k] == 'S' && arr[k] <= 2))
				{
					counter++;
				}
			}
		cout << counter << endl;
	}
	return 0;
}