/*
* Name : Aakarshit singh 
* Roll : 590034675
* Day  : 01    Question: 2
* Date : 25-08-2026 
* 
* PROBLEM STATEMENT: 
* <Write a program to calculate the area and circumference of a circle given its radius.>

*/ 

#include <stdio.h> 

int main(void)
 { 
    int radius, area, circumference;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area of circle is: %d\n", area);
    printf("Circumference of circle is: %d\n", circumference);
    
    return 0; 
}
