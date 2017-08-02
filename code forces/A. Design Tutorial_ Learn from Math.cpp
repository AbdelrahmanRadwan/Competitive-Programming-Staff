#include<iostream>
using namespace std;
bool prime(long long n)
{
    for(long long i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    long long a;
    while(cin>>a)
    {
        for(long long i=4;i<1000000;i+=2)
        {
            if(prime(a-i)==false)
            {
                cout<<i<<" "<<a-i<<endl;
                    break;
            }
        }
    }
    return 0;
}
