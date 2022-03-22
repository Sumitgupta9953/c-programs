#include<conio.h>
#include<stdio.h>
void main()
{
int num;
printf("\nsumit gupta");
printf("\nenter the number");
scanf("%d",&num);
if(num<100)
{
printf("\nnumber is greater than 100");
}
else if(num>1000)
{
printf("\nnumber is less than 1000");
}
else
{
printf("\nnumber is equal to 100");
}
getch();
}