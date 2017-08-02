#include<iostream>
using namespace std;
int main()
{
	const int size=10;
	int testcases,hight[size],counter1,counter2;
	cin>>testcases;
	for(int i=0;i<testcases;i++)
	{
		for(int j=0;j<size;j++)
		{
		cin>>hight[j];
		}
		counter1=0;
		counter2=0;
		for(int j=0;j<=size-2;j++)
		{
			for(int jj=j+1;jj<j+2;jj++)
			{
				if(hight[jj]>hight[j])
				{
				counter1++;
				}
				else if (hight[jj]<hight[j])
				{
				counter2++;
				}
			}
			}
		if(i==0)
		{
		cout<<"Lumberjacks:"<<endl;
		}
		if(counter1==size-1|| counter2==size-1)
		{
		cout<<"Ordered"<<endl;
		}
		else
		{
		cout<<"Unordered"<<endl;
		}
	}
return 0 ;
}
