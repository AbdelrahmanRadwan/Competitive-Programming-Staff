#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string word;
	int size,testcases;
	cin>>testcases;
	for(int k=0;k<testcases;k++)
	{
		cin>>word;
	size=word.size();
	if(size<=10)
	{
	cout<<word<<endl;
	}
	else
	{
	cout<<word[0]<<size-2<<word[size-1]<<endl;
	}
	}
return 0;
}