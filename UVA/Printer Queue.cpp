#include<iostream>
#include<vector>
#include<utility>
#include<queue>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
	//bool out;
	queue<pair<int, int> >printer;
	int testcases, position, size, priority, arr[10], PriorityPointer;
	cin >> testcases;
	while (testcases--)
	{
		for (int i = 0; i < 10; i++) arr[i] = 0;
		PriorityPointer = 9;
		cin >> size >> position;
		for (int i = 0; i < size; i++)
		{
			cin >> priority;
			printer.push(make_pair(priority, i));
			arr[priority]++;
		}
		while (!printer.empty())
		{
			while (!arr[PriorityPointer])
				PriorityPointer--;
			if (printer.front().first == PriorityPointer && printer.front().second==position)
			{
				cout << size - printer.size() + 1 << endl;
				break;
			}
			else if (printer.front().first == PriorityPointer)
			{
				arr[PriorityPointer]--;
				printer.pop();
			}
			else if (printer.front().first < PriorityPointer)
			{
				printer.push(printer.front());

				printer.pop();

			}
		}
		while (!printer.empty())
			printer.pop();
	}
	return 0;
}