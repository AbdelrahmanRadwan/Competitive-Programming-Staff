#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word;
	int testcases;
	cin >> testcases;
	for (int i = 0;i<testcases;i++)
	{
		cin >> word;
		if (word[0] == word[2])
		{
			cout << (word[0]-'0')*(word[2]-'0') << endl;
		}
		else if (word[1] >= 'A' &&  word[1] <= 'Z')
		{
			cout << (word[2] - '0') - (word[0] - '0') << endl;
		}
		else if (word[1] >= 'a' &&  word[1] <= 'z')
		{
			cout << (word[2] - '0') + (word[0] - '0') << endl;
		}
	}
	return 0;
}