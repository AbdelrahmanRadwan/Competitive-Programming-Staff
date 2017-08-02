#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int temp, Max, size, counter;
	while (cin >> size && size)
	{
		map<vector<int>, int>M;
		Max = -1;
		counter = 0;
		while (size--)
		{
			vector<int>T;
			for (int i = 0; i < 5; i++)
				cin >> temp, T.push_back(temp);
			sort(T.begin(), T.end());
			M[T]++;
			Max = max(Max, M[T]);
		}
		for (map<vector<int>, int>::iterator it = M.begin(); it != M.end(); it++)
			if (it->second == Max)counter++;
		cout << counter*Max << endl;
	}
	return 0;
}