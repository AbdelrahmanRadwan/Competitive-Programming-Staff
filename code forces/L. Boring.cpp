#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
#define MAXI(a,b,c) max(max(a,b),c)
using namespace std;
int main ()
{
long a,b,c,d,e;
int counter=0;
cin>>a>>b>>c>>d>>e;
if(a%2==0)
{
    counter++;
}
if(b%2==0)
{
    counter++;
}
if(c%2==0)
{
    counter++;
}
if(d%2==0)
{
    counter++;
}
if(e%2==0)
{
    counter++;
}
cout<<5-counter<<" "<<counter<<endl;
    return 0;
}