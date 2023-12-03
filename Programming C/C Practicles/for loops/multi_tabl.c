#include<stdio.h>
void main ()

{
    int num1;
    printf("Enter a number what you want : ");
    scanf("%d",&num1);
    
    for(int x1=1;x1<=100;x1++)
    {
        printf("%d x %d = %d \n",num1,x1, num1*x1);
    }
    
    return;
}