#include<iostream>
using namespace std;
int main()
{
	int testcases;
	long number,index;
	long arr[50000 + 1][3] = {};
	for (int i = 0; i*i<=50000; i++)
		for (int ii = i; ii*ii+i*i <= 50000; ii++)
			for (int iii = ii; iii*iii + ii*ii + i*i <= 50000; iii++)
			{
					index = i*i + ii*ii + iii*iii;
					if (!arr[index][0] && !arr[index][1] && !arr[index][2])
{
						arr[index][0] = i;
						arr[index][1] = ii;
						arr[index][2] = iii;
					}
			}
	cin >> testcases;
	while (testcases--)
	{
		cin >> number;
		if (arr[number][0] == 0 && arr[number][1] == 0 && arr[number][2] == 0)
			cout << -1 << endl;
		else
		cout << arr[number][0] << " "<<arr[number][1] << " " << arr[number][2] << endl;
	}
	return 0;
}