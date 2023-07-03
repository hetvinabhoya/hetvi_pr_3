//Q-2.Write a program to count the total number of digits in a number.

#include<stdio.h>
#include<conio.h>

void main(){
int n;
int digits=0;
clrscr();
printf("Enter any number: ");
scanf("%d",&n);
while(n!=0){
    n=n/10;
    digits++;
}
   printf("Total number of digits:%d",digits);
getch();
}

/* Enter any number:406
   Total number of digits:3 */