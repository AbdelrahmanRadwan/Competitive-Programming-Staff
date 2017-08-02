#include<iostream>
using namespace std;
int main ()
{
	int x,counter=0;
	while(cin>>x)
	{
		if(x%2==0)
		{
		for(int i=x+1;i<=11+x;i+=2)
		{
			cout<<i<<endl;
		}
		}
		else 
		{
		for(int i=x;i<11+x;i+=2)
		{
			cout<<i<<endl;
		}
		}
	}
	return 0;
}