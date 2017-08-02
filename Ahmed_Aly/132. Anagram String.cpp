#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string word1,word2;
	int testcases,size1,size2,counter;
	cin>>testcases;
	for(int i=0;i<testcases;i++)
	{
		counter=0;
		cin>>word1>>word2;
		size1=word1.size();
		size2=word2.size();
		for(int j=0;j<size1;j++)
		{
			for(int jj=0;jj<size2;jj++)
		{
		if(word1[j]==word2[jj])
		{
			counter++;
			word2[jj]='.';
			break;
		}
		}
		}
		cout<<size1+size2-counter*2<<endl;
	}
return 0;
}