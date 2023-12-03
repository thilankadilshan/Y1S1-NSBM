//Write a complete program to ask user enter three integer numbers,
//and then tell the user the largest value and smallest value among the three numbers

#include<stdio.h>
void main()
{
    int n1,n2,n3,min,max;

    printf("Enter three numbers :");
    scanf("%d %d %d",&n1,&n2,&n3);

    max=n1;
    if(n2>max)
    max=n2;

    if(n3>max)
    max=n3;

    min=n1;
    if(min>n2)
    min=n2;

    if(min>n3)
    min=n3;

    printf("The highest number : %d\n",max);
    printf("The lowest number is : %d",min);

    return;

}

