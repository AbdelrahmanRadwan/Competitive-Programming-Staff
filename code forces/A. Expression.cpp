#include<iostream>
#include<algorithm>
#define Max(a,b,c,d,e) max(max(a,b),max(max(c,d),e))
using namespace std;
int main ()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
	cout<<Max(a+(b*c),a*(b+c),a*b*c,(a+b)*c,a+b+c)<<endl;
	}
return 0;
}