#include<iostream>
using namespace std;
int main()
{
	int *arr, n, k, counter=0;
	while (cin>>n)
	{
		
		cin >> k;
		arr = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
			
		}
		for (int j = 0; j < n; j++)
		{
			if (arr[k - 1] <= arr[j] && arr[j]>0)
			{
				counter++;
			}

		}

		cout << counter << endl;
		counter = 0;
	}
	return 0;
}