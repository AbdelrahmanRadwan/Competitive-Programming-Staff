#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
using namespace std;
bool sorting(int a, int b)
{
    return a>b;
}
int main ()
{
    int *arr,Size,floor,counter,k,j;
    while(cin>>Size>>k)
    {
        counter=0;
        floor=1;
        j=0;
        arr=new int [Size];
        for(int i=0;i<Size;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+Size,sorting);
        while(j<Size)
        {
            for(int f=0;f<k && j<Size;f++)
            {
                counter+=abs(arr[j]-floor);
                floor=arr[j];
                j++;
            }
            counter+=floor-1;
            floor=1;
        }
            cout<<counter+floor-1<<endl;
    }
    return 0;
}