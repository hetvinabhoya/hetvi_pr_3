//Write a program to find the sum of a first and the last digit of a number.

#include<stdio.h>
#include<conio.h>

void main(){
int n;
int First_digit,Last_digit;
int sum;
clrscr();
printf("Enter any number: ");
scanf("%d",&n);
Last_digit=n%10;
while(n>=10){
     n/=10;

}
  First_digit=n;
  sum=First_digit+Last_digit;
  printf("The sum of first digit and last digit: %d",sum);


getch();
}

/* Enter any number:3106
   The sum of first digit and last digit:9   */







