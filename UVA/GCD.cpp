#include<iostream>
using namespace std;
int gcd (int x,int y);
int main ()
{
	int n,sum;
	while(cin>>n)
	{
		sum=0;
		if(n==0)
		{
		break;
		}
		else
		{
			for(int i=1;i<n;i++)
			{
			for(int j=i+1;j<=n;j++)
			{
			sum+=gcd(j,i);
			}
			}
		}
			cout<<sum<<endl;			
	}
return 0;
}
int gcd (int x,int y)
{
	int remainder=x%y;
while(remainder !=0)
	{
		x=y;
		y=remainder;
		remainder=x%y;
	}
		return y;
}
