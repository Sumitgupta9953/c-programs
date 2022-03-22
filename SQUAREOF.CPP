#include<stdio.h>
#include<conio.h>
void main()
{
int num,n;
printf("\nsumit gupta");
printf("\n enter the number : ");
scanf("\n %d",&num);
printf("\n number : " );
for(n=1;n<=num;n++)
printf("\n %d",n);
printf("\n square : ");
for(n=1;n<=num;n++)
{
printf("\n %d",n*n);
}
getch();
}