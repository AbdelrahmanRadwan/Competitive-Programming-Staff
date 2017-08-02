#include<iostream>
using namespace std;
int GCD(int a,int b)
{
	while(a!=b)
	{
	if(a>b)
	{
	a-=b;
	}
	else if(b>a)
	{
	b-=a;
	}
	}
	return a;
	}
int main ()
{
	int a,b,c,turn,win=0;
	while(cin>>a>>b>>c)
	{
		turn =1;
		while(c>0)
		{
		if(turn%2==1)
		{
			win=0;
			c-=GCD(a,c);
		}
		else
		{
		win=1;
		c-=GCD(b,c);
		}
		turn++;
		}
		cout<<win<<endl;
	}
return 0;
}