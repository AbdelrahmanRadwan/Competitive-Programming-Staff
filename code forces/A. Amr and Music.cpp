#include<algorithm>
#include<iostream>
#include<utility>
using namespace std;
int main()
{
	int days, size,counter=0;
	pair<int, int>*arr;
	cin >> size >> days;
	arr = new pair<int, int>[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i].first;
		arr[i].second = i + 1;
	}
	sort(arr, arr + size);
	for (int i = 0; i < size; i++)
	{
		if (days >= arr[i].first)
		{
			counter++;
			days -= arr[i].first;
		}
		else
			break;
	}
	cout << counter << endl;
	for (int i = 0; i < counter; i++)
	{
		cout << arr[i].second;
		if (i == counter - 1)
			cout << endl;
		else
			cout << " ";
	}
	return 0;
}