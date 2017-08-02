#include<iostream>
using namespace std;
int main()
{
	int n, *arr,m;
	bool a;
	while (cin >> n>>m)
	{
		a = true;
		arr = new int[n * 2];
		for (int i = 0; i < n * 2; i++)
		{
			cin >> arr[i];
			if (arr[i] == m || arr[i] == 7 - m)
			{
				a = false;
			}
		}
		if (a == false)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
	return 0;
}