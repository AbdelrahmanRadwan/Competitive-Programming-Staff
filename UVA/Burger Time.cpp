#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	long size,i, minimum;
	string word;
	while (cin >> size && size)
	{
		cin >> word;
		i = 0, minimum = 200000000;
		for (; i < size; i++)
		{
			if (word[i] == 'Z')
			{
				minimum = 0;
				break;
			}
			if (word[i] == 'R' || word[i]=='D')
			for (int j = i + 1; j < size; j++)
			{
				if (word[j] == word[i])
				{
					i = j-1;
					break;
				}
				if (word[j] != '.')
				{
					if (j - i < minimum)minimum = j - i;
					i = j - 1;
					break;
				}
			}
		}
		cout << minimum << endl;
	}
	return 0;
}
