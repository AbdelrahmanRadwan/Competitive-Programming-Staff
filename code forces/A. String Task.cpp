#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
	string word, output = "\0";
	int size;
	while (cin>> word)
	{
		output = "\0";
		size = word.size();
		for (int i = 0; i < size; i++)
		{
			word[i] = tolower(word[i]);
			if (word[i] != 'a' && word[i] != 'o' && word[i] != 'y' && word[i] != 'i' && word[i] != 'u' && word[i] != 'e')
			{
				output+= '.';
				output+= word[i];
			}
		}
		cout << output << endl;
	}
	return 0;
}