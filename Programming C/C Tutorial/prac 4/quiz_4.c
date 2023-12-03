//Input price of 10 items and display the average value of an Item , number of items which the price is greater than 200.

#include<stdio.h>
void main ()
{
    int x=1,price=0,num1=0,total=0,num2;
    float avg;

    while (x<=10)
    {
        printf("Enter Price of product %d :",x);
        scanf("%d",&price);
        
        if(price>200)
        {
            num1++;
        }
        x++;
        total+=price;
        avg=(float)total/10;
        
        

    }
    printf("Sum of items Greater than 200 is :%d\n",num1);
        printf("Avarange value of an item :%.2f\n",avg);
        
        
    return;
    
}
