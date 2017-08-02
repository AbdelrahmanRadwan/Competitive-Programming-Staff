#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    long long n,counter;
    bool a;
    long long *arr1,*arr2;
    while(cin>>n)
    {
        counter=0;
        a=true;
        arr1=new long long[n];
        arr2=new long long[n];
        for(long long i=0;i<n;i++)
        {
            cin>>arr1[i];
            arr2[i]=arr1[i];
        }
        sort(arr2,arr2+n);
        for(long long i=0;i<n;i++)
        {
            if(arr1[i]!=arr2[i])
            {
                counter++;
                if(counter==3)
                {
                    a=false;
                    break;
                }
            }
        }
        if(a==false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}