//input 10 numbers and display the total number of even,odd numbers
#include<stdio.h>
void main()
{
    int x=1, num=0, even=0, odd=0;
    do
    {
        printf("Enter Number 0%d :",x);
        scanf("%d",&num);
        if(num%2==0)
            even++;
        else
            odd++;
        x++;
    } while (x<=10);
    printf("count of even numbers are :%d\n",even);
    printf("count of odd numbers are  :%d",odd);
return;
}