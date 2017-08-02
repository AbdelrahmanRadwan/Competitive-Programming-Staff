#include<iostream>
using namespace std;
int main ()
{
	int size,arr[30][2],counter;
	while(cin>>size)
	{
		counter=0;
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<2;j++)
		{
		cin>>arr[i][j];
		}
		}


		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
		{
		if(arr[i][0]==arr[j][1])
		{
		counter++;
		}
		}
		}
		cout<<counter<<endl;



	}
return 0;
}