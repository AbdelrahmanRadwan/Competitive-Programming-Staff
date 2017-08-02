#include<iostream>
#include<string>
#include<string.h>
#include<queue>
using namespace std;
int main()
{
	string TempString, place;
	queue<long>left, right;
	int testcases,counter;
	long length,NumberOfCars,TempLong;
	cin >> testcases;
	while (testcases--)
	{
		counter = 0;
		place = "left";
		cin >> length >> NumberOfCars;
		for (int i = 0; i < NumberOfCars; i++)
		{
			cin >> TempLong >> TempString;
			if (TempString == "left")
				left.push(TempLong);
			else
				right.push(TempLong);
		}
		length *= 100;
		TempLong = length;
		while (!left.empty() || !right.empty())
		{
			if (place == "left")
			{
				if (left.empty())
				{
					TempLong = length;
					counter++;
					place = "right";
				}
				else
				{
					if (TempLong - left.front() >= 0)
					{
						TempLong -= left.front();
						left.pop();
					}
					else
					{
						TempLong = length;
						place = "right";
						counter++;
					}
				}
			}
			else if (place == "right")
			{
				if (right.empty())
				{
					TempLong = length;
					counter++;
					place = "left";
				}
				else
				{
					if (TempLong - right.front() >= 0)
					{
						TempLong -= right.front();
						right.pop();
					}
					else
					{
						TempLong = length;
						place = "left";
						counter++;
					}
				}
				}
		}
		cout << counter+1 << endl;
	}
	return 0;
}