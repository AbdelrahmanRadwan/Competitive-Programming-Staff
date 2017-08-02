#include<iostream>
#include<string>
using namespace std;
int main ()
{

	int testcases;
	string number;
	cin>>testcases;
	for(int i=0;i<testcases;i++)
	{
	
		cin>>number;
		if(number.length()==5)
		{
		cout<< 3 <<endl;
		}
		else
		{
			if((number[0]=='t' && number[1]=='w') ||  (number[1]=='w' && number[2]=='o') || (number[0]=='t' && number[2]=='o'))
			{
			cout<< 2 <<endl;
			}
			else 
			{
			cout<< 1 <<endl;
			}
		}
	}
return 0;
}