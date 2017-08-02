#include<iostream>
using namespace std;
int main ()
{
    long long p1,p2,time,rooms,SIZE;
    while(cin>>rooms>>SIZE)
    {
        p1=1;
        time=0;
        for(long long i=0;i<SIZE;i++)
        {
            cin>>p2;
            if(p2<p1)
            {
                time+=(rooms-p1+p2);
            }
            else
            {
                time+=p2-p1;
            }
            p1=p2;
        }
        cout<<time<<endl;
    }
    return 0;
}
