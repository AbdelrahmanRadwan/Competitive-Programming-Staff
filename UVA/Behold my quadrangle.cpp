#include<iostream>
#include<set>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
void state(long long *arr,long long sum)
{
	if (arr[0] == arr[3])
		cout << "square" << endl;
	else if (arr[0]==arr[1] && arr[2]==arr[3])
		cout << "rectangle" << endl;
	else if (arr[0]<=sum-arr[0] && arr[1]<=sum-arr[1] && arr[2]<=sum-arr[2] && arr[3]<=sum-arr[3])
		cout << "quadrangle" << endl;
	else
		cout << "banana" << endl;
}
int main()
{
	int testcases;
	long long arr[4],sum;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		sum = 0;
		for (int j = 0; j < 4; j++)cin >> arr[j],sum+=arr[j];
		sort(arr, arr + 4);
		state(arr,sum);
	}
	return 0;
}
