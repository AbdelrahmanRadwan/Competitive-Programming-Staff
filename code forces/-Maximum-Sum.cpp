#include<iostream>
using namespace std;
int main()
{
	int *arr, size, testcases;
	long long sum, max;
	cin >> testcases, size;
	for (int ii = 0; ii < testcases; ii++)
	{
		cin >> size;
		max = -1000000;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			
			cin >> arr[i];
			if (arr[i]>max)
				max = arr[i];
		}
		sum = 0;
		for (int j = 0; j < size; j++)
		{
			sum += arr[j];
			if (sum > max)
				max = sum;
			else if (sum < 0)
				sum = 0;
		}
		cout << max << endl;
	}
	return 0;
}