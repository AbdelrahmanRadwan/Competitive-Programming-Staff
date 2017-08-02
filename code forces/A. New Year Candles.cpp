#include<iostream>
using namespace std;
int main ()
{
	int a,b,result,carry;
	while(cin>>a>>b)
	{
		result=a;
		while(a/b!=0)
		{
		carry=a%b;
		a/=b;
		result+=a;
		a+=carry;
		}
	cout<<result<<endl;
	}
return 0;
}