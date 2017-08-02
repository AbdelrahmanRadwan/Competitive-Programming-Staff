#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int testcases,  n, average, deleted, move;
	double *arr, sum;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		sum = 0;
		move = 0;
		deleted = 0;
		cin >> n;
		arr = new double [n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
			sum += arr[j];
		}
		average = sum / n;
		deleted = abs(average*n - sum);
		for (int j = 0; j < n; j++)
		{
			move += abs(arr[j]-average);
		}
		move -= deleted;
		move /= 2;
		cout << deleted << " " << move << endl;
	}
	return 0;
}