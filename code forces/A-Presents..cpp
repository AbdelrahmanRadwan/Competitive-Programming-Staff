#include<iostream>
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
}