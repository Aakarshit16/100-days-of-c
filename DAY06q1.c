/*
* Name : Aakarshit singh 
* Roll : 590034675
* Day  : 06    Question: 1
* Date : 06-09-2026 
* 
* PROBLEM STATEMENT: 
* <Write a program to input an integer and check whether it is even or odd using if–else.> 
*/ 

    #include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

    return 0;
} 
    
