#include<stdio.h>
#include<conio.h>
void main()
{
int phy,chem,bio,math,comp;
float per,total;
printf("\n sumit gupta");
printf("\n enter five subject marks: ");
scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
per=(phy+chem+bio+math+comp)/5.0;
printf("percentage is : /n",per);
total=phy+chem+bio+math+comp;
getch();
}
