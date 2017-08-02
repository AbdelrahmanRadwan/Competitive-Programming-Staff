#include<iostream>
using namespace std;
int main ()
{

    int a,b,n;
    bool ab=false;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            if(a<b)
            {
                ab=true;
            }
        }
        if(ab==false)
        {
            cout<<"Poor Alex"<<endl;
        }
        else
        {
            cout<<"Happy Alex"<<endl;
        }

    }
    return 0;
}