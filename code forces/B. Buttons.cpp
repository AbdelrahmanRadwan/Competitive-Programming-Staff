#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	while (cin >> n)
	{
		sum = n;
		for (int i = 1; i <= n; i++)
		{
			sum += (i*(n - i));
		}
		cout << sum << endl;
	}
	return 0;
}