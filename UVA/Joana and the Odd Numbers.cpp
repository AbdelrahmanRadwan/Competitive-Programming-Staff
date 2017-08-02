#include<iostream>
using namespace std;
int main ()
{
long n ,sum=0,value=1,order=0;
while(cin>>n)
{
	for(int i=1;i<=n;i+=2)
{
	order=order+i;
}
for(int j=1;j<order;j++)
{
value+=2;
}
for(int k=1;k<=3;k++)
{
sum=sum+value;
value=value-2;
}
cout<<sum<<endl;
sum=0;
value=1;
order=0;
}
return 0;
}