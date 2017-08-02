#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<cstring>
using namespace std;
bool FirstCheck(char diet_plan[], int size1, char breakfast[], int size2)
{
	bool catcher = false;;
	bool a=false;
	for (int i = 0;i<size2;i++)
	{
		for (int j = 0; j < size1; j++)
		{
			if (breakfast[i] == diet_plan[j])
			{
				catcher = true;
				break;
			}
		}
		if (catcher == false)
		{
			a = true;
			break;
		}
		catcher = false;
	}
	return a;
}
void LastCheck(bool a, char diet_plan[], int size1, char breakfast[], int size2, char lunch[])
{
	if (a == true)
	{
		cout << "CHEATER" << endl;
	}
	else
	{
		int k = 0;
		
		for (int i = 0; i<size1; i++)
		{
			bool catcher = false;
			for (int j = 0; j < size2; j++)
			{
				if (breakfast[j] == diet_plan[i])
				{
					catcher = true;
					break;
				}
			}
			if (catcher == false)
			{
				lunch[k] = diet_plan[i];
				lunch[k + 1] = '\0';
				k++;
			}
		}
		cout << lunch << endl;
	}
}
int main()
{
	char diet_plan[100],breakfast[100],lunch[100];
	int testcases,size1,size2;
	cin >> testcases;
	cin.ignore();
	for (int i = 0; i < testcases; i++)
	{
		gets(diet_plan);
		gets(breakfast);
		gets(lunch);
		size1 = strlen(diet_plan);
		sort(diet_plan, diet_plan + size1);
		strcat(breakfast, lunch);
		size2 = strlen(breakfast);
		lunch[0] = '\0';
		sort(breakfast,breakfast+size2);
		LastCheck(FirstCheck(diet_plan, size1, breakfast, size2), diet_plan, size1, breakfast, size2, lunch);
	}
	return 0;
}
