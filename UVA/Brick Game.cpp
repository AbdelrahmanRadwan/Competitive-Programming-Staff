#include<iostream>
using namespace std ;
int main ()
{
	const int size=11;
	int n,age[size],testcases;
	cin>>testcases;
	for(int i=1;i<=testcases;i++)
	{
		cin>>n;
		for(int j=0;j<n;j++)
		{
		cin>>age[j];
		}
		for(int k=0;k<n;k++)
		{
		for(int kk=0;kk<n;kk++)
		{
		if(age[k]>age[kk])
		{
		swap(age[k],age[kk]);
		}
		}
		}
		cout<<"Case "<<i<<": "<<age[(n-1)/2]<<endl;	
	}
	return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	int testcases,counter,n;
	double sum,*grade;
	cin>>testcases;
		
	for(int i=1;i<=testcases;i++)
	{	
		cin>>n;
		sum=0;
		counter=0;
		grade=new double[n];
		for(int j=0;j<n;j++)
		{
		cin>>grade[j];
		sum+=grade[j];
		}
		for(int j=0;j<n;j++)
		{
		if(grade[j]>(sum/n))
		{
		counter++;
		}
		}
		cout<<fixed<<setprecision(3)<<((double)counter/n)*100<<"%"<<endl;
	}
return 0;
}
