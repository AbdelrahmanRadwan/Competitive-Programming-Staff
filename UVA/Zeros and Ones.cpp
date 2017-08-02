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
#include<bitset>
#include<locale>
#include<cmath>
#include<iomanip>
#include<math.h>
#include<bitset>
#include<deque>
using namespace std;
#define ll  long long int
#define ld long double
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844
ll GCD(ll x, ll y) { return !y ? x : GCD(y, x % y); }
ll LCM(ll x, ll y){ return x*y / GCD(x, y); }
ll ceilDivision(ll dividend, ll divisor){ return (dividend + divisor - 1) / divisor; }
#define MAX(a,b,c) max(max(a,b),c)
string number;
vector<ll>Summitions;
void Build()
{
	Summitions.push_back(0);
	for (int i = 0; i < number.size(); i++)
		Summitions.push_back(Summitions[i] + (number[i] - '0'));
}
bool Check(int start, int end)
{

	return (Summitions[end + 1] - Summitions[start] == 0 || Summitions[end + 1] - Summitions[start] == end - start + 1);
}
int main()
{
	int cases, start, end,counter=1;
	while (getline(cin, number), number != "")
	{
		cout << "Case " << counter++ << ":" << endl;
		Summitions.clear();
		Build();
		cin >> cases;
		while (cases--)
		{
			cin >> start >> end;
			if (start > end)swap(start, end);
			if (Check(start, end))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
		cin.ignore();
	}
	return 0;
}