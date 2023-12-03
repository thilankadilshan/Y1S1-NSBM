//Write a program to input two numbers and display the highest number

#include<stdio.h>
void main ()
{
    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    if(num1>num2)
    {
        printf("The highest number is %d",num1);
    }
    else
    {
    printf("The highest number is %d",num2);
    }
return;
}