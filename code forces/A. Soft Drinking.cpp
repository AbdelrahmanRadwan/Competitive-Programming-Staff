#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, k, l, c, d, p,nl,np,number1,number2,number3,number4;
	while (cin >> n >> k >> l >> c >> d >> p >> nl >> np)
	{
		number1 = ((k*l) / n) / nl;
		number2 = ((c*d) / n) / 1;
		number3 = (p / n) / np;
		number4 = min(number1, number2);
		cout << min(number4,number3);
	}
	return 0;
}
