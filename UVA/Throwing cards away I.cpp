#include<iostream>
#include<string>
#include<string.h>
#include<cstring>
#include<stdio.h>
#include<deque>
#include<stack>
using namespace std;
int main()
{
	int size,_size;
	deque<int>cards;
	while (cin >> size && size)
	{
		_size = size;
		//cards.clear();
		cout << "Discarded cards:";
		while (_size--)
			cards.push_front(_size+1);
		while (!cards.empty())
		{
			if (cards.size() == 1)
			{
				cout << endl;
				cout<<"Remaining card: "<< cards.front() << endl;
				cards.pop_back();
				break;
			}
			if (cards.size() == size)
				cout << " ";
			cout << cards.front();
			cards.pop_front();
			if (cards.size()-1)cout << ", ";
			cards.push_back(cards.front());
			cards.pop_front();
		}
	}
	return 0;
}
