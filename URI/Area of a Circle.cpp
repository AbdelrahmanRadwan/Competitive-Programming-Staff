#include<iostream>
#include<iomanip>
using namespace std;
#define pi 3.14159
int main()
{
	double r;
	while (cin>>r)
	{
		cout << "A="<<fixed<<setprecision(4)<<pi*r*r << endl;
	}
	return 0;
}