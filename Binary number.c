#include<stdio.h>
void main()
{
  int n,r,i;
  printf("enter the number:");
  scanf("%d",&n);
  while(n>0)
    {
      r=n%2;
      i=i*10+r;
      n=n/2;
    }
  printf("the binary equivalent is:%d",i);
}
