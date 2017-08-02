/*#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int a,b,c,d,z,y;
    char x;
    while(cin>>a>>x>>b>>c>>x>>d)
    {
        if(a==00)
        {
            a=24;
        }
        if(c==00)
        {
            c=24;
        }
         if(b<d)
        {
            a--;
            b+=60;
        }
        if(a<c)
        {
            a+=24;
        }
       z=a-c;
       y=b-d;
       if(z==24)
       {
           z=00;
       }
       if(z<10 && y<10)
       {
        cout<<0<<z<<":"<<0<<b-d<<endl;
       }
       else if(z<10 && y>=10)
       {
        cout<<0<<z<<":"<<b-d<<endl;
       }
       else if(y<10 && z>=10)
       {
        cout<<z<<":"<<0<<b-d<<endl;
       }
        else if(z>=10 && y>=10)
       {
        cout<<z<<":"<<b-d<<endl;
       }
    }
    return 0;
}*/
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
