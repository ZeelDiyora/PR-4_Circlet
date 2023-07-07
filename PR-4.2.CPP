//Write a Program to print the below pattern using for loop.

#include<stdio.h>
#include<conio.h>

void main(){
int x,y,z=10;
clrscr();

for(x=1;x<=5;x++)
{
for(y=1;y<=x;y++)
{
 printf("%d",z++);
 }
 printf("\n");
 }

getch();
}
