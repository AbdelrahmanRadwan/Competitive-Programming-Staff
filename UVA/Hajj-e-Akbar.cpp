#include <iostream>
#include<string>
using namespace std ;
int main ()
{
	string word;
	int counter=1;
	while(cin>>word)
	{
		if(word=="*")
		{
		break;
		}
		else if(word=="Hajj")
		{
		cout<<"Case "<<counter<<": Hajj-e-Akbar"<<endl;
		}
		else if(word=="Umrah")
		{
		cout<<"Case "<<counter<<": Hajj-e-Asghar"<<endl;
		}
		counter++;
	}
return 0;
}