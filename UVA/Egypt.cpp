#include<iostream>
using namespace std;
int main ()
{
	int line1,line2,line3;
	while(cin>>line1>>line2>>line3)
	{
	if(line1==0 && line2==0 && line3==0)
	{
	break;
	}
	else
	{
	if(line1*line1==line2*line2+line3*line3||line2*line2==line1*line1+line3*line3||line3*line3==line2*line2+line1*line1)
	{
	cout<<"right"<<endl;
	}
	else
	{
	cout<<"wrong"<<endl;
	}
	}
	}
	return 0;
}