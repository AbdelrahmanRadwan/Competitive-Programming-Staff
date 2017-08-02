#include<iostream>
#include<sstream>
#include<string>
#include<cmath>
#define ll long long
using namespace std;
ll arr[105][105];
bool ok(int n)
{
	for (ll i = 0; i<=n ; i++)
		for (ll j = 0; j <= n; j++)
			if (arr[j][i] != arr[n-j][n-i])
				return false;
	return true;
}
int main()
{
	bool negative = false;
	ll n, testcases;
	char temp;
	cin >> testcases;
	for (ll k = 1; k <= testcases; k++)
	{
		negative = false;
		cin >> temp >> temp >> n;
		for (ll i = 0; i < n; i++)
			for (ll j = 0; j < n; j++)
			{
				cin >> arr[i][j];
				if (arr[i][j] < 0)negative = true;
			}
		n--;
		if (!negative && ok(n))
			cout << "Test #" << k << ": Symmetric." << endl;
		else
			cout << "Test #" << k << ": Non-symmetric." << endl;
	}
	return 0;
}
