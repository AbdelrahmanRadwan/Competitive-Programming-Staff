#include<iostream>
using namespace std;
int main()
{
	int testcases,arr[3];
	while(cin>>testcases)
	{
	for(int i=0;i<testcases;i++)
	{
		for(int j=0;j<3;j++)
		{
		cin>>arr[j];
		}
		if(arr[0]+arr[1]>arr[2] && arr[1]+arr[2]>arr[0] && arr[0]+arr[2]>arr[1])
		{
		cout<<"OK"<<endl;
		}
		else 
		{
		cout<<"Wrong!!"<<endl;
		}
	}
	}
return 0;
}
