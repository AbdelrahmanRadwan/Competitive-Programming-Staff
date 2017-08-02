//#define _CRT_SECURE_NO_WARNINGS
//#pragma once
#include <iostream>
#include <algorithm>
#include <map>
#include <bitset>
#include <set>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <string.h>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <stdio.h>
#include <sstream>
#include <bitset>
#include <functional>
#include <locale>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <bitset>
using namespace std;
#define ll  long long
#define ld long double
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844
int GCD(int x, int y) { return !y ? x : GCD(y, x % y); }
int LCM(int x, int y) { return x*y / GCD(x, y); }
ll ceilDivision(ll dividend, ll divisor) { return (dividend + divisor - 1) / divisor; }
#define Mod  1000000007
map<ll, ll> factors;
inline void factorization(ll n)
{
	while (n % 2 == 0)
		n /= 2, factors[2]++;
	for (ll i = 3; i*i <= n; i += 2)
		while (n%i == 0)
			n /= i, factors[i]++;
	if (n > 2)
		factors[n]++;
}
inline ll answer()
{
	ll result = 1, resultsofar, sum;
	for (map<ll, ll>::iterator it = factors.begin(); it != factors.end(); it++)
	{
		resultsofar = 1, sum = 0;
		for (ll i = 0; i <= it->second; i++)
			sum = (sum + resultsofar) % Mod,resultsofar = (resultsofar*it->first) % Mod;
		result *= (sum%Mod);
		result %= Mod;
	}
	return result;
}
int main()
{
	int testcases, n;
	ll temp;
	cin >> testcases;
	for (int i = 1; i <= testcases; i++)
	{
		cin >> n;
		factors.clear();
		while (n--)
			cin >> temp, factorization(temp);
		cout << "Case " << i << ": ";
		cout << answer() << endl;
	}
	return 0;
}