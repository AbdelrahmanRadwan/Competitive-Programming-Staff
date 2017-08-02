#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
	int x,y,sum,testcases;
	cin>>testcases;
	for(int j=0;j<testcases;j++)
	{
		cin>>x>>y;
		sum=0;
		if(y<x)
		{
			swap(x,y);
		}

		for(int i=x+1;i<y;i++)
		{
			if(i%2==1)
			{
				sum+=i;
			}
		}
		cout<<sum<<endl;
	}


	return 0;
}