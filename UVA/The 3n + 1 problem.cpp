#include<iostream>
using namespace std;
int cycle_length(int x);
int main()
{
	int i, j, max, temp_i, temp_j;
	while (cin >> i >> j)
	{
		temp_i = i;
		temp_j = j;
		if (i > j)
		{
			swap(i, j);
		}
		max = cycle_length(i);
		for (int e = i; e <= j; e++)
		{
			if (cycle_length(e) > max)
			{
				max = cycle_length(e);
			}
			else
			{
				continue;
			}
		}
		cout << temp_i << ' ' << temp_j << ' ' << max << endl;
	}
	return 0;
}
int cycle_length(int x)
{
	int k = 1;
	while (x >= 1)
	{
		if (x == 1)
		{
			break;
		}
		else if (x % 2 != 0)
		{
			x = 3 * x + 1;
		}
		else
		{
			x = x / 2;
		}
		k++;
	}
	return k;
}
