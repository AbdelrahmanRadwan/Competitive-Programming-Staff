#include<iostream>
using namespace std;
int SizeFounder(int a,int b)
{
	int size;
	while(true)
	{
	if(a>b)
	{
		a-=b;
	}
	else if(a<b)
	{
		b-=a;
	}
	else
	{
	size=a;
	break;
	}
	}
	return size;
}
int main ()
{
	int a,b,testcases,size;
	cin>>testcases;
	for(int i=0;i<testcases;i++)
	{
		cin>>a>>b;
		size=SizeFounder(a,b);
	cout<<size<<" "<<((a/size)*(b/size))<<endl;
	}
return 0;
}