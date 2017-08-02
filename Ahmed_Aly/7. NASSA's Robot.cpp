#include<iostream>
#include<string>
using namespace std;
void Calculate(int &x,int &y,int &counter,string signal,int size)
{
	x=0;
	y=0;
	counter=0;
	for(int j=0;j<size;j++)
		{
			switch (signal[j])
			{
			case 'U' :
				{
					y++;
					break;
				}
				case 'D' :
				{
					y--;
					break;
				}
				case 'R' :
				{
					x++;
					break;
				}
				case 'L' :
				{
					x--;
					break;
				}
				case '?' :
				{
					counter++;
					break;
				}
			
			
			}
		
		}
}
int main ()
{
	int x,y,counter,testcases,size;
	string signal;
	cin>>testcases;
	for(int i=0;i<testcases;i++)
	{
		cin>>signal;
		size=signal.size();
		Calculate(x,y,counter,signal,size);
		cout<<x+counter*-1<<" "<<y+counter*-1<<" "<<x+counter<<" "<<y+counter<<endl;
	}
return 0;
}