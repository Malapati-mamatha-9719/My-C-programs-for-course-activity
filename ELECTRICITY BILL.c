##include<stdio.h>
#include<math.h>
void main()
{
float units,total_bill;
printf("enter units:");
scanf("%f",&units);
if(units<=50)
total_bill=(units)*0.50
else if(units<=50)
total_bill=(units)*0.50
else if(units<=150)
total_bill=(50)*0.50+(units-50)*0.75
else if(units<=250)
total_bill=50*0.50+100*0.75+(units-150)*1.20
else if(units>250)
total_bill=50*0.50+100*0.75+100*1.20+(units-250)*1.50
printf("the total electricity bill is %f",total_bill);
}
  
