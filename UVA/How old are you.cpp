#include<iostream>
using namespace std;
int main ()
{
	char dash;
	int current_day,current_month,current_year ;
	int birth_day,birth_month,birth_year;
	int testcases;
	cin>>testcases;
	for(int i=1;i<=testcases;i++)
	{
		cin>>current_day>>dash>>current_month>>dash>>current_year;
		cin>>birth_day>>dash>>birth_month>>dash>>birth_year;
	
		if((birth_year>current_year) || (birth_year==current_year && birth_month>current_month) || (birth_year==current_year && birth_month==current_month && birth_day>current_day))
		{
			cout<<"Case #"<<i<<": Invalid birth date"<<endl;
		}
		else if((current_year-birth_year>=132) || (current_year-birth_year==131 && birth_month<current_month) ||  (current_year-birth_year==131 && birth_month==current_month && birth_day<=current_day ))
		{
		cout<<"Case #"<<i<<": Check birth date"<<endl;
		}
		else
		{
			if(birth_day>current_day)
			{
			current_month--;
			}
			if(birth_month>current_month)
			{
			current_year--;
			}
		cout<<"Case #"<<i<<": "<<current_year-birth_year<<endl;
		}
	}
return 0;
}