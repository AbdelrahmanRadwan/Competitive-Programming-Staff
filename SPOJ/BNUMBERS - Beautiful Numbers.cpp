#include<iostream>
#include<algorithm>
#include<map>
#include<bitset>
#include<set>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<string>
#include<string.h>
#include<cstring>
#include<iomanip>
#include<stdio.h>
#include<sstream>
#include<bitset>
#include<locale>
#include<cmath>
#include<iomanip>
#include<math.h>
#include<bitset>
using namespace std;
#define ll  long long
#define ld long double
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844
int GCD(int x, int y) { return !y ? x : GCD(y, x % y); }
int LCM(int x, int y){ return x*y / GCD(x, y); }
ll ceilDivision(ll dividend, ll divisor){ return (dividend + divisor - 1) / divisor; }
ll n;
void go(string result = "")
{
	if (result.size()==n)
	{
		cout << result << endl;
		return;
	}
	go(result + '1');
	go(result + '2');
	go(result + '3');
}
int main()
{
	while (cin >> n)
		go(), cout << endl;
	return 0;
}