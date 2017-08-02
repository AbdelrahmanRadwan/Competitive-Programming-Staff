#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
    int n,k;
    while(scanf("%d%d",&n,&k)==2)
    {
        for(int i=1;i<n-k;i++)
        {
            cout<<i<<" ";
        }
        for(int i=0;i<k+1;i++)
        {
            cout<<n--<<" ";
        }
        cout<<endl;
    }
    return 0;
}