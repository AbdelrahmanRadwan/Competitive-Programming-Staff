/*#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main ()
{
   pair<int,int>*arr;
   int size;
   while(cin>>size)
   {
       arr=new pair<int,int>[size];
       for(int i=0;i<size;i++)
       {
           cin>>arr[i].first;
           arr[i].second=i+1;
       }
       sort(arr,arr+size);
        for(int i=0;i<size;i++)
       {
           cout<<arr[i].second<<" ";
       }
       cout<<endl;
   }
    return 0;
}*/
#include<iostream>
using namespace std;
int main ()
{
    int *arr,size,num;
    while(cin>>size)
    {
        arr=new int[size];
        for(int i=0;i<size;i++)
        {
            cin>>num;
            arr[num-1]=i+1;
        }
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
