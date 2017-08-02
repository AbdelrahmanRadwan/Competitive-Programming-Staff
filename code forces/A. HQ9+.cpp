#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
	string word;
	bool a;
	int size;
	while (getline(cin, word))
	{
		a = false;
		size = word.size();
		for (int i = 0; i < size; i++)
		{
			if (word[i] == 'H' || word[i] == 'Q' || word[i] == '9')
			{
				a = true;
				break;
			}
		}
		if (a == false)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
	return  0;
}