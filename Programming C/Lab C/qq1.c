#include<stdio.h>
void main ()

{
    int num1,num2; 
    printf("hellow buddy! please input two numbers : \n");
    scanf("%d %d", &num1,&num2);


    printf("The value of above numbers are (Before Swap): %d %d \n",num1,num2);
    printf("The value of above numbers are (After Swap): %d %d \n", num2,num1);

    return;
}
