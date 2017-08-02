#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int  n;
	double *arr,sum;
	while (cin >> n)
	{
		sum = 0;
		arr = new double[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		cout << fixed<<setprecision(12)<<sum/n<< endl;
	}
	return 0;
}
