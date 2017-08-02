#include<iostream>
#include<string>
using namespace std;
int main()
{
	string temp,word;
	int size;
	while (cin >> temp)
	{
		word = "\0";
			size = temp.size();
		for (int i = 0; i < size - 2; i++)
		{
			if (temp[i] == 'W' &&  temp[i + 1] == 'U' &&  temp[i + 2] == 'B')
			{
				temp[i] = '.';
				temp[i+1] = '.';
				temp[i+2] = '.';
				i += 2;
			}
		}
		for (int i = 0; i < size-1; i++)
		{
			if (isalpha(temp[i]))
			{
				word += temp[i];
			}
			if (temp[i+1] == '.' && isalpha(temp[i]))
			{
				word += " ";
			}
		}
		if (isalpha(temp[size - 1]))
		{
			word += temp[size - 1];
		}
		cout << word << endl;
	}
	return 0;
}
