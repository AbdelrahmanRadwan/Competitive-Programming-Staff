#include<iostream>
#include<algorithm>
#define MAXI(a,b,c) max(max(a,b),c)
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(MAXI(a,b,c)==a)
    {
        cout<<1<<endl;
    }
    else if(MAXI(a,b,c)==b)
    {
       cout<<2<<endl;
    }
    else
    {
        cout<<3<<endl;
    }
    return 0;
}
