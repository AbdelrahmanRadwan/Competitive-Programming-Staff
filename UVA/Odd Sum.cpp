#include<iostream>
using namespace std;
int main()
{
int a,b,testcases,sum=0;
cin>>testcases;
for(int i=1;i<=testcases;i++)
{
	cin>>a>>b;
	while(a<=b)
	{
	if(a%2!=0)
	{
	sum=sum+a;
	}
	a++;
	}
cout<<"Case "<<i<<": "<<sum<<endl;
sum=0;
}
return 0;
}