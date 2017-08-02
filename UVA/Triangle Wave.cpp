#include<iostream>
using namespace std;
int main()
{
	int testcases,m,n;
	cin>>testcases;
	for(int i=1;i<=testcases;i++)
	{
		cin>>m>>n;
		for(int j=1;j<=n;j++)
		{
		for(int jj=1;jj<=m;jj++)
		{
		for(int jjj=1;jjj<=jj;jjj++)
		{
		cout<<jj;
		}
		cout<<endl;
		}
		
		int temp=m-1;
		for(int jj=1;jj<=m-1;jj++)
		{
		for(int jjj=m-1;jjj>=jj;jjj--)
		{
		cout<<temp;
		}
		cout<<endl;
		temp--;
		}
		if(i==testcases && j==n )
		{
			break;
		}
		else
		{
		cout<<endl;
		}
		}
		}
	return 0;
}