#include<iostream>
#include<cmath>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    double n,m;
    int counter;
    while(cin>>n>>m)
    {
        counter=0;
        for(double i=0;i*i<=m;i++)
        {
            if((i*i*i*i)+(-2*m*i*i)+i == n-(m*m))
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
