#include<iostream>
using namespace std;
int main ()
{
	int n,moves=0,counter=1;
long sum=0,*box,average;
	while(cin>>n)
	{
	if(n==0)
	{
	break;
	}
	else
	{
	box=new long [n];
	for(int i=0;i<n;i++)
	{
	cin>>box[i];
	sum+=box[i];
	}
	average=sum/n;
	for(int i=0;i<n;i++)
	{
		if(average>box[i])
		{
		moves+=(average-box[i]);
		}
	}
	cout<<"Set #"<<counter<<endl;
	cout<<"The minimum number of moves is "<<moves<<"."<<endl;
	cout<<endl;
	counter++;
	sum=0;
	moves=0;
	}
	}
return 0;
}