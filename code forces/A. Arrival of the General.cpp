#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int change(int arr[],int size,int &max,int mini)
{
	int counter=0;
	for(int i=mini;i<size-1;i++)
	{
		swap(arr[i],arr[i+1]);
		counter++;
	}
	if(mini<max)
	{
	max--;
	}
	for(int i=max;i>0;i--)
	{
		swap(arr[i],arr[i-1]);
		counter++;
	}
	return counter;
}
int main ()
{
	int *arr,size,max,mini,maxindex,miniindex;

	while(cin>>size)
	{
		max=INT_MIN ;
		mini=INT_MAX;
		arr=new int[size];
		for(int i=0;i<size;i++)
		{
		cin>>arr[i];
		if(arr[i]<=mini)
		{
		mini=arr[i];
		miniindex=i;
		}
		if(arr[i]>max)
		{
		max=arr[i];
		maxindex=i;
		}
		}
		cout<<change(arr,size,maxindex,miniindex)<<endl;
	}
return 0;
}