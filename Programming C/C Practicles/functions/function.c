#include<stdio.h>

void findavg (float a,float b) //any name yon can write
{
    float avg;
    avg=(a+b)/2;
    printf("The average is %.2f \n,avg");
}
int main()
{
    float n1,n2;
    printf("Enter two numbers :");
    scanf("%f %f",&n1,&n2);
    findavg(n1,n2);

}
