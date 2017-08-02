#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int main ()
{
    pair<int,int>*arr;
    int Size,equal1,equal2;
    while(cin>>Size)
    {
        equal1=-1;
        equal2=-1;
        arr=new pair<int,int>[Size];
        for(int i=0;i<Size;i++)
        {
            arr[i].second=i+1;
            cin>>arr[i].first;
        }
        sort(arr,arr+Size);
        for(int i=0;i<Size-1;i++)
        {
            if(arr[i].first==arr[i+1].first && equal2==-1)
            {
                equal1=i;
                equal2=-2;
                continue;
            }
            if(arr[i].first==arr[i+1].first && equal2==-2)
            {
                equal2=i;
                break;
            }
        }
           if(equal2==-1 || equal2==-2 )
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                for(int i=0;i<Size;i++)
                {
                    cout<<arr[i].second<<" ";
                }
                cout<<endl;
                swap(arr[equal1].second,arr[equal1+1].second);
                 for(int i=0;i<Size;i++)
                {
                    cout<<arr[i].second<<" ";
                }
                cout<<endl;
                 swap(arr[equal2].second,arr[equal2+1].second);
                 for(int i=0;i<Size;i++)
                {
                    cout<<arr[i].second<<" ";
                }
                cout<<endl;
            }
    }
    return 0;
}