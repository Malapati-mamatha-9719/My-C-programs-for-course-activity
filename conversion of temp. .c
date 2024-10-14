#include<stdio.h>
int main()
{
  float F,C;
  printf("enter temp. in fahernheit:");
  scanf("%f",&F);
  C=(F-32)*5/9;
  printf("the temp. in celsius is %f",C);
}
