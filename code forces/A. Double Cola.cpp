#include<iostream>
#include<string>
#include<cmath>
#include<stdio.h>
using namespace std;
int main ()
{
    int n;
    string arr[5]={"Sheldon","Leonard" ,"Penny","Rajesh","Howard"};
while(scanf("%d",&n)!=EOF)
    {
    while(n>5)
    {
        n=n/2-2;
    }
    cout<<arr[n-1]<<endl;
    }
    return 0;
}