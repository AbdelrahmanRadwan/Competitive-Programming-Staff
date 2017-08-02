#include<iostream>
using namespace std;
int main()
{
	int *arr, n,counter;
	while (cin >> n)
	{
		
		counter = 0;
		arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			static int min = arr[i];
			static int max = arr[i];
			if (arr[i] < min)
			{
				min = arr[i];
				counter++;
			}
			if (arr[i]>max)
			{
				max = arr[i];
				counter++;
			}
		}
		cout << counter << endl;
	}
	return 0;
}
