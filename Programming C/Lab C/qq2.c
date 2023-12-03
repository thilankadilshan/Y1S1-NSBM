#include<stdio.h>
void main ()
{
    int marks;

    printf("Enter your marks :");
    scanf("%d",&marks);

    if(marks>=75 && marks<101)
        printf("You Got A");
    else if(marks>=65 && marks<75)
        printf("You Got B");
    else if(marks>=50 && marks<65)
        printf("You Got C");
    else if (marks<50 && marks>0)
    printf("You Got F");

    else
        printf("Error");

return;
}