#include<iostream>
#include<string>
using namespace std;
bool lucky(string word)
{
	bool a = true;
	int n = word.size();
	for (int i = 0;i<n; i++)
	{
		if (word[i] != '4' && word[i] != '7')
		{
			a = false;
			break;
		}
	}
	return a;
}
bool division(int number)
{
	bool a=false;
	if (number % 4 == 0 || number % 7 == 0 || number % 47 == 0 || number % 74 == 0)
	{
		a = true;
	}
	return a;
}
bool division(string word)
{
	int number = 0,size=word.size();
	for (int i = 0;i<size; i++)
	{
		number = (number*10) + (word[i] - '0');
	}
	return division(number);
}
int main()
{
	string word;
	bool LUCKY, DIVISION;
	while (cin >> word)
	{
		DIVISION = division(word);
		LUCKY = lucky(word);
		if (DIVISION == true || LUCKY == true)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}