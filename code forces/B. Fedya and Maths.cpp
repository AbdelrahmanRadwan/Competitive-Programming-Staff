/*#include<stdio.h>
int main ()
{
    unsigned long long n;
   while(scanf("%d",&n)==1)
   {
 if(n%4==0)
{
    printf("%d",4);
}
else
{
    printf("%d",0);
}
   }
    return 0;
}*/
#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    string word;
    while(cin>>word)
    {
       if((((word[word.size()-2]-48)*10+(word[word.size()-1]-48))%4==0 && word.size()>=2 )||(((word[word.size()-1]-48))%4==0 && word.size()==1))
        {
            cout<<"4"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
