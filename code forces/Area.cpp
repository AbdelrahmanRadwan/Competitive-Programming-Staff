#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int testcases;
	long long m, n, k, l;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		cin >> m >> n >> k >> l;
		cout << (m*n) - (k*l) << endl;
	}
	return 0;
}