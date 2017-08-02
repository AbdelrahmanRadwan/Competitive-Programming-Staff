#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	bool ok;
	int testcases,size1, size2;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		ok = true;
		cin >> a>>b;
		size1 = a.size();
		size2 = b.size();
		if (size2>size1)
		{
			cout << "nao encaixa" << endl;
		}
		else
		{
			for (int j = size2 - 1, k = size1 - 1; j >= 0; k--, j--)
			{
				if (b[j] != a[k])
				{
					ok = false;
					break;
				}
			}
			if (ok == true)
			{
				cout << "encaixa" << endl;
			}
			else
			{
				cout << "nao encaixa" << endl;
			}
		}
	}
	return 0;
}