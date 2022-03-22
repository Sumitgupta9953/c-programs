#include<conio.h>
#include<stdio.h>
void main()
{
int i,n,r=0;
printf("\n\n\nsumit gupta" );
printf("\n\n enter any number : ");
scanf("%d",&n);
for(i=2;i<=n-1;i++)
{
if(n%i==0)
r=1;
break;
}
if(r==0)
{
printf("\nprime number ");}
else
{printf("\ncomposite number");}
getch();
}
