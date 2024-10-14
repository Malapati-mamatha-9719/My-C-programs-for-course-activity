#include<stdio.h>
void main()
{
  int n,flag=0,i;
  printf("enter the number:");
  scanf("%d",&n);
  for(i=2;i<=n-1;i++)
    {
      if(n%i==0)
        flag++;
    }
  if(flag==0)
    printf("%d is prime number",n);
  else
    printf("%d is not a prime number",n);
      
}
