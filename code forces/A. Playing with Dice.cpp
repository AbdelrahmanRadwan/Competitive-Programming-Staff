#include<iostream>
#include<math.h>
#include<cmath>
#include<stdio.h>
using namespace std;
int main ()
{
    int a,b,A,D;
    while(scanf("%i%i",&a,&b)==2)
    {
        A=0;
        D=0;
        for(int n=1;n<=6;n++)
        {
            if(abs(a-n)<abs(b-n))
            {
                A++;
            }
            else if(abs(a-n)==abs(b-n))
            {
                D++;
            }
        }
        printf("%i %i %i \n",A,D,6-A-D);

    }
    return 0;
}
