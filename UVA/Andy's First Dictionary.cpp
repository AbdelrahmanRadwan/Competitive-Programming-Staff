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
using namespace std;
#define ll  long long int
#define ld long double
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844
int GCD(int x, int y) { return !y ? x : GCD(y, x % y); }
int LCM(int x, int y){ return x*y / GCD(x, y); }
ll ceilDivision(ll dividend, ll divisor){ return (dividend + divisor - 1) / divisor; }
#define Size 1000001
ll divisors[Size];
void Divisors()
{
	divisors[0] = 1;
	for (int i = 1; i < Size; i++)
		for (int j = i; j < Size; j += i)
			divisors[j]++;
}
int main()
{
	set<string>Dictionary;
	string word;
	int counter = 0;
	while (EOF && cin >> word)
	{
		counter++;
		string temp = "\0";
		for (int i = 0; i < word.size(); i++)
		{
			if (isalpha(word[i]))
				temp += tolower(word[i]);
			else if (temp != "\0")
				Dictionary.insert(temp), temp = "\0";
			if (i == word.size() - 1 && temp != "\0")
				Dictionary.insert(temp);
		}
	}
	for (auto it = Dictionary.begin(); it != Dictionary.end(); it++)
		cout << *it << endl;
	return 0;
}
