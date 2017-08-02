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
ld fact[10];
void factorial()
{
    fact[0]=1;
    for(int i=1;i<10;i++)
        fact[i]=i*fact[i-1];
}
void rev()
{
    for(int i=0;i<10;i++)
        fact[i]=1/fact[i];
}
void accomulate()
{
    factorial();
    rev();
    for(int i=1;i<10;i++)
        fact[i]+=fact[i-1];
}
int main()
{
    fast;
	accomulate();
	cout<<"n e\n- -----------\n";
	for(int i=0;i<2;i++)
        cout<<i<<" "<<fixed<<setprecision(0)<<fact[i]<<endl;
    	for(int i=2;i<3;i++)
        cout<<i<<" "<<fixed<<setprecision(1)<<fact[i]<<endl;
        	for(int i=3;i<10;i++)
        cout<<i<<" "<<fixed<<setprecision(9)<<fact[i]<<endl;
	return 0;
}
