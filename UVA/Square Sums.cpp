#include<iostream>
#include<map>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<string>
#include<vector>
#include<set>
#define ll long long int
using namespace std;
ll arr[10][10];
int size;
ll sum1(int index)
{
	ll sum = 0;
	for (int i = index; i < size - index; i++)
	{
		sum += arr[index][i];
		if (size - 1 - index != index)
			sum += arr[size - 1 - index][i];
	}
	return sum;
}
ll sum2(int index)
{
	ll sum = 0;
	for (int i = index+1; i <size-index-1; i++)
	{
		sum += arr[i][index];
		if (size - 1 - index != index)
			sum += arr[i][size - 1 - index];
	}
	return sum;
}
int main()
{
	ll sum = 0;
	int Case=0;
	while (cin >> size && size)
	{
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				cin >> arr[i][j];
		cout << "Case " << ++Case << ":";
		for (int i = 0; i < size / 2 + size % 2; i++, sum = 0)
			cout <<" "<<sum1(i) + sum2(i);
		cout << endl;
	}
	return 0;
}
