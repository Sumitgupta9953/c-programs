#include<stdio.h>
#include<conio.h>
int main()
{int num,i,fact=1;
printf("\nsumit gupta");
printf("\n enter the value : ");
scanf("%d",&num);
for(i=1;i<=num;i++){
fact=fact*i;
}
printf("the value of factorial %d is %d",num,fact);
return 0;
}