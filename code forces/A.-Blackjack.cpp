#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		if ((n <= 19 && n >= 11)||n==21)
			cout << 4 << endl;
		else if (n == 20)
			cout << 15 << endl;
		else
			cout << 0 << endl;
	}

	return 0;
}