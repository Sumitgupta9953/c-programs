#include<conio.h>
#include<stdio.h>
void main()
{
int n,reverse=0,rem;
printf("\n\nsumit gupta");
printf("\nenter number : " );
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
reverse=reverse*10+rem;
n/=10;
}
printf("reversed number%d",reverse);
getch();
}
