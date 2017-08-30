#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,f;
clrscr();
printf("\n enter a number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
f=f*i;
printf("factorial of %d=%d",n,f);
getch();
}
