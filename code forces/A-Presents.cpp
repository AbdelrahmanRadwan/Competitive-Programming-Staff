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