#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
#define MAXI(a,b,c) max(max(a,b),c)
using namespace std;
int main ()
{
long long a,b,c;
cin>>a>>b>>c;
if(a>=c &&c>=b)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

    return 0;
}