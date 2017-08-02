#include<iostream>
using namespace std;
int main()
{
	int number1,number2,testcases;
	cin>>testcases;
	for(int i=0;i<testcases;i++)
	{
		cin>>number1>>number2;
		if(number1>number2)
		{
		cout<<">"<<endl;
		}
		else if(number1<number2)
		{
		cout<<"<"<<endl;
		}
		else
		{
		cout<<"="<<endl;
		}
	}
return 0;
}