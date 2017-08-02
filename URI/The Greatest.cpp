#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int maximum(int a, int b, int c)
{
	return max(max(a, b), c);
}
int main()
{
	int a, b, c;
	while (cin >> a >> b >> c)
	{
		cout<<maximum(a, b, c)<<" eh o maior"<<endl;
	}
	return 0;
}