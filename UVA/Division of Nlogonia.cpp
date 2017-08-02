#include<iostream>
using namespace std ;
int main ()
{
	int N,M,X,Y;
	int testcases;
	while(cin>>testcases)
	{
		cin>>N>>M;
	for(int i=0;i<testcases;i++)
	{
		cin>>X>>Y;
		if(X>N && Y>M)
		{
		cout<<"NE"<<endl;
		}
	
		else if(X<N && Y>M)
		{
		cout<<"NO"<<endl;
		}
		else if(X>N && Y<M)
		{
		cout<<"SE"<<endl;
		}else if(X<N && Y<M)
		{
		cout<<"SO"<<endl;
		}
		else
		{
		cout<<"divisa"<<endl;
		}
	}
	}
return 0;
}