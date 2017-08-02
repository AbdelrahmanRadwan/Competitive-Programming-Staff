#include<iostream>
using namespace std;
int main()
{
	int *arr, n,counts;
	while (cin >> n)
	{
		counts = 0;
		int counter[5] = {};
		arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			counter[arr[i]]++;
		}
		while (counter[3] >= 1 && counter[1] >= 1)
		{
			counter[3]--;
			counter[1]--;
			counts++;
		}
		counts += counter[3];
		counts += counter[4];
		counts += (counter[2] / 2);
		counter[2] =(counter[2] %2 );

		if (counter[2] == 0)
		{
			counts += (counter[1] / 4);
			counter[1] %= 4;
			if (counter[1] > 0)
			{
				counter[1] = 1;
			}
			counts += counter[1];
		}
		else if (counter[2] == 1 && counter[1] >= 2)
		{
			counter[1] -= 2;
			counter[2]--;
			counts++;
			counts += (counter[1] / 4);
			counter[1] %= 4;
			if (counter[1] > 0)
			{
				counter[1] = 1;
			}
			counts += counter[1];
		}
		else
		{
			counts++;
		}
	
		cout << counts << endl;
	}
	return 0;
}