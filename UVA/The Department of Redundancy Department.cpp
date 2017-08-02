#include<iostream>
#include<map>
#include<vector>
using namespace std;
#define ll long long 
int main()
{
	ll temp;
	map < ll, ll >M;
	vector<ll>V;
	while (cin >> temp)
	{
		if (!M[temp])
			V.push_back(temp);
		M[temp]++;
	}
	for (ll i = 0;i<V.size();i++)
		cout << V[i]<< " " << M[V[i]]<<endl;
	return 0;
}