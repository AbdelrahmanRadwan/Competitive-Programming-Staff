#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
   char name[30],temp_name[30];
   int testcases,counter=0;
   while(cin>>testcases)
   {
   for(int i=0;i<testcases;i++)
   {
       cin>>name;
       strcpy(temp_name,name);
   if(strcmp(temp_name,strrev(name)))
   {
       counter++;
   }
   }
   cout<<counter<<endl;
   }
   return 0;
}