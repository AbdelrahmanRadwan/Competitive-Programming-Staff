#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main ()
{
	double a,b,c;
	while(cin>>a>>b>>c)
	{
		if(a==0 || ((b*b)-(4*a*c))<0)
		{
			cout<<"Impossivel calcular"<<endl;
		}
		else 
		{
			cout<<"R1 = "<<fixed<<setprecision(5)<<(-b+sqrt(b*b-4*a*c))/(2*a)<<endl;
			cout<<"R2 = "<<fixed<<setprecision(5)<<(-b-sqrt(b*b-4*a*c))/(2*a)<<endl;
		}
	}
	return 0;
}