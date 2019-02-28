#include<stdio.h>
main()
{
printf("Enter temperature in celsius   ");
float cel,fah;cel=0.0;fah=0.0;
scanf("%f",&cel,"\n");
fah=(cel*(9/5))+32;
printf("\n The temperature in fahrenheit is: %f",fah);
}

