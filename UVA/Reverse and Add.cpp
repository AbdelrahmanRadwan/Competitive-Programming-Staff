#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<string.h>
using namespace std;
bool IsPallindrom(string s)
{
	for (unsigned int i = 0; i < s.size()/2; i++)
	{
		if (s[i] != s[s.size()-1 - i])
			return false;
	}
	return true;
}
string modify(string s1)
{
	string result="\0", s2 = s1;
	int add=0, remainder = 0;
	reverse(s2.begin(), s2.end());
	for ( int i = s1.size() - 1; i >= 0; i--)
	{
		add = (   ( (s1[i] - '0') + (s2[i] - '0') ) +remainder );
		remainder = add / 10;
		add %= 10;
		result += ( add+ '0' );
	}
	if (remainder)
		result += (remainder+'0');
	 reverse(result.begin(), result.end());
	 return result;
}
int main()
{
	string word;
	int testcases,counter=0;
	cin >> testcases;
	while (testcases--)
	{
	counter = 0;
	cin >> word;
	while (!IsPallindrom(word))
	{
		word = modify(word);
		counter++;
	}
	cout << counter << " " << word << endl;
	}
	return 0;
}