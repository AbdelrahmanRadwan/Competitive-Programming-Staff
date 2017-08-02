#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int arr[100][100],size;
void inc()
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			arr[i][j]++;
}
void dec()
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			arr[i][j]--;
}
void transpose()
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
		{
			if (i == j)
				break;
			swap(arr[i][j], arr[j][i]);
		}
}
void fill(string *numbers)
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			arr[i][j] = (numbers[i][j]-'0');
}
void row(int a,int b)
{
	for (int i = 0; i < size; i++)
		swap(arr[a][i],arr[b][i]);
}
void column(int a, int b)
{
	for (int i = 0; i < size; i++)
		swap(arr[i][a], arr[i][b]);
}
int main()
{
	int testcases,operations,a,b;
	string order,*numbers;
	cin >> testcases;
	for (int ii = 1; ii <= testcases; ii++)
	{
		cin >> size;
		numbers = new string[size];
		for (int i = 0; i < size; i++)
			cin >> numbers[i];
		fill(numbers);
		cin >> operations;
		while (operations--)
		{
			cin >> order;
			if (order == "transpose")
				transpose();
			else if (order == "row")
			{
				cin >> a >> b;
				row(a-1, b-1);
			}
			else if (order == "col")
			{
				cin >> a >> b;
				column(a-1, b-1);
			}
			else if (order == "inc")
				inc();
			else if (order == "dec")
				dec();
		}
		cout << "Case #" << ii << endl;
		for (int i = 0; i < size; i++, cout << endl)
			for (int j = 0; j < size; j++)
				cout << arr[i][j];
		cout << endl;
		delete[]numbers;
	}
	return 0;
}