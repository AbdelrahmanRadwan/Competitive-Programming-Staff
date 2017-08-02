#include<iostream>
using namespace std;
int main ()
{
	int n,sum1,sum2,sum;
	while(cin>>n)
	{

		sum1=1;
		sum2=2;
		if(n==0)
		{
		break;
		}
		else if(n==1)
		{
		sum2=1;
		}
		else
		{
	for(int i=2;i<n;i++)
	{
		sum=sum1+sum2;
		sum1=sum2;
		sum2=sum;
	}
		
		}
		cout<<sum2<<endl;
	}
return 0;
}
	#include<iostream>
using namespace std;
void main() 
{ 
int num,n,rem=0;
int ans=0; 
 
cin>>n; 
while(n!=0) 
{ 
rem=n%10; 
n=n/10; 
ans=ans*10+rem; 
} 
cout<<ans<<endl; 
}