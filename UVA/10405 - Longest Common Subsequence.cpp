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
#define oo 1e5
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define _CRT_SECURE_NO_WARNINGS
ll dp[1002][1002];
int main()
{
	fast;
	string a, b;
	//stack<char>answer;
	while (getline(cin,a) && getline(cin,b))
	{
		for (int row = 1; row <= a.size(); row++)
			for (int column = 1; column <= b.size(); column++)
				if (a[row - 1] == b[column - 1])
					dp[row][column] = dp[row - 1][column - 1] + 1;
				else
					dp[row][column] = max(dp[row][column - 1], dp[row - 1][column]);
		cout << dp[a.size()][b.size()] << endl;
	}
	/*for (int row = a.size(); row>=1; row--)
		for (static int column = b.size(); column; column--)
			if (dp[row][column] > dp[row][column - 1])
			{
				answer.push(b[column - 1]);
				column--;
				break;
			}
	while (!answer.empty())
		cout << answer.top(), answer.pop();*/
	return 0;
}