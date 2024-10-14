#include<stdio.h>
void main()
{
  int X,Y,a,b,i;
  printf("enter from and to values:");
  scanf("%d%d",&X,&Y);
  printf("enter a and b values:");
  scanf("%d%d",&a,&b);
  for(i=X;i<=Y;i++)
    {
      if(i%a==0&&i%b==0)
        printf("\n%d",i);
    }
  
}
