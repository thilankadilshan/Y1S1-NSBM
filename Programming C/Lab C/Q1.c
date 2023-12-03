/*Write a c programme to input an item number,description,price of a 
product,quantity and desplay item number, description with total price*/

#include<stdio.h>
void main ()
{
    int num1,quant;
    char des[20];
    float total,price;

    printf("Enter the item number : ");
    scanf("%d",&num1);
    printf("Enter the product description : ");
    scanf("%s",&des);
    printf("Enter The price : ");
    scanf("%f",&price);
    printf("Enter the Quantity : ");
    scanf("%d",&quant);

    total=price*quant;

    printf("Item number : %d \n",num1);
    printf("Description : %s \n",des);
    printf("Quantity    : %d \n",quant);
    printf("Total Price : %.2f \n",total);

    return;



}