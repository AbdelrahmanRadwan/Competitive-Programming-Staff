#include<iostream>
using namespace std;
int main ()
{
 int n,m,i;
 while(cin>>n>>m)
 {
     while(n)
     {
         if(m%2==1)
         {
         i=m/2+1;
         }
         else
         {
              i=m/2;
         }
         for(int j=0;j<m && n>0;j++)
         {
              if(m%2==1)
         {
             if(j%2==0)
             {
                 i+=j;
             }
             else
             {
                i-=j;
             }
         }
                else
         {
             if(j%2==0)
             {
                 i-=j;
             }
             else
             {
                i+=j;
             }
         }
            cout<<i<<endl;
            n--;
         }
     }
 }
    return 0;
}
