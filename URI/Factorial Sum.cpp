#include<iostream>
using namespace std;
long long factorial(int n)
{
	long long factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	return factorial;
}
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << factorial(a) + factorial(b) << endl;
	}
	return 0;
}