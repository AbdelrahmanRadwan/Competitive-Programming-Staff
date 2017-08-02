#include<iostream>
using namespace std;
int main ()
{
	int testcases,n,x,y,*arr;
	cin>>testcases;
	for(int i=0;i<testcases;i++)
	{
		cin>>n>>x>>y;
		arr=new int [n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		if(arr[0]==x && arr[n-1]==y)
		{
			cout<<"BOTH"<<endl;
		}
		else if(arr[0]==x && arr[n-1]!=y)
		{
			cout<<"EASY"<<endl;
		}
		else if(arr[0]!=x && arr[n-1]==y)
		{
			cout<<"HARD"<<endl;
		}
		else
		{
			cout<<"OKAY"<<endl;
		}
	}
		return 0;
}