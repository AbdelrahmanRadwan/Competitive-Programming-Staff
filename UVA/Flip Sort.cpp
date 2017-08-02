#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
	int n,*arr,counter;
	while(cin>>n)
	{
		arr= new int [n];
		counter=0;
		for(int j=0;j<n;j++)
		{
		cin>>arr[j];
		}
		for(int j=0;j<n-1;j++)
		{
			for(int jj=j+1;jj<n;jj++)
			{
				if(arr[jj]<arr[j])
				{
				counter++;
				}
			}
		}
			cout<<"Minimum exchange operations : "<<counter<<endl;
	}
return 0;
}
