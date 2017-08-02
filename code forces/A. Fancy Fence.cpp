#include<iostream>
using namespace std;
int main()
{
	int testcases;
	double a, result;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		cin >> a;
		for (double j = 3; j < 10000; j++)
		{
			result = (((j - 2) * 180) / j);
			if (result == a)
			{
				cout << "YES" << endl;
				break;
			}
			else if (result > a)
			{
				cout << "NO" << endl;
				break;
			}
			}
	}
	return 0;
}