#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	int testcases, max=0,counter = 0,size=0;
	char candy[101],letter,best_letter;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		max = 0;
		cin >> candy;
		size=strlen(candy);
		for (int j = 0; j <size; j++)
		{
			counter = 0;
			for (int k = 0; k < size; k++)
			{
			
				if (candy[j] == candy[k])
				{
					counter++;
					letter = candy[j];
				}
			}
			if (counter > max)
			{
				max = counter;
				best_letter = letter;
			}
			if (counter == max)
			{
				if (letter < best_letter)
				{
					best_letter = letter;
				}
			}
		}
		cout << max <<" "<< best_letter << endl;
	}
	return 0;
}