#include<iostream>
using namespace std;
int main ()
{
    int a,b,*arr1,*arr2,counter,j;
    while(cin>>a>>b)
    {
        counter=0;
        j=0;
        arr1=new int[a];
        arr2=new int[b];
          for(int i=0;i<a;i++)
        {
            cin>>arr1[i];
        }
          for(int i=0;i<b;i++)
        {
            cin>>arr2[i];
        }
        for(int i=0;i<a;i++)
        {
            for(;j<b;)
            {

                if(arr1[i]<=arr2[j])
                {
                    counter++;
                    j++;
                    break;
                }
                j++;
            }
        }
        cout<<a-counter<<endl;
    }
    return 0;
}
