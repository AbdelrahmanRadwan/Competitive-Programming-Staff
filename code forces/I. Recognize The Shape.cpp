#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
#define MAXI(a,b,c) max(max(a,b),c)
using namespace std;
int main ()
{
double a;
while(cin>>a)
{
    if(a==1)
    {
        cout<<"Square"<<endl;
    }
    else if(sqrt(a)==(int)sqrt(a))
{
    cout<<"Unknown"<<endl;
}
else
{
    cout<<"Rectangle"<<endl;
}
}
    return 0;
}