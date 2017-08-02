#include<iostream>
using namespace std;
int main ()
{

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<c)
    {
        cout<<"("<<a<<","<<d<<")"
            <<"("<<c<<","<<d<<")"
            <<"("<<c<<","<<b<<")"
            <<"("<<a<<","<<b<<")"<<endl;
    }
    else
    {
         cout<<"("<<c<<","<<b<<")"
            <<"("<<a<<","<<b<<")"
            <<"("<<a<<","<<d<<")"
            <<"("<<c<<","<<d<<")"<<endl;
    }
    return 0;
}
