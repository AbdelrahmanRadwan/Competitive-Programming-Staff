#include<iostream>
using namespace std;
int main ()
{
	int N,Number_of_squares=0;
	while(cin>>N)
	{
		if(N==0)
		{
		break;
		}
	for(int i=1;i<=N;i++)
	{
	Number_of_squares=Number_of_squares+i*i;
	}
	cout<<Number_of_squares<<endl;
	Number_of_squares=0;
	}
return 0;
}
