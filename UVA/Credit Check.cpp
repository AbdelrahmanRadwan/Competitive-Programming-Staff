#include<iostream>
#include<string>
#include<string.h>
#include<cstring>
#include<stdio.h>

using namespace std;
void modify(int*arr,int index,int &sum)
{
	sum += arr[index]%10;
	arr[index] /= 10;
	arr[index + 1] = (arr[index] % 10) * 2;
	if (arr[index + 1] > 9)
		arr[index + 1] = arr[index + 1] % 10 + arr[index + 1] / 10;
	arr[index] /= 10;
	sum += arr[index] % 10;
	arr[index] /= 10;
	arr[index] *= 2;
	if (arr[index]>9)
	arr[index] = arr[index] % 10 + arr[index] / 10;
}
int main()
{
	int testcases;
	int arr[8] = {}, sum;
	cin >> testcases;
	while (testcases--)
	{
		sum = 0;
		for (int i = 0; i < 8; i += 2)
		{
			cin >> arr[i];
			modify(arr, i,sum);
			sum = sum + arr[i + 1] + arr[i];
		}
		cout << (sum % 10 ? "Invalid" : "Valid") << endl;
	}
	
	return 0;
}
