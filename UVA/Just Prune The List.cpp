#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
int count(int *arr1, int*arr2, int size1, int size2)
{
	int i = 0, j = 0, counter = 0;
	for (i, j; i < size1 && j < size2;)
	{
		if (arr1[i] == arr2[j]) i++, j++;
		else
		{
			if (arr1[i]>arr2[j])j++;
			else i++;
			counter++;
		}
	}
	return counter + (size2 - j) + (size1 - i);
}
int main()
{
	int testcases;
	cin >> testcases;
	while (testcases--)
	{
		int *arr1, *arr2, size1, size2;
		cin >> size1 >> size2;
		arr1 = new int[size1];
		arr2 = new int[size2];
		for (int i = 0; i < size1; i++)
			cin >> arr1[i];
		for (int i = 0; i < size2; i++)
			cin >> arr2[i];
		sort(arr1, arr1 + size1);
		sort(arr2, arr2 + size2);
		cout << count(arr1, arr2, size1, size2) << endl;
		delete[]arr1;
		delete[]arr2;
	}

	return 0;
}
////////////////////////////////////////////////////////////
#include<iostream>
#include<map>
#include<stack>
#include<queue>
#include<string>
#include<cstring>
#include<string.h>
#include<cmath>
#include<math.h>

#define ll long long
using namespace std;
int main()
{
	map<ll, ll>M;
	int testcases, n, m, temp, sum;
	cin >> testcases;
	while (testcases--)
	{
		map<ll, ll>M;
		sum = 0;
		cin >> n >> m;
		for (ll i = 0; i < n; i++)
		{
			cin >> temp;
			M[temp]++;
		}
		for (ll i = 0; i < m; i++)
		{
			cin >> temp;
			M[temp]--;
		}
		for (map<ll, ll>::iterator it = M.begin(); it != M.end(); ++it)
			sum += abs(it->second);
		cout << sum << endl;
	}
	return 0;
}
