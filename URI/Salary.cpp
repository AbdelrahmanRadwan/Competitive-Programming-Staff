#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	float b,c;
	while (cin >> a >> b>>c)
	{
		cout << "NUMBER = " << a << endl;
		cout << "SALARY = U$ " <<fixed<<setprecision(2)<< b*c << endl;
	}
	return 0;
}