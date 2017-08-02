#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
#include<string.h>
using namespace std;
int main ()
{
	double size,moves,stand,counter;
	string word;
	while(cin>>size>>word)
	{
		stand=0;
		counter=0;
		for(double i=0;i<size;i++)
		{
			if(word[i]=='X')
			{
			stand++;
			}
		}
		moves=abs(stand -(size/2));
	if(stand > size/2)
	{
		for(int i=0;i<size;i++)
		{
			if(counter==moves)
			{
			break;
			}
			if(word[i]=='X')
			{
			word[i]='x';
			counter++;
			}
		}
	}
	else if(stand<size/2)
	{
	for(int i=0;i<size;i++)
		{
			if(counter==moves)
			{
			break;
			}
			if(word[i]=='x')
			{
			word[i]='X';
			counter++;
			}
		}
	}
cout<<moves<<endl<<word<<endl;
	}
return 0;
}