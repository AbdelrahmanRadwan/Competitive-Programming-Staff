#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long testcases;
	long long sum, difference,x,y;
	cin >> testcases;
	while (testcases--)
	{
		cin >> sum >> difference;
			x = (sum+difference) / 2;
			y = sum - x;
			if (x+y==sum &&sum>=difference&& ((x-y==difference)||(y-x==difference)))
			cout << max(x, y) << " " << min(x, y) << endl;
			else
				cout << "impossible" << endl;
	}
	return 0;
}
