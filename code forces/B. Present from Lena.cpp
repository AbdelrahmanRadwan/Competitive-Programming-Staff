#include<iostream>
using namespace std;
void up(int n)
{
for(int i=0;i<=n;i++)
	{
		for(int j=i;j<n;j++)
		{
		cout<<"  ";
		}
		for(int j=0;j<=i;j++)
		{
		cout<<j;
		if(j !=i)
		{
		cout<<" ";
		}
		}
		if(i>0)
		{
		for(int j=i-1;j>=0;j--)
		{
		cout<<" "<<j;
		}
		}
		cout<<endl;
	}
}
void down(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
		cout<<"  ";
		}
		for(int j=0;j<n-i;j++)
		{
		cout<<j;
		if(j!=n-i-1)
		{
		cout<<" ";
		}
		}
		for(int j=n-i-2;j>=0;j--)
		{
		cout<<" "<<j;
		}
	cout<<endl;
	}

}
int main ()
{
	int n;
	while(cin>>n)
	{
		up(n);
		down(n);
	}
return 0;
}
