#include<string.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string upper, lower;
	string word;
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		cin >> word;
		upper = "\0";
		lower = "\0";
		for (unsigned int i = 0; i < word.size(); i++)
		{
			if (word[i] >= 'a' && word[i] <= 'z')
				lower += word[i];
			else
				upper += word[i];
		}
		cout << lower << " " << upper << endl;
	}
	return 0;
}