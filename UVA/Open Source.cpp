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
	map<string, set<string> >Student;
	map<string, int>Courses;
	vector<pair<int,string> >Table;
	string input, course;
	while (getline(cin, input) && input != "0")
	{
		if (input == "1")
		{
			for (auto it = Student.begin(); it != Student.end(); it++)
				if (it->second.size() == 1)
					Courses[*(it->second.begin())]++;
			for (auto it = Courses.begin(); it != Courses.end(); it++)
				Table.push_back(make_pair(it->second,it->first));
			sort(Table.begin(), Table.end(),Check);
			for (int i = 0; i < Table.size(); i++)
				cout << Table[i].second << " " << Table[i].first << endl;
			Student.clear();
			Courses.clear();
			Table.clear();
		}
		else if (input[0] >= 'A' && input[0] <= 'Z')
			course = input, Courses[input];
		else if (input[0] >= 'a' && input[0] <= 'z')
			Student[input].insert(course);
	}
  return 0;
}
