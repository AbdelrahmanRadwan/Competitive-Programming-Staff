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
#include <functional>
#include <locale>
#include <cmath>
#include <math.h>

using namespace std;

#define ll  long long
#define ld long double

//#define _CRT_SECURE_NO_WARNINGS

#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844
//#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define Coins 11

int coins[Coins] = {5,10,20,50,100,200,500,1000,2000,5000,10000};
ll ways[Coins][30001];

ll solve(int index,int remainder)
{
	if (remainder == 0)return 1;
	if (index == Coins || remainder<0 ||remainder<coins[index])return 0;
	if (ways[index][remainder] != -1)return ways[index][remainder];
	return ways[index][remainder]=(solve(index + 1, remainder)+solve(index, remainder - coins[index]));
}
int main()
{
	//fast;
	string input;
	memset(ways, -1, sizeof ways);
	while (cin >> input && input!="0.00")
		{
		    int x=0,i=0,y=0;
		    for(;input[i]!='.';i++)
                x=x*10+(input[i]-'0');
            i++,x*=100;
            for(;i<input.size();i++)y=y*10+(input[i]-'0');
		    cout <<setw(6)<<input<<setw(17)<<solve(0,x+y) << endl;
        }
	return 0;
}