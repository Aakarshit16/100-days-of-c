/* 
* Name : Aakarshit singh 
* Roll : 590034675
* Day  : 01    Question: 2
* Date : 25-08-2026 
* 
* PROBLEM STATEMENT: 
* <Write a program to calculate the area and perimeter of a rectangle given its length and breadth.>

*/ 

#include <stdio.h> 
int main(void)
{
int lenght, breadth, area, perimeter;
printf("Enter length and breadth of rectangle: ");
scanf("%d %d", &lenght, &breadth);
area = lenght * breadth;
perimeter = 2 * (lenght + breadth);
printf("Area of rectangle is: %d\n", area);
printf("Perimeter of rectangle is: %d\n", perimeter);

return 0; 
}