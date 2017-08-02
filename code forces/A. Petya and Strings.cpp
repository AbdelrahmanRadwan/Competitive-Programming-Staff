#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	string word1, word2;
	int size,counter;
	while (cin >> word1 >> word2)
	{
		counter = 0;
		size = word1.size();
		for (int i = 0; i<size; i++)
		{
			word1[i] = tolower(word1[i]);
			word2[i] = tolower(word2[i]);
			if (word1[i] == word2[i])
			{
				counter++;
			}
			else if (word1[i] > word2[i])
			{
				cout << "1" << endl;
				break;
			}
			else
			{
				cout << "-1" << endl;
				break;
			}
		}
		if (counter == size)
		{
			cout << "0" << endl;
		}
	}
	return 0;
}