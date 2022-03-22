#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int t;
float si,ci,p,r,x;
printf("\n\nsumit gupta");
printf("\n enter the time : ");
scanf("%f",&t);
printf("\n enter the principle : ");
scanf("%f",&p);
printf("\n enter the rate : ");
scanf("%f",&r);
si=(p*r*t)/100;
x=(1+r)/100;
ci=p*pow(x,t);
printf("\n simple interest is =%f",si);
printf("\n compound interest is =%f",ci);
getch();
}