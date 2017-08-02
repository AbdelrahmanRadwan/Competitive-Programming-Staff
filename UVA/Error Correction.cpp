#include<iostream>
using namespace std;
int main()
{
	int size,x_row,x_column,row_count,column_count;
	int arr[100][100],*row,*column;
	while (cin >> size && size)
	{
		row = new int[size]();
		column = new int[size]();
		row_count = 0;
		column_count = 0;
		for (int i = 0; i < size; i++)
		{

			for (int j = 0; j < size; j++)
			{
				cin >> arr[i][j];
				row[i] += arr[i][j];
				column[j] += arr[i][j];			
			}
		}
		for (int j = 0; j < size; j++)
		{
			if (row[j] % 2 != 0)
				row_count++, x_row = j;
			if (column[j] % 2 != 0)
				column_count++, x_column = j;
		}
		if (!row_count && !column_count)
			cout << "OK" << endl;
		else if (row_count == 1 && column_count == 1)
			cout << "Change bit (" << x_row+1<< "," << x_column+1<< ")" << endl;
		else
			cout << "Corrupt" << endl;
		delete[]row;
		delete[]column;
	}
	return 0;
}