#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
struct point
{
	double a, b;
};
int main()
{
	point point1, point2;
	while (cin >> point1.a >> point1.b >> point2.a >> point2.b)
	{
		cout << fixed << setprecision(4) << sqrt(pow((point1.a - point2.a), 2) + pow((point2.b - point1.b), 2)) << endl;
	}
	return 0;
}
