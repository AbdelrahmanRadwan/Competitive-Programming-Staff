#include<iostream>
using namespace std;
int main ()
{
	int x,y,z,testcases;
	cin>>testcases;
	for(int i=1;i<=testcases;i++)
	{
	cin>>x>>y>>z;
	if(x>y&&z<y||x<y&&z>y)
	{
	cout<<"Case "<<i<<": "<<y<<endl;	
	}
	else if(x>z&&y<z||x<z&&y>z)
	{
	cout<<"Case "<<i<<": "<<z<<endl;	
	}
	else
	{
	cout<<"Case "<<i<<": "<<x<<endl;	
	}
	}
	return 0; 
}