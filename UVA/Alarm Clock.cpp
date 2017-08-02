#include<iostream>
using namespace std;
int main()
{
	int H1,M1,H2,M2,sum;
	while(cin>>H1>>M1>>H2>>M2)
	{	
		if(H1==0 && M1==0 && H2==0 && M2==0)
	{
	break;
	}
		else
		{
			if(H1==0)
			{
			H1=24;
			}
		if(H2==0)
			{
			H2=24;
			}
		if(M1>M2)
		{
		M2=M2+60;
		H2--;
		}
		if(H1>H2)
		{
		H2+=24;
		}
		}
		cout<<(H2-H1)*60+(M2-M1)<<endl;
	}
return 0;
}