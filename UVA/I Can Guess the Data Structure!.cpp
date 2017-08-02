#include<iostream>
#include<map>
#include<stack>
#include<queue>
#include<string>
#include<cstring>
#include<string.h>
#define ll long long
using namespace std;
int main()
{
	stack<int>S;
	queue<int>Q;
	priority_queue<int>PQ;
	bool IsS = true, IsQ = true, IsPQ = true;
	int n,temp;
	while (cin >> n)
	{
		stack<int>S;
		queue<int>Q;
		priority_queue<int>PQ;
		IsS = IsQ = IsPQ = true;
		while (n--)
		{
			cin >> temp;
			if (temp == 1)
			{
				cin >> temp;
				if (IsS)
					S.push(temp);
				if (IsQ)
					Q.push(temp);
				if (IsPQ)
					PQ.push(temp);
			}
			else
			{
				cin >> temp;
				if (S.empty() ||IsS && S.top() != temp)
					IsS=false;
				else
					S.pop();

				if (Q.empty() || IsQ && Q.front() != temp)
					IsQ = false;
				else
					Q.pop();

				if (PQ.empty() || IsPQ && PQ.top() != temp)
					IsPQ = false;
				else
					PQ.pop();
			}
		}
		if (IsQ && IsS || IsQ && IsPQ || IsS && IsPQ)
			cout << "not sure"<<endl;
		else if (IsQ)
			cout << "queue" << endl;
		else if (IsS)
			cout << "stack" << endl;
		else if (IsPQ)
			cout << "priority queue" << endl;
		else
			cout << "impossible" << endl;
	}
	return 0;
}