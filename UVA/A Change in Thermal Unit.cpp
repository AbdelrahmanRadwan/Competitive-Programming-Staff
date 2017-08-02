#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	int testcases;
	float c,d,final_temperature;
	cin>>testcases;
	for(int i=1;i<=testcases;i++)
	{
		cin>>c>>d;
	c=((c*9)/5)+32;
	final_temperature=c+d;
	final_temperature=((final_temperature-32)*5)/9;
	cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<final_temperature<<endl;
	}
return 0;
}
