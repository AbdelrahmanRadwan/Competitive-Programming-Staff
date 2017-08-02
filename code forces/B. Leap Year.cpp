#include<iostream>
using namespace std;
int main()
{
    unsigned long long int year;
    while(cin>>year)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(year%4==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}