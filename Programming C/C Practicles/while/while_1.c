#include <stdio.h>
void main ()
{
    int num1, num2, sum=0;
    int count;

    while(count<5)
    {
        printf("Enter a num 1 :");
        scanf("%d",&num1);
        printf("Enter a num 2 :");
        scanf("%d",&num2);

        printf ("the sum of two numers are : %d", num1+num2 );
         printf("\n");

        count++;

    }
    return;
}