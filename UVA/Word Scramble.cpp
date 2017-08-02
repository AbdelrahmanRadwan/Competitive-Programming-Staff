#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<cstring>
#include<string.h>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s))
	{
		istringstream is(s);
		is >> s;
		reverse(s.begin(), s.end());
		cout << s;
		while (is >> s)
		{
			cout << " ";
			reverse(s.begin(), s.end());
			cout << s;
		}
		cout << endl;
	}
	return 0;
}
////////////////////////////////////////////
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<cstring>
#include<string.h>
using namespace std;
int main()
{
	string s;
	bool espacio;
	while (getline(cin, s))
	{
		istringstream is(s);
		espacio = 0;
		while (is >> s)
		{
			if (espacio)
				cout << " ";
			espacio = 1;
			reverse(s.begin(), s.end());
			cout << s;
		}
		cout << endl;
	}
	return 0;
}