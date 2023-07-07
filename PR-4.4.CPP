//Write a program to print the below pattern using nested for loop.

#include<stdio.h>
#include<conio.h>

void main(){
int w,v,z;
clrscr();

for(w=1;w<=5;w++)
{
for(z=1;z<=5;z++){

printf(" ");
}
for(v=5;v>w;v--)
{
printf("%d",w%2);}
printf("\n");
}

getch();
}