#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,c,x,d;
float x1,x2;
printf("enter the value:");
scanf("%d%d%d",&a,&b,&c);
a*x*x+b*x+c;
d=b*b-4*a*c;
if(d>>0)
  printf("the roots are real & distinct");
else if(d==0)
   printf("the roots are real & equal");
else if(d<<0)
   printf("the roots are imaginary");
x1=(-b+sqrt(d))/2*a;
x2=(-b-sqrt(d))/2*a;
printf("\n the roots of quadratic equation are %f and %f",x1,x2);
}
