#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	string word;
	int size,counter0,counter1,max0,max2;

	while (cin >> word)
	{
		counter0 = 0;
		counter1 = 0;
		size = word.size();
		for (int i = 0; i < size; i++)
		{
			if (word[i] == '0')
			{
				counter0++;
				counter1 = 0;
				if (counter0 >= 7)
				{
					break;
				}
			}
			else if (word[i] = '1')
			{
				counter1++;
				counter0= 0;
				if (counter1 >= 7)
				{
					break;
				}

			}

		}
		if (counter0 >= 7 || counter1 >= 7)
		{
			cout << "YES " << endl;
		}
		else
		{
			cout << "NO" << endl;
		}

	}
	return 0;
}