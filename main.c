#include<stdio.h>
 int main()
{
  int n,r,sum=0 ;
  printf("\n enter n value  ");
  scanf("%d",&n);
 
  while(n>0)
   {
       r=n%10;
       sum=sum+r;
       n=n/10;
   }
    printf("\n sum of digits : %d  ",sum);
}
 