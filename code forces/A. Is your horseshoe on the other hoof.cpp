#include<iostream>
int count(int arr[])
{
    int counter=0;
    if(arr[0]==arr[1])
    {
        counter++;
        arr[1]=0;
    }
     if(arr[0]==arr[2])
    {
        counter++;
        arr[2]=0;
    }
     if(arr[0]==arr[3])
    {
        counter++;
        arr[3]=0;
    }
     if(arr[1]==arr[2] && arr[1]!=0)
    {
        counter++;
        arr[2]=0;
    }
     if(arr[1]==arr[3] && arr[1]!=0)
    {
        counter++;
        arr[3]=0;
    }
     if(arr[2]==arr[3]&& arr[2]!=0)
    {
        counter++;
        arr[3]=0;
    }
    return counter;
}
using namespace std;
int main ()
{
int arr[4];
for(int i=0;i<4;i++)
{
    cin>>arr[i];
}
cout<<count(arr)<<endl;
return 0;
}
