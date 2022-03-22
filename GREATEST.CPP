#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,greatest;
printf("\n sumit gupta  ");
printf("\n enter three numbers : ");
scanf("\n %d%d%d",&a,&b,&c);
greatest=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("\n the greatest of number  is : %d",greatest);
getch();
}