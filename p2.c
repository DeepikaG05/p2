#include<stdio.h>
#include<conio.h>
int main()
{
int i,f=1,num;
clrscr();
printf(" enter a number");
scanf("%d",&num);
for(i=1;i<=num;i++)
f=f*i;
printf("factorial of %d is:%d",num,f);
getch();
return 0;
}
