#include<iostream>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;
void clean(string &a )
{
    for(unsigned int i=0;i<a.size();i++)
    {
        string word="\0";
        for(unsigned int j=i+1;j<a.size();j++)
        {
            if(a[j]==a[i])
            {
               a.erase(j,1);
                j--;
            }
        }
    }
}
int main()
{
    string a;
   while(cin>>a)
   {
    sort(a.begin(),a.end());
     clean(a);
    if(a=="46")
{
    cout<<1<<endl;
}
   else if(a=="134567")
{
    cout<<0<<endl;
}
   else if(a=="12347")
{
    cout<<2<<endl;
}
   else if(a=="12346")
{
    cout<<3<<endl;
}
   else if(a=="2456")
{
    cout<<4<<endl;
}
   else if(a=="12356")
{
    cout<<5<<endl;
}
   else if(a=="123567")
{
    cout<<6<<endl;
}
   else if(a=="146")
{
    cout<<7<<endl;
}
   else if(a=="1234567")
{
    cout<<8<<endl;
}
   else if(a=="123456")
{
    cout<<9<<endl;
}
   else
{
    cout<<-1<<endl;
}
   }
return 0;
}