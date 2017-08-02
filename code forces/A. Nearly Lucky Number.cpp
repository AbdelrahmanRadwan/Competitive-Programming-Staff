#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	string number;
	int counter,size;
	while (cin >> number)
	{
		counter = 0;
		size = number.size();
		for (int i = 0; i < size; i++)
		{
			if (number[i] == '4' || number[i] == '7')
			{
				counter++;
			}
		}
		if (counter == 4 || counter == 7)
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