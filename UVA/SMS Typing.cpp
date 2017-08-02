#include<iostream>
#include<string>
using namespace std;
int main ()
{
	int testcases,y,counter;
	string text;
	cin>>testcases;
	for(int i=0;i<=testcases+1;i++)
	{
		getline(cin,text);
		y=text.size();
		counter=0;
		if(y==0)
		{
			continue;
		}
		for(int i=0 ; i<y ; i++)
		{
			if(text[i]=='a' || text[i]=='d' || text[i]=='g' || text[i]=='j' || text[i]=='m' || text[i]=='p' || text[i]=='t' || text[i]=='w' || text[i]==' ' )
			{
			counter++;
			}
			else if(text[i]=='b' || text[i]=='e' || text[i]=='h' || text[i]=='k' || text[i]=='n' || text[i]=='q' || text[i]=='u' || text[i]=='x' )
			{
			counter+=2;
			}
			else if(text[i]=='s' || text[i]=='z' )
			{
			counter+=4;
			}
			else
			{
			counter+=3;
			}
		}
	cout<<"Case "<<"#"<<i<<": "<<counter<<endl;
		}
	return 0;
	}