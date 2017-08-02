#include<iostream>
using namespace std;
int main()
{
	int *arr, n, counter0, counter1;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}
		arr = new int[n];
		counter0 = 0;
		counter1 = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] == 0)
			{
				counter0++;
			}
			else if (arr[i] == 1)
			{
				counter1++;
			}
		}
		cout << "Mary won " << counter0 << " times and John won " << counter1 <<" times"<< endl;

	}
	return 0;
}