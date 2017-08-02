#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word;
	int size;
	while (cin >> word)
	{
		size = word.size();
		word[0] = toupper(word[0]);
		cout << word << endl;
	}

	return 0;
}