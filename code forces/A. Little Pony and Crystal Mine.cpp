#include<iostream>
using namespace std;
void up(int n)
{
	for (int i = 0; i <= n / 2; i++)
	{
		for (int j = n / 2; j > i; j--)
		{
			cout << "*";
		}
		for (int j = 0; j <= i * 2; j++)
		{
			cout << "D";
		}
		for (int j = n / 2; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}

}
void down(int n)
{
	for (int i = 1; i <= n / 2; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < n - (2 * i); j++)
		{
			cout << "D";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}


}
int main()
{
	int n;
	while (cin >> n)
	{
		up(n);
		down(n);
		}
	return 0;
}