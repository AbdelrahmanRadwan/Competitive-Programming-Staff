#include<iostream>
#include<string>
#include<string.h>
#include<cstring>
#include<stdio.h>

using namespace std;
int main()
{
	int testcases, n, TempInt,position;
	string TempString, *arr;
	cin >> testcases;
	while (testcases--)
	{
		cin >> n;
		position = 0;
		TempString = "\0";
		arr = new string[n];
		for (int i = 0; i < n; i++)
		{
			cin >> TempString;
			if (TempString == "SAME")
			{
				cin >> TempString;
				cin >> TempInt;
				TempString = arr[TempInt - 1];
			}
			arr[i] = TempString;
			if (arr[i] == "LEFT")
				position--;
			else
				position++;
		}
		cout << position << endl;
		delete[]arr;
	}
	return 0;
}