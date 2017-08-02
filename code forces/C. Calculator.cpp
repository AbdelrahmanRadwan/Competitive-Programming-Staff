#include<iostream>
using namespace std;
int main ()
{
   int a,b;
   char z;
   cin>>a>>z>>b;
   if(z=='+')
   {
       cout<<a+b<<endl;
   }
   else if(z=='/')
   {
       cout<<a/b<<endl;
   }
   else if(z=='*')
   {
       cout<<a*b<<endl;
   }
   else if(z=='-')
   {
       cout<<a-b<<endl;
   }
    return 0;
}
