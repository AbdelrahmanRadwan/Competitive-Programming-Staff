#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b;
	while (cin>>a>>b)
	{
		a *= 3.5;
		b *= 7.5; 
		cout << "MEDIA = "<<fixed<<setprecision(5)<<(a+b)/11<< endl;
	}
	return 0;
}