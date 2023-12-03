#include<stdio.h>
void main ()
{
int x=1,total=0,num;
float avg;
while(x<=10)
{
    printf("Enter Number %d :",x);
    scanf("%d",&num);
    total=total+num;
    x++;
    
}
avg=(float)total/10;
printf("%.2f",avg);
return;
}