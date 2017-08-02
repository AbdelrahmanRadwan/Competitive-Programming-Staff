#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
int main ()
{
	string word1,word2;
	int size,to4,to7,result;
	while(cin>>word1>>word2)
	{
		to4=0;
		to7=0;
		result=0;
	size=word1.size();
	for(int i=0;i<size;i++)
	{
		if(word1[i]=='7' && word2[i]=='4')
		{
		to4++;
		}
		if(word1[i]=='4' &&word2[i]=='7')
		{
		to7++;
		}
	}
	result+=min(to7,to4);
	to4-=result;
	to7-=result;
	result+=to7;
	result+=to4;
	cout<<result<<endl;
	}
return 0;
}
