#include<iostream>
using namespace std;
int main()
{
	int *arr, size, testcases;
	cin >> testcases;
	for (int i = 0; i<testcases; i++)
	{
		cin >> size;
		arr = new int[size];
		for (int j = 0; j < size; j++)
		{
			cin >> arr[j];
			if (arr[j] == 1)
			{
				cout << "Rolien" << endl;
			}
			else if (arr[j] == 2)
			{
				cout << "Naej" << endl;
			}
			else if (arr[j] == 3)
			{
				cout << "Elehcim" << endl;
			}
			else
			{
				cout << "Odranoel" << endl;
			}
		}
	}
	return 0;
}