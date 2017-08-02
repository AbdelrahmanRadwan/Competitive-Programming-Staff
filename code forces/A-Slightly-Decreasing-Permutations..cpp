#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int n,k,*arr;
    while(cin>>n>>k)
{
        arr=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=i+1;
        }
        for(int i=0;i<k/2;i++)
        {
            swap(arr[i],arr[n-i-1]);
        }
        if(k%2==1)
        {
             swap(arr[n/2-1],arr[n/2]);
        }
          for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}