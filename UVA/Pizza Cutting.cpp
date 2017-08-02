#include<iostream>
using namespace std;
int main()
{
	long long n,sum;
	while(cin>>n)
	{
		sum=1;
		if(n<0)
		{
			break;
		}
		else
		{
			for(int i=1;i<=n;i++)
			{
			sum+=i;
			}
		cout<<sum<<endl;
		}	
	}
return 0;
}