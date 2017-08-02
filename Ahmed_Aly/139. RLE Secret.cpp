#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string word;
	int testcases,counter,size;
	cin>>testcases;
	for(int ii=0;ii<testcases;ii++)
	{
		cin>>word;
		size=word.size();
		for(int i=0;i<size;i++)
		{
			counter=1;
		for(int j=i+1;j<size;j++)
		{
			if(word[i]==word[j])
			{
			counter++;
			}
			else
			{
			break;
			}
		}
		cout<<word[i]<<counter;
		i+=counter-1;
		}
		cout<<endl;
	}
return 0;
}