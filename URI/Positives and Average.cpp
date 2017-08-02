#include<iostream>
using namespace std;
int main ()
{
	float arr[6],sum=0,counter=0;
	for(int i=0;i<6;i++)
	{
		cin>>arr[i];
		if(arr[i]>0)
		{
			sum+=arr[i];
			counter++;
		}
	}
	cout<<counter<<" valores positivos"<<endl;
	cout<<sum/counter<<endl;
	return 0;
}