#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    string a,b;
    while(cin>>a>>b)
    {
        if(a.size()!=b.size())
        {
            cout<<"NO"<<endl;
        }
        else
        {

        for(int i=0,j=a.size()-1;i<a.size();i++,j--)
        {
            if(a[i]!=b[j])
            {
                cout<<"NO"<<endl;
                break;
            }
            else if(i==a.size()-1)
            {
                cout<<"YES"<<endl;
            }
        }
    }
    }
    return 0;
}