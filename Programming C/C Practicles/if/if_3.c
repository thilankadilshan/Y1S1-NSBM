//input two numbers and display the highest

#include<stdio.h>
void main()
{
int num1, num2, num3;

    printf("Enter three numbers :");
    scanf("%d %d %d",&num1, &num2, &num3);

    if(num1>num2 && num1>num3)
    printf("The Highest value is %d", num1);
    else if (num2>num1 && num2>num3)
    printf("The Highest value is %d", num2);

    else
    printf("The Highest value is %d", num3);
    
    return;

}

/*#include<stdio.h>
void main()
{
int num1, num2, num3, max;

max=num1;
if (num2>max)
max=num2;

if (num3>max)
max=num3;

printf("The Highest value is %d", max);
*/