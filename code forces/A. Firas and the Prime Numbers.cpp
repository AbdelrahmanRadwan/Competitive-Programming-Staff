#include<iostream>
using namespace std;
bool prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
        return true;
}
int main()
{
    int testcases,n;
    cin>>testcases;
    for(int i=0;i<testcases;i++)
    {
        cin>>n;
        if(prime(n))
        {
            cout<<"Prime Number"<<endl;
        }
        else
        {
            cout<<"Not Prime Number"<<endl;
        }
    }
    return 0;
}