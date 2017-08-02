#include<iostream>
using namespace std ;
int main ()
{
int testcases,N,high,high_jump=0,low_jump=0,current=0,previous=0 ;
cin>>testcases;
for(int i=1;i<=testcases;i++)
{
	cin>>N;
	for(int j=1;j<=N;j++)
	{
		cin>>high;
		current=high;
		if(previous<current )
		{
		high_jump++;
		}
		else if (previous>current)
		{
		low_jump++;
		}
		else 
		{
		continue;
		}
		previous=current;
	}
		cout<<"Case "<<i<<""<<": "<<high_jump-1<<" "<<low_jump<<endl;
	high_jump=0;
	low_jump=0;
	current=0;
	previous=0; 
}

return 0;
}