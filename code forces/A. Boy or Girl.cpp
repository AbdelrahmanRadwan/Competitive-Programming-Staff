#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
	string word;
	int size,counter;
	while (cin >> word)
	{
		counter = 0;
		size = word.size();
		for (int i = 0; i < size-1; i++)
		{
	
			for (int j = i+1; j < size; j++)
			{
				if (word[i] == '.')
				{
					break;
				}
				if (word[i] == word[j])
				{
					word[j] = '.';
					counter ++ ;
				}
			}
		}
		size = size - counter;
		if (size % 2 == 0)
		{
			cout << "CHAT WITH HER!" << endl;
		}
		else
		{
			cout << "IGNORE HIM!" << endl;
		}
	}
	return 0;
}