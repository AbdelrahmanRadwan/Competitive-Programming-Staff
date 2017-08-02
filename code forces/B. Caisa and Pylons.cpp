#include<iostream>
using namespace std;
int main ()
{
    int *arr,Size,Max;
    while(cin>>Size)
    {
        arr=new int[Size];
        Max=0;
        for(int i=0;i<Size;i++)
        {
            cin>>arr[i];
            if(arr[i] > Max)
            {
                Max=arr[i];
            }
        }
        cout<<Max<<endl;
    }



    return 0;
}
