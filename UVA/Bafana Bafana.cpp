#include<iostream>
using namespace std;
int main ()
{
	int N,P,K,position;
	int testcases;
	cin>>testcases;
	for(int i=1;i<=testcases;i++)
	{
	cin>>N>>K>>P;
	position=K+P;
	while(position>N)
	{
	position-=N;
	}
	cout<<"Case "<<i<<": "<<position<<endl;
	}
	return 0;
}
