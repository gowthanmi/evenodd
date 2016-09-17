# include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[25],tmp;
int i,j;
clrscr();
printf("\n enter the string");
scanf("%s",a);
printf("\n string before swap is");
for(i=0;i<=strlen;i=i+2)
{
tmp=a[i];
a[i]=a[i+1];
a[i+1]=tmp;
}
printf("\n string after swap is");
getch();
}
