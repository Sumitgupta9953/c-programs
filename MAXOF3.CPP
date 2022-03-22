#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,c;
printf("\nsumitgupta");
printf("\nenter the 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&c)
{
printf("\na is max");
}
else if(b>a&c)
{
printf("\nb is max");
}
else
{
printf("\nc is max");
}
getch();
}