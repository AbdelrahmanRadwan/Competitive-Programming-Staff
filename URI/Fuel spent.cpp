#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	int a,b;
	while(cin>>a>>b)
	{
		cout<<fixed<<setprecision(3)<<(a*b)/12.00<<endl;

	}



	return 0;
}