#include<iostream>
using namespace std;
int main()
{
	int n,testcases,result;
	cin>>testcases;
	for(int i=1;i<=testcases;i++)
	{
	cin>>n;
	result=((((((n*567)/9)+7492)*235)/47)-498)%100;
	result=result/10;
	if(result<0)
	{
	cout<<-1*result<<endl;
	}
	else
	{
	cout<<result<<endl;
	}
	}
	return 0;
}