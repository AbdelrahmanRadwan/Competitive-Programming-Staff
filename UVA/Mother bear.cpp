#include<iostream>
#include<string>
using namespace std;
int main()
{
	string text1,text2;
	int counter,size;
	while(getline(cin,text1))
	{
		counter=0;
		text2="\0";
	if(text1=="DONE")
	{
	break;
	}
	size=text1.size();
	for(int i=0;i<size;i++)
	{
	if(isalpha(text1[i]))
	{
		text2+=text1[i];
	}
	}
	size=text2.size();
	for(int i=0;i<size;i++)
	{
		text2[i]=tolower(text2[i]);
	}
	for(int i=0;i<size/2;i++)
	{
		if(text2[i]==text2[size-1-i])
		{
		counter++;
		}
		else
		{
		break;
		}
	}
	if(counter==size/2)
	{
	cout<<"You won't be eaten!"<<endl;
	}
	else
	{
	cout<<"Uh oh.."<<endl;
	}
	}
	return 0;
}
	