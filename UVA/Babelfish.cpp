#include<string>
#include<map>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	string input, english, foreign;
	map<string, string>M;
	int i = 0;
	while (getline(cin, input))
	{
		i = 0;
		foreign = english = "\0";
		if (input == "")
			break;
		for (i; i < input.size(); i++)
		{
			if (input[i] == ' ')
				break;
			english += input[i];
		}
		i++;
		for (i; i < input.size(); i++)
			foreign += input[i];
		M[foreign] = english;
	}
	while (getline(cin,input))
	{
		if (M[input] == "")
			cout << "eh" << endl;
		else
		cout << M[input] << endl;
	}
	return 0;
}