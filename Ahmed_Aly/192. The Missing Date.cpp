#include<iostream>
using namespace std;
int main()
{
	int testcases, y1, m1, y2, m2,sum1,sum2;
	cin >> testcases;
	for (int i= 0;i<testcases; i++)
	{
		cin >> y1>>m1>>y2>> m2;
		sum1 = y1 + y2;
		sum2 = m1 + m2;
		while (sum2>12)
		{
			sum2-=12;
			sum1++;
		}
		cout << sum1 << " " << sum2<<endl;	
	}
	return 0;
}