
#include<iostream>
using namespace std;
void order(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[i])
			{
				swap(arr[j], arr[i]);
			}
		}
	}
}
int main()
{
	int *arr, n, counter,number;

	while (cin >> n)
	{
		number = -1;
		arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		order(arr, n);
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == number)
			{
				continue;
			}
			counter = 0;
			for (int j = i; j < n; j++)
			{
				if (arr[j] == arr[i])
				{
					counter++;
				}
			}
			cout << arr[i] << " aparece " << counter << " vez(es)" << endl;
			number = arr[i];
		}
	}
	return 0;
}
