#include<iostream>
using namespace std;
int main ()
{
    int n,m,counter;
    while(cin>>n>>m)
    {
        counter=n;
        while(n/m!=0)
        {
            counter+=n/m;
            n=n/m +n%m;
        }
        cout<<counter<<endl;
    }
    return 0;
}