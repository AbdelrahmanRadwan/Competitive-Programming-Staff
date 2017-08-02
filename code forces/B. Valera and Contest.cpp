#include<stdio.h>
int main ()
{
  int n,k,l,r,sum,sum_k;
  scanf("%i %i %i %i %i %i",&n,&k,&l,&r,&sum,&sum_k);
          sum-=sum_k;
      for(int i=0;i<k;i++)
      {
          printf("%i ",sum_k/(k-i));
        sum_k-=sum_k/(k-i);
      }

      for(int i=k;i<n;i++)
      {
          printf("%i ",sum/(n-i));
          sum-=sum/(n-i);
      }
      printf("\n");
    return 0;
}