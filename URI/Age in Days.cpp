#include<iostream>
using namespace std;
int main ()
{
	int age,year,month;
	while(cin>>age)
	{
		year=age/365;
		age%=365;
		month=age/30;
		age%=30;
		cout<<year<<" ano(s)"<<endl;
		cout<<month<<" mes(es)"<<endl;
		cout<<age<<" dia(s)"<<endl;
	}
	return 0;
}