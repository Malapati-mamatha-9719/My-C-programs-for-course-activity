#include<stdio.h>
#include<math.h>
void main()
{
  int num,no_of_digits,i,sum=0,rem;
  printf("enter the number:");
  scanf("%d",&num);
  printf("enter no. of digits:");
  scanf("%d",&no_of_digits);
  i=num;
  while(num>0)
    {
      rem=num%10;
      rem=pow(rem,no_of_digits);
      sum=sum+rem;
      num/=10
    }
  if(sum==i)
    printf("%d is Armstrong number.",i);
  else
    printf("%d is not Armstrong number.",i);
}
