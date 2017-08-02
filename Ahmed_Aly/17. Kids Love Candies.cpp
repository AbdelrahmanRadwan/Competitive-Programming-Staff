#include<iostream>
using namespace std;
int main()
{
	int testcases, *arr, n, k,sum;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		sum = 0;
		cin >> n;
		cin >> k;
		arr = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
			sum += arr[j] / k;	
		}
		cout << sum << endl;
	}
	return 0;
}