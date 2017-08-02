#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<map>
#include<vector>
using namespace std;
int main()
{
	long long temp;
	vector<long long>v;
	while (cin >> temp)
	{
		
		v.push_back(temp);
		if (v.size()-1 && temp<v[v.size()-2])
		sort(v.begin(), v.end());
		//odd
		if (v.size() % 2)
		{
			cout<<v[(int)(v.size() / 2)]<<endl;
		}
		//even
		else
		{
			cout <<(int)(v[v.size() / 2] + v[v.size() / 2 - 1]) / 2 << endl;
		}
	}
		return 0;
}