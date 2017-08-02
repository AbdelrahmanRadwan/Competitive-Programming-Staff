#include<iostream>
#include<map>
#include<string>
#include<cstring>
#include<string.h>
#define ll long long
using namespace std;
int main()
{
	map<string, ll>M;
	int n, m;
	string tempstring;
	ll templonglong,sum;
	cin >> n >> m;
	while (n--)
	{
		cin >> tempstring >> templonglong;
		M[tempstring] = templonglong;
	}
	while (m--)
	{
		sum = 0;
		while (cin >> tempstring)
		{
			if (tempstring == ".")
				break;
			if (M.count(tempstring))
				sum += M[tempstring];
		}
		cout << sum << endl;
	}
	return 0;
}