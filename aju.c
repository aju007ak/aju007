#include<stdio.h>
#include<conio.h>
int main()
{
int num;
clrscr();
printf("enter a number:");
scanf("%d",&num);
if(num>0)
{
printf("\n the given number is positive");
}
else if(num<0)
{
printf("the given number is negative");
}
else
printf("\n the given number is zero");
getch();
