/*5.	Write a program that reads in two integers and determines and prints if the first
is a multiple of the second.
*/

#include<stdio.h>
void main()
{
    int n1,n2, value;

    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);

    value=n1%n2;
    if (value==0)
    {
        printf("First number is multiple of the second");
    }
    else
    printf("First number is not a miltiple of second");
    
return;
}