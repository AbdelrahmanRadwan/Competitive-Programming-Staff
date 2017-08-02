#include<iostream>
using namespace std;
int main()
{
	float a, b,c;
	while (cin >> a >> b>>c)
	{
		a *= 2;
		b *= 3;
		c *= 5;
		cout << "MEDIA = "<< (a + b + c) / 10 << endl;
	}
	return 0;
}