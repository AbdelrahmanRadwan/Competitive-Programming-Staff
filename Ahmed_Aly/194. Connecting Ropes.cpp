#include<iostream>
using namespace std;
int main()
{
	int *arr, testcases, n,sum=0;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		sum = 0;
		cin >> n;
		arr = new int [n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
			sum += arr[j];
		}

	
		cout << sum - (n * 2 - 2) << endl;
	}
	return 0;
}