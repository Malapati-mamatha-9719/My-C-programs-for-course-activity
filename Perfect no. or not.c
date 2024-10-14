#include<stdio.h>
void main()
{
  int n,i,sum=1;
printf("enter the numbers:");
scanf("%d",&n);
for(i=2;i<=n-1;i++)
{
if(n%i==0)
  sum=sum+i;
}
if(sum==n)
  printf("%d is a perfect number.",n);
 else
   printf("%d is not a perfect number.",n);
}
