#include<iostream>
using namespace std;
int main()
{
	int testcases,size;
		long long int *arr1, *arr2;
	cin >> testcases;
	for (int ii = 0; ii < testcases; ii++)
	{
		cin >> size;
		arr1 = new long long int[size];
		arr2 = new long long int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr1[i];
		}
		for (int i = 0; i < size; i++)
		{
			cin >> arr2[i];
		}
		for (int i = 0; i < size - 1; i++)
		{
			arr2[i + 1] = arr2[i] * arr1[i + 1] + arr2[i + 1];
		}
		cout << arr2[size - 1] << endl;
		}
	return 0;
}