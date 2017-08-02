#include<iostream>
#include<algorithm>
using namespace std;
void sort(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
	for(int j=i+1;j<size;j++)
	{
	if(arr[j]>arr[i])
	{
	swap(arr[i],arr[j]);
	}
	}
	}
}
int main ()
{
	int *arr,size,sum,sum2,counter;;
	while(cin>>size)
	{
	arr=new int[size];
	sum=0;
	sum2=0;
	counter=0;
	for(int i=0;i<size;i++)
	{
	cin>>arr[i];
	sum+=arr[i];
	}
	sort(arr,size);
	for(int i=0;i<size;i++)
	{
		sum2+=arr[i];
		counter++;
		if(sum2>sum-sum2)
		{
			break;
		}
	}
	cout<<counter<<endl;
	}
return 0;
}