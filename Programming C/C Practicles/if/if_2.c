//input two numbers and display the highest

#include<stdio.h>
void main()
{
int num1, num2;

    printf("Enter two numbers :");
    scanf("%d %d",&num1, &num2);

    if(num1>num2)
    printf("The Highest value is %d", num1);
    else
    printf("The Highest value is %d", num2);
    
    return;

}