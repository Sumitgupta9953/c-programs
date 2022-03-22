#include<stdio.h>
#include<conio.h>
void main()
{
int chem,c,fcit,tc,wt,g,f;
clrscr();
printf("\n sumit gupta");
printf("\n enter the marks of chem:");
scanf("%d",&chem);
printf("\n enter the marks of c:");
scanf("%d",&c);
printf("\n enter marks of fcit:");
scanf("%d",&fcit);
printf("\n enter marks of tc:");
scanf("%d",&tc);
printf("\n enter marks in wt:");
scanf("%d",&wt);
g=chem+c+fcit+tc+wt;
printf("\n total marks =%d",&g);
f=g/5.0;
printf("\n percentage =%d",&f);
getch();
}
