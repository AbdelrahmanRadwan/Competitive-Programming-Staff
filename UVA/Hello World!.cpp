#include<iostream>
using namespace std;
int main ()
{
	int N,i,j,k=0;
	while(cin>>N)
	{
	if(N<0)
	{
		break;
	}
	i=1,j=0;
	while(i<N)
	{
	i=i*2;
	j++;
	}
	k++;
	cout<<"Case "<<k<<": "<<j<<endl;
	}
	
return 0;
}