#include<iostream>
#include<string>
#include<cmath>
#include<stdio.h>
using namespace std;
int main ()
{
    int n,a,b,c;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>=6666)
        {
            cout<<"Case "<<i<<": dad"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": mom"<<endl;
        }
        }

    }
return 0;
}