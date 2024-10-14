#include<stdio.h>
void main()
{
     int num,rem,sum=0,m;
     printf("enter the number:");
     scanf("%d",&num);
     for(num=m;m>0;m=m/10)
       {
         rem=m%10;
         sum=sum*10+rem;
       }
  if(sum==m)
    printf("%d is palindrome.",m);
  else
    printf("%d is not a palindrome",m);
}
