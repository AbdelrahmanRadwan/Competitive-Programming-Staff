#include<iostream>
using namespace std;
int main() 
{
	int testcases, a, b, c;
	bool sol;
	cin >> testcases;
	while (testcases--)
	{
		cin >> a >> b >> c;
		sol = false;
		for (int x = -22; x <= 22 && !sol; x++)
			if (x * x <= c)
				for (int y = -100; y <= 100 && !sol ; y++)
					if (y != x && x * x + y * y <= c)
						for (int z = -100; z <= 100 && !sol; z++)
							if (z != x && z != y && x + y + z == a && x * y * z == b && x * x + y * y + z * z == c) 
							{
								cout << x << " " << y << " " << z << endl;
								sol = true;
							}
		if (!sol)
			printf("No solution.\n");
	}

	return 0;
}