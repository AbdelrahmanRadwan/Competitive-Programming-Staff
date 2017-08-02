#include<string>
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	string name;
	float a, b;
	while (cin >> name >> a >> b)
	{
		cout << "TOTAL = R$ "<<fixed<<setprecision(2)<<((15.0 / 100.0)*b) + a << endl;
	}
	return 0;
}
