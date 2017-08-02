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
#include<sstream>
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
#define Size 1000000000
bitset<Size>prime;
vector<ll>Primes;
void Sieve()
{
	prime[0] = prime[1] = true;
	for (ll i = 4; i < Size; i += 2)
		prime[i] = true;
	for (int i = 3; i*i <= Size; i += 2)
		if (!prime[i])
			for (ll j = i*i; j < Size; j += i)
				prime[j] = true;
}
void GetPrimes()
{
	for (int i = 0; i < prime.size(); i++)
		if (!prime[i])
			Primes.push_back(i);
}
bool Check(pair<int, string> left, pair<int, string> right)
{
	return ((left.first > right.first) || (left.first == right.first && left.second < right.second));
}
int main()
{
	int cases,number,MAX;
	string input;
	cin >> cases;
	cin.ignore();
	while (cases--)
	{
		getline(cin,input);
		vector<int>numbers;
		stringstream ss(input);
		MAX = 0;
		while (ss >> number)
			numbers.push_back(number);
		for (int i = 0; i < numbers.size(); i++)
			for (int j = i + 1; j < numbers.size(); j++)
				MAX = max(MAX, GCD(numbers[i], numbers[j]));
		cout <<MAX<< endl;
	}
	return 0;
}