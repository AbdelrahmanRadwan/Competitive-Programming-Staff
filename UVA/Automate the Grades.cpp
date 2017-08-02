#include<iostream>
using namespace std;
int main ()
{
	int arr[7],testcases,sum2,max1,max2;
	float average,sum;
	cin>>testcases;
	for(int i=1;i<=testcases;i++)
	{	sum=0;
		sum2=0;
		max1=0;
		max2=0;
		for(int ii=0;ii<4;ii++)
		{
		cin>>arr[ii];
		sum+=arr[ii];
		}
		for(int ii=0;ii<3;ii++)
		{
		cin>>arr[ii];
		if(arr[ii]>=max1 && arr[ii]>=max2)
		{
			max2=max1;
		max1=arr[ii];
		}
		else if(arr[ii]>=max2 && arr[ii]<max1)
		{
		max2=arr[ii];
		}
		
		}
		sum2=max1+max2;
		average =( static_cast<float>(max1)+max2)/2;
		sum+=average;
		
		cout<<"Case "<<i<<": ";

		if(sum>=90)
		{
		cout<<"A"<<endl;
		}
		else if(sum<90 && sum>=80)
		{
		cout<<"B"<<endl;
		}
		else if(sum<80 && sum>=70)
		{
		cout<<"C"<<endl;
		}
		else if(sum<70 && sum>=60)
		{
		cout<<"D"<<endl;
		}
		else
		{
		cout<<"F"<<endl;
		}
	}
return 0;
}