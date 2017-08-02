#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main ()
{
    string a,b,c,d;
    while(cin>>a>>b>>d)
    {
        c=a+b;
        sort(d.begin(),d.end());
        sort(c.begin(),c.end());
        if(d==c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}