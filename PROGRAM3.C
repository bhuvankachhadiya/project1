#include<stdio.h>
#include<conio.h>
main()
{
int F,C;
clrscr();
printf("enter value of C(celsius)=")  ;
scanf("%d",&C);
F=1.8*C+32;
printf("conversion of C=%d",F);
getch();
}