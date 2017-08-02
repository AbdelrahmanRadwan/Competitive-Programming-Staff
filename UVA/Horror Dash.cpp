#include<iostream>
using namespace std;
int main ()
{

	int testcases,runners,max;
	long *arr;
	cin>>testcases;
	for(int i=1;i<=testcases;i++)
	{
		cin>>runners;
		arr=new long [runners];
		max=0;
		for(int j=0;j<runners;j++)
		{
			cin>>arr[j];
			if(arr[j]>max)
			{
			max=arr[j];
			}
		}
		cout<<"Case "<<i<<": "<<max<<endl;
	}
	return 0;
}