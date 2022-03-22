#include<conio.h>
#include<stdio.h>
void main()
{int num;
printf("\nsumit gupta");
printf("\nenter the number :" );
scanf("%d",&num);
if(num<0.0)
{
printf("\nnumber is negative");
}
else if(num>0.0)
{
printf("\nnumber is positive");
}
else
{
printf("\nnumber is 0");
}
getch();
}