#include<iostream>
using namespace std;
int main ()
{
    int n,d,*arr,sum;
    while(cin>>n>>d)
    {
        arr=new int[n];
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(d-(sum+(n-1)*10)<0)
        {
            cout<<-1<<endl;
        }
        else
        {
         cout<<((d-(sum+(n-1)*10))/5)+((n-1)*2)<<endl;
        }
    }
    return 0;
}
