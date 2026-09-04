/*
* Name : Aakarshit singh 
* Roll : 590034675
* Day  : 04    Question: 1
* Date : 04-09-2026 
* 
* PROBLEM STATEMENT: 
* <Write a program to swap two numbers without using a third variable.> 
*/ 

#include <stdio.h> 

int main(void) { 
  int a, b;
  printf("enter two numbers: ");
    scanf("%d %d", &a, &b);    
    printf("before swapping: a = %d, b = %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d", a, b);
    return 0; 
}
