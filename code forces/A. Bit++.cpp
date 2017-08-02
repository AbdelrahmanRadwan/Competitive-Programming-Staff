#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string word;
	int number,testcases;
	while(cin>>testcases)
	{
	number=0;
	for(int k=0;k<testcases;k++)
	{
		cin>>word;
		if(word[1]=='+')
		{
		number++;
		}
		else
		{
		number--;
		}
	}
	cout<<number<<endl;
	}
return 0;
}