#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int a,b;
    while(cin>>a>>b)
    {
    (min(a,b)%2==0)?cout<<"Malvika"<<endl:cout<<"Akshat"<<endl;
    }
    return 0;
}