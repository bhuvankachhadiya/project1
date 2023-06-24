#include<stdio.h>
#include<conio.h>
main()
{
int gs=200,hra=5,da=10,ta=15;
clrscr();
hra=gs*5/100;
da=gs*10/100;
ta=gs*15/100;
gs=gs+hra+da+ta;
printf("gross salary is=%d",gs) ;
getch();
}