#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string Old, New;
	int size;
	cin >> size >> Old;
	New = Old;
	sort(New.begin(), New.end());
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (Old[i] == New[j])
			{
				New[j] = '$';
				cout << j+1;
				if (i != size - 1)
					cout << " ";
				break;
			
			}

		}
	}
	cout << endl;


	return 0;
}