#include<stdio.h>
#include<conio.h>
int main()
{
int rad;
float PI =3.14,area,ci;
printf("\nthis is sumit");
printf("\nenter radius of circle:");
scanf("%f",&rad);
area = PI *rad*rad;
printf("\narea of circle : %f",area);
ci=2*PI*rad;
printf("\ncircumference of circle :%f",ci);
return(0);
}