#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int  arr1[3],arr2[3];
	for (int i = 0;i<3;i++)
	{
		cin >> arr1[i];
		arr2[i] = arr1[i];
	}
	sort(arr1, arr1 + 3);
	for (int i = 0; i<3; i++)
	{
		cout << arr1[i] << endl;
	}
	cout << endl;
	for (int i = 0; i<3; i++)
	{
		cout << arr2[i] << endl;
	}
	return 0;
}
