#include<stdio.h>
#include<algorithm>
using namespace std;
int main ()
{
    int a,b,n,m,result=-1;
   scanf("%d%d",&n,&m);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(m>a || (m==a && b==0))
        {
            result=max(result,(100-b)%100);
        }
    }
    printf("%d \n",result);
    return 0;
}
