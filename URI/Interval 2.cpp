#include<iostream>
using namespace std;
int main()
{
	int size, *arr,in,out;
	while (cin >> size)
	{
		arr = new int[size];
		in = 0;
		out = 0;
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
			if (arr[i] >= 10 && arr[i] <= 20)
			{
				in++;
			}
			else
			{
				out++;
			}
		}
		cout << in << " in" << endl << out << " out" << endl;
	}
	return 0;
}
