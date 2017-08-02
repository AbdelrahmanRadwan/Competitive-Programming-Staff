#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	int n;
	string word;
	while (cin >> n >> word)
	{
		if (n == 8)
		{
			cout << "vaporeon" << endl;
		}
		else if (n == 6)
		{
			cout << "espeon" << endl;
		}
		else
		{
			if (word[0] == 'f' || (word[1] == 'l' && word[0] == 'f') || (word[3] == 'r' && word[0] == 'f') || (word[3] == 'r' && word[1] == 'l') || (word[2] == 'a' && word[0] == 'f') || (word[2] == 'a' && word[1] == 'l' && word[0] == 'f') || (word[2] == 'a' && word[1] == 'l' && word[3] == 'r') || (word[2] == 'a' && word[3] == 'r'))
			{
				cout << "flareon" << endl;
			}
			else if (word[0] == 'j' || word[1] == 'o' || word[3] == 't' || (word[2] == 'l' && word[0] == 'j') || (word[2] == 'l' && word[1] == 'o') || (word[2] == 'l' && word[3] == 't'))
			{
				cout << "jolteon" << endl;
			}
			else if (word[0] == 's' || word[1] == 'y' || word[3] == 'v' || (word[2] == 'l' && word[0] == 's') || (word[2] == 'l' && word[1] == 'y') || (word[2] == 'l' && word[3] == 'v'))
			{
				cout << "sylveon" << endl;
			}
			else if (word[0] == 'l' || word[1] == 'e' || word[3] == 'f' || (word[2] == 'a' && word[0] == 'l') || (word[2] == 'a' && word[1] == 'e') || (word[2] == 'a' && word[3] == 'f'))
			{
				cout << "leafeon" << endl;
			}
			else if (word[0] == 'g' || (word[1] == 'l' && word[0] == 'g') || (word[1] == 'l' && word[3] == 'c') || word[3] == 'c' || (word[2] == 'a' && word[0] == 'g') || (word[2] == 'a' && word[1] == 'l' && word[0] == 'g') || (word[2] == 'a' && word[1] == 'l' && word[0] == 'c') || (word[2] == 'a' && word[3] == 'c'))
			{
				cout << "glaceon" << endl;
			}
			else
			{
				cout << "umbreon" << endl;
			}
		}
	}
	return 0;
}