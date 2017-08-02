#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
using namespace std;
int main()
{
	string word, reference = "‘1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	while (getline(cin,word))
	{
		for (unsigned int i = 0; i < word.size(); i++)
		{
			if (word[i] == ' ')
				cout << " ";
			else
			cout << reference[reference.find(word[i]) - 1];
		}
		cout << endl;
	}
	return 0;
}