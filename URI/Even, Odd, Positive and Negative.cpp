#include<iostream>
using namespace std;
int main ()
{
	int arr[5],counter_even=0,counter_negative=0,counter_positive=0;

	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
		if(arr[i]%2==0)
		{
			counter_even++;
		}
		if(arr[i]<0)
		{
			counter_negative++;
		}
		else if(arr[i]>0)
		{
			counter_positive++;
		}
	}
	cout<<counter_even<<" valor(es) par(es)"<<endl;
	cout<<5-counter_even<<" valor(es) impar(es)"<<endl;
	cout<<counter_positive<<" valor(es) positivo(s)"<<endl;
	cout<<counter_negative<<" valor(es) negativo(s)"<<endl;
	return 0;
}