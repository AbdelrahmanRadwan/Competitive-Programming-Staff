#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int k;
void Go(string number)
{
	if (number.size() == k)
	{
		cout << number << endl;
		return;
	}
	return Go(number + "1"),Go(number + "2"),Go(number + "3");
}
int main()
{
	while (cin >> k)
		Go("\0"), cout << endl;
	return 0;
}