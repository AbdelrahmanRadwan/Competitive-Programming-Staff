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
#include<locale>
#include<cmath>
#include<math.h>
using namespace std;
#define ll  long long int
#define ld long double
int GCD(int x, int y) { return !y ? x : GCD(y, x % y); }
int LCM(int x, int y){ return x*y / GCD(x, y); }
ll ceilDivision(ll dividend, ll divisor){ return (dividend + divisor - 1) / divisor; }
#define MIN(a,b,c,d,f) min(min(a,b),min(f,min(c,d)))
int main()
{
	int size, temp, possible;
	while (cin >> size && size)
	{
		possible = true;
		vector<int>Distance(size);
		for (int i = 0; i < size; i++)
			cin >> Distance[i];
		Distance.push_back(1422);
		sort(Distance.begin(), Distance.end());
		for (int i = 0; i<size; i++)
			if (Distance[i + 1] - Distance[i] > 200)
			{
				possible = false;
				break;
			}
		if (Distance.back() - Distance[Distance.size() - 2] > 100)
			possible = false;
		if (possible)
			cout << "POSSIBLE" << endl;
		else
			cout << "IMPOSSIBLE" << endl;
	}
	return 0;
}