#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
#define pi 3.14159
int main()
{
	double r;
	while (cin >> r)
	{
		cout << "VOLUME = "<<fixed<<setprecision(3)<<(4.0 / 3.0)* pi* pow(r,3)<<endl;
	}
	return 0;
}