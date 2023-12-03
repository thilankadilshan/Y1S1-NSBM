#include <stdio.h>

int main ()
{
   char name[100];
   int num1, num2=2023;

    printf("Hellow student! Please enter yor Namne : ");
    scanf("%s",&name); 
    printf("Now enter your Birth year : ");
    scanf("%d",&num1);
    printf("Nice %s ! You are %d years old",name,num2-num1);
    return(0);
}