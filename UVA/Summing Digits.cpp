#include<iostream>
using namespace std;
int main ()
{
	long m,sum;
	int remainder;
	while(cin>>m)
	{
		sum=0;
		if(m==0)
		{
		break;
		}
		else
		{
			while(m!=0)
			{
			remainder=m%10;
			sum+=remainder;
			m=m/10;
			}
			while(sum/10 !=0)
			{
			m=sum;
			sum=0;
			while(m!=0)
			{
				remainder=m%10;
				sum+=remainder;
				m=m/10;
			}
			}
		}
			cout<<sum<<endl;
		}
return 0;
}