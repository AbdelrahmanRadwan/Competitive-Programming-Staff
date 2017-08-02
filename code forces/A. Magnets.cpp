#include<iostream>
using namespace std;
int main ()
{
    int n,*arr,counter;
    while(cin>>n)
    {
        counter=0;
        arr=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
          for(int i=0;i<n-1;i++)
        {
           if(arr[i]==arr[i+1])
           {
               counter++;
           }
        }
        cout<<n-counter<<endl;
    }
    return 0;
}