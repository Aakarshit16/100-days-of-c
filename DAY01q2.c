/* 
* Name : Aakarshit singh 
* Roll : 590034675
* Day  : 01    Question: 2
* Date : 25-08-2026 
* 
* PROBLEM STATEMENT: 
* <Write a program to input two numbers and display their sum, difference, product,and quotient.> 
*/ 

#include <stdio.h>
int main() {

int num1, num2, sum, product, difference, quotient;
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);
sum = num1 + num2;
difference = num1 - num2;
product = num1 * num2;
quotient = num1 / num2;
printf("sum = %d\n", sum);
printf("difference = %d\n", difference);
printf("product = %d\n", product);
printf("quotient = %d\n", quotient);
return 0;
}   
