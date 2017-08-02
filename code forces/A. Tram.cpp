#include<iostream>
using namespace std;
int main()
{
	int *arr, size, max,capacity;
	while (cin >> size)
	{
		max = 0;
		capacity = 0;
		arr = new int[size*2];
		for (int i = 0; i < size * 2; i++)
		{
			cin >> arr[i];
			if (i % 2 == 0)
			{
				arr[i] = -arr[i];
			}
			max = max + arr[i];
			if (max>capacity)
			{
				capacity = max;
			}
		}
		cout << capacity << endl;
	}

	return 0;
}