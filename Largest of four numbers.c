#include<stdio.h>
void main()
{
  int a,b,c,d;
  printf("enter the values:");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a>b&&a>d)
  {
    if(a>c)
      printf("a is big.");
    else
      printf("c is big.");
  }
  else
  {
    if(b>d)
      printf("b is big.");
    else
      printf("c is big.");
  }
}
