#include<iostream>
#include<string>
using namespace std;
int main()
{
	string temp, word="hello";
	int size,j;
	while (cin >> temp)
	{
		j = 0;
		size = temp.size();
		for (int i = 0; i < size && j<5; i++)
		{
			if (temp[i] == word[j])
			{
				j++;
			}
		}
		if (j >= 5)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		
	}
	return 0;
}