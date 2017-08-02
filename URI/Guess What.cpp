#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int *arr, size, guess, mini, index, testcases,difference;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		mini = 100;
		cin >> size >> guess;
		arr = new int[size];
		for (int j = 0; j < size; j++)
		{
			cin >> arr[j];
			difference = abs(guess - arr[j]);
			if (difference < mini)
			{
				mini = difference;
				index = j + 1;
			}
		}
		cout << index << endl;

	}

	return 0;
}