#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main ()
{
	int n,*p,m,i=0,j=0,difference;
	 double minimum;
	while(cin>>n)
	{
		p=new int[n];
		for(int k=0;k<n;k++)
		{
		cin>>p[k];
		}
		cin>>m;
		minimum=10000000;
		for(int kk=0;kk<n;kk++)
		{
		for(int k=0;k<n;k++)
		{
			if(p[k]+p[kk]==m)
			{
				difference=abs(p[k]-p[kk]);
				if(minimum>=difference)
				{
				minimum = difference;
				i=p[kk];
				j=p[k];
			}
			}
		}
		}
		if(i>j)
		{
		swap(i,j);
		}
		cout<<"Peter should buy books whose prices are "<<i<<" and "<<j<<"."<<endl<<endl;
	}
return 0;
}