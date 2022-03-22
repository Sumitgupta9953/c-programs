#include<conio.h>
#include<stdio.h>
void main()
{
int num,originalnum,remainder,result=0;
printf("\n\nsumit gupta");
printf("\n enter a three digit integer : " );
scanf("%d",&num);
originalnum=num;
while(originalnum !=0)
{
remainder=originalnum%10;
result+=remainder*remainder*remainder;
originalnum/=10;
}
if(result==num)
printf("\n%d is an armstrong number",num);
else
printf("\n%d is not an armstrong number",num);
getch();
}