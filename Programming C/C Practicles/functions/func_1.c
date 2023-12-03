#include<stdio.h>
//function declaration void total();
void total();
int main ()

{
    //function call total();
    total();
    printf("hellow\n");
    total();
    return 0;
}

//function definition

void total()
{
    int num1, num2, sum=0;

        printf("Enter a num 1 :");
        scanf("%d",&num1);
        printf("Enter a num 2 :");
        scanf("%d",&num2);
        sum=num1+num2;
        printf ("The sum of two numers are : %d \n",sum);



}