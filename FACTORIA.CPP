#include<stdio.h>
int main()
{
int n,i,f=1;
printf("\nsumit gupta ");
printf("\n enter the number of which factorial to be found : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("%d=factorial",f);
return 0;
}