#include<iostream>
#include<string>
using namespace std;
int main ()
{
	int size,testcases,index;
	char **arr;
	cin>>testcases;
	for(int i=0;i<testcases;i++)
	{
		cin>>size;
		index=-1;
		arr=new char *[size];
		for(int j=0;j<size;j++)
		{
			arr[j]=new char[100];
		}
		for(int j=0;j<size;j++)
		{
			cin>>arr[j];
			if(isalpha(arr[j][0]))
			{
			index=j;
			}
		}
		if(index !=-1)
		{
	for(int i=index+1;i<size;i++)
	{
	cout<<arr[i]<<" ";
	}
	cout<<arr[index]<<" ";
	for(int i=0;i<index;i++)
	{
	cout<<arr[i]<<" ";
	}
	}
		else
	{
		for(int i=0;i<size;i++)
	{
	cout<<arr[i]<<" ";
	}	
	}
	cout<<endl;
	}
return 0;
}
