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