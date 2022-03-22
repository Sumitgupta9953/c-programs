#include<conio.h>
#include<stdio.h>
void main()
{
int a;
clrscr();
printf("\n\nsumit gupta");
printf("\n\nenter the value of a");
scanf("%d",&a);
if(a%2==0)
goto even;
else
goto odd;
even:
{
printf("\n number is even");
}
odd:
{
printf("\n number is odd ");
}
getch();
}