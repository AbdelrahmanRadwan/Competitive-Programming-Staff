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
#include<math.h>
using namespace std;
#define ll  long long int
#define ld long double
int GCD(int x, int y) { return !y ? x : GCD(y, x % y); }
int LCM(int x, int y){ return x*y / GCD(x, y); }
ll ceilDivision(ll dividend, ll divisor){ return (dividend + divisor - 1) / divisor; }
#define MIN(A,B,C,D) min(min(A,B),min(C,D))
#define MAX(A,B,C,D) max(max(A,B),max(C,D))
int main()
{
	int testcases,iterate=0;
	string word;
	char code;
	cin >> testcases;
	for(int i = 1;i<= testcases; i++)
	{
		cin >> word;
		cout << "Case " << i << ": ";
		for (int j = 0; j < word.size(); j++)
		{
			if (word[j] >= 'A' && word[j] <= 'Z')
				code = word[j],iterate=0;
			else if (word[j] >= '0' && word[j] <= '9')
				iterate = iterate * 10 + (word[j] - '0');
			if ((j < word.size() - 1 && word[j + 1] >= 'A' && word[j + 1] <= 'Z') || j == word.size() - 1)
				while (iterate--)
					cout << code;
		}
		cout << endl;
	}
	return 0;
}