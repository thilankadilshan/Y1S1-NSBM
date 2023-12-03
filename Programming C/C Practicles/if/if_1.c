//input a module mark and diplay the grade
//the pass mark is 50

#include<stdio.h>
void main()
{
    int x; 

    printf("Enter Your marks :");
    scanf ("%d",&x);
    if (x>=50 && x<=100)
    {
        printf("you are passed");
    }
    else if (x<50 && x>=0)
    {
        printf("you are Fail");
    }
    else

    printf("You enterd a invalid value");
return;
    
}