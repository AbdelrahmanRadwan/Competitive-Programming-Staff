#include<iostream>
#include<stdio.h>
#include<cstdio>

using namespace std;
int main ()
{
    int a,b,c,d;
    while(scanf("%d:%d%d:%d",&a,&b,&c,&d)==4)
    {
        a-=c;
       b-=d;
         if(b<0)
        {
            a--;
            b+=60;
        }
        if(a<0)
        {
            a+=24;
        }
   printf("%02d:%02d\n",a,b);
    }
    return 0;
}