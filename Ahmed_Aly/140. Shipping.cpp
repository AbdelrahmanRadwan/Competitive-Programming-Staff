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
#include <cstring>
#include <string.h>
#include <iomanip>
#include <stdio.h>
#include <sstream>
#include <stdlib.h>
#include <functional>
#include <locale>
#include <cmath>
#include <math.h>

using namespace std;

#define ll  long long
#define ld long double
//#define oo 10000000000
//#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844
//#define fast ios_base::sync_with_stdio(0);cin.tie(0);
//#define _CRT_SECURE_NO_WARNINGS
int main()
{
	//fast;
	ll testcases, n, answer;
	cin >> testcases;
	while (testcases--)
	{
		answer = 100000000;
		cin >> n;
		for (int i = 1; i <= n; i++)
			if (n%i == 0)
				for (int j = 1; j <= n; j++)
					if ((n/i)%j == 0)
						answer = min(answer, i + j + (ll)((ll)(n / i) / j));
		cout << answer << endl;
	}
	return 0;
}