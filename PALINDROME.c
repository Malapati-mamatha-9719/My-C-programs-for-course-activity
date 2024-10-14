#include<stdio.h>
void main()
{
     int num,rem,sum=0,m;
     printf("enter the number:");
     scanf("%d",&num);
     for(m=num;num>0;num=num/10)
       {
         rem=num%10;
         sum=sum*10+rem;
       }
  if(sum==m)
    printf("%d is palindrome.",m);
  else
    printf("%d is not a palindrome",m);
}
