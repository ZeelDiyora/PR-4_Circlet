//Write a Program to print the below pattern using nested for loop.

#include<stdio.h>
#include<conio.h>

void main(){
int z,e,l;
clrscr();

for(z=5;z>=1;z--)
{
for(l=1;l<=z;l++)
{
 print(" ");
 }

for(e=z;e<=5;e++)
{
 printf("%d",e);}
 printf("\n");
}

getch();
}
