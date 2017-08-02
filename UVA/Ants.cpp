#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main ()
{
	int *ants,size,minimum,maximum,testcases,length;
	cin>>testcases;
	for(int i=0;i<testcases;i++)
	{
	cin>>length>>size;
	minimum=INT_MIN;
	maximum=INT_MIN;
	ants=new int [size];
	for(int j=0;j<size;j++)
	{
	cin>>ants[j];
	if(minimum <= min((ants[j]), (length-ants[j])))
	{
	minimum = min((ants[j] ), (length-ants[j]));
	}
	if(maximum <= max((ants[j] ), (length-ants[j])))
	{
	maximum = max((ants[j] ), (length-ants[j]));
	}
	}	
	cout<<minimum<<" "<<maximum<<endl;
	}
return 0;
}
