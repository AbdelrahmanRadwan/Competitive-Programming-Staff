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

#define _CRT_SECURE_NO_WARNINGS

#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844
#define fast ios_base::sync_with_stdio(0);cin.tie(0);

int n;

ll arr[101][2];
ll dp[101][101];

ll solve(int start,int end,ll sum)
{
    if(start==n || end==n)
    {
        if(start!=end)return 1000000000;
        else return 0;
    }
    if(dp[start][end]!=-1)return dp[start][end];
   return dp[start][end]=min((arr[end][0]+sum+10)*arr[end][1]+solve(end+1,end+1,0),solve(start,end+1,sum+arr[end][0]));
}

int main()
{
    fast;
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        memset(dp,-1,sizeof dp);
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i][0]>>arr[i][1];
        cout<<solve(0,0,0)<<endl;
    }
	return 0;
}