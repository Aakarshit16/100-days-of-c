/*
/* Name : Aakarshit singh 
* Roll : 590034675
* Day  : 03   Question: 2
* Date : 04-09-2026 
* PROBLEM STATEMENT: 
* <Write a program to swap two numbers using a third variable.> 
*/ 

#include <stdio.h> 

int main(void) { 

    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0; 
}
