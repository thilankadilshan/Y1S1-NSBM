/*Write a program to an input borth year of a student and display
the student is a "teenager" or "not a teenager"*/

#include<stdio.h>
void main()
{
    int byear;
    printf("Hellow Buddy!!!\nEnter your Birth Year : ");
    scanf("%d",&byear);

    if(byear>=2003 && byear<=2013)
        printf("You Are a teenager!!!");
    
    else
        printf("You are Not a teenager!!!");

    return;

}