#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{

    int n,m,mini,i;
    bool a;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        a=false;
        if(n%2==0)
        {
            mini=n/2;
        }
        else
        {
            mini=n/2+1;
        }
        for(i=mini;i<=n;i++)
        {
            if(i%m==0)
            {
                a=true;
                break;
            }
        }
        if(a==true)
        {
            cout<<i<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}