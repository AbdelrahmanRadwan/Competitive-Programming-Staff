#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
	int arr[10],testcases;
	cin>>testcases;
	for(int i=0;i<testcases;i++)
	{
		for(int j=0;j<10;j++)
		{
			cin>>arr[j];
		}
		sort(arr,arr+10);
		cout<<arr[1]<<endl;
	}
	return 0;
}