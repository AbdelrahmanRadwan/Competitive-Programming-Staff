#include <iostream>
using namespace std ;
int main ()
{
    int n;
    cin>>n;
    int i=n;
    while(i--)
    {
        cout<<n;
        if(i!=0)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}