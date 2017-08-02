#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int n,m,counter;
	while(cin>>n>>m)
	{
		counter=1;
		while(counter<=m)
		{
		m-=counter;
		counter++;
		if(counter==n+1)
		{
		counter=1;
		}
		}
		cout<<m<<endl;
	}
return 0;
}