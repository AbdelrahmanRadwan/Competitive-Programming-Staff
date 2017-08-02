#include<iostream>
#include<string>
#include<string.h>
#include<stack>
#include<list>
#include<cstring>
using namespace std;
int main()
{
	string input, temp;
	list<char>output;
	list<char>::iterator it;
	while (cin >> input)
	{
		output.clear();
		temp = "\0";
		it = output.end();
		for (unsigned int i = 0; i < input.size(); i++)
		{
			if (input[i] == '[')
				it = output.begin();
			else if (input[i] == ']')
				it = output.end();
			else
				output.insert(it, input[i]);
		}
		for (it = output.begin(); it != output.end(); it++)
			cout << *it;
		cout << endl;
	}
	return 0;
}