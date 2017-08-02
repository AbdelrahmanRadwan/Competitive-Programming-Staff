#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float arr[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout <<"VALOR A PAGAR: R$ "<< fixed<<setprecision(2)<<arr[0][2] * arr[0][1] + arr[1][2] * arr[1][1] << endl;

	return 0;
}