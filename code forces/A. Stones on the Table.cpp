#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
	string word;
	int size,counter;
	while (cin >> size>>word)
	{
		counter = 0;
		for (int i = 0; i < size-1; i++)
		{
			if (word[i] == word[i + 1])
			{
				counter++;
			}
		}
		cout << counter << endl;
	}
	return 0;
}