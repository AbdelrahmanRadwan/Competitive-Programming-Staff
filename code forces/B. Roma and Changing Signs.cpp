#include<iostream>
#include<algorithm>
using namespace std;
void Calculate(int moves, int arr[], int size)
{
	sort(arr, arr + size);
	if (arr[0] >= 0)
	{
		for (int i = 0; i < moves; i++)
		{
			arr[0] *= -1;
		}
	}
	else
	{
		for (int i = 0; i < moves; i++)
		{
			arr[0] *= -1;	
			sort(arr, arr + size);
		}
	}
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;
}
int main()
{
	int *arr, size, moves, sum;
	while (cin >> size >> moves)
	{
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
			if (arr[i] < 0 && moves !=0)
			{
				arr[i] *= -1;
				moves--;
			}
		}
		Calculate(moves, arr, size);
	}
	return 0;
}