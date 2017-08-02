#include<iostream>
using namespace std;
int main ()
{
int time,velocity,displacement;
while(cin>>time>>velocity)
{
displacement=2*velocity*time;
cout<<displacement<<endl;
}
return 0;
}