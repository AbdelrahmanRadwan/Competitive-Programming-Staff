#include<iostream>
using namespace std;
int main ()
{
    long long  n,m,max,mini1,mini2;
    while(cin>>n>>m)
    {
        max=n-(m-1)-1;
        if(n%m > 0)
        {
            mini1=n/m +1;
        }
        else
        {
            mini1=n/m;
        }
        mini2=n/m;
        cout<<((mini1-1)*mini1/2 )*(n%m) + ((mini2-1)*mini2/2 )*(m-(n%m)) <<" "<<(max)*(max+1)/2<<endl;
    }
    return 0;
}

