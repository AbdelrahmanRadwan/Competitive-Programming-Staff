#include<iostream>
using namespace std;
int main ()
{
	int n,m,testcases,difference,steps,counter;
	cin>>testcases;
	for(int i=1;i<=testcases;i++)
	{
		steps=0;
		cin>>n>>m;
		difference=m-n;
		counter=1;
		while(difference > counter)
		{
			difference-=counter*2;
			steps+=2;
			counter++;
		}
		if(difference >0)
		{
		steps++;
		}

		cout<<steps<<endl;
	}
return 0;
}