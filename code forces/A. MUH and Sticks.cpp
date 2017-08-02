#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int arr[6],index;
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
sort(arr,arr+6);
    for(int i=0;i<=2;i++)
    {
        if(arr[i]==arr[i+1] && arr[i]==arr[i+2] && arr[i]==arr[i+3])
        {
            index=i;
            break;
        }
        if(i==2)
        {
            cout<<"Alien"<<endl;
            index=10;
        }
    }
    if(index==0)
    {
        if(arr[4]==arr[5])
        {
            cout<<"Elephant"<<endl;
        }
        else
        {
            cout<<"Bear"<<endl;
        }
    }
    else if(index==1)
    {
            if(arr[0]==arr[5])
        {
            cout<<"Elephant"<<endl;
        }
        else
        {
            cout<<"Bear"<<endl;
        }

    }
    else if (index==2)
    {
            if(arr[0]==arr[1])
        {
            cout<<"Elephant"<<endl;
        }
        else
        {
            cout<<"Bear"<<endl;
        }

    }
    return 0;
}