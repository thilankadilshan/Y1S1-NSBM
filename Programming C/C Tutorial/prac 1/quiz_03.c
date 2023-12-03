#include <stdio.h>
#include <stdlib.h>

void main()
{
   char let;
   int num1;
   float num2;
   double num3;

   printf("enter your favorite letter : ");
   scanf("%c",&let);

   printf("Enter your Student number: ");
   scanf("%d",&num1);

   printf("enter your z score     : ");
   scanf("%f",&num2);

   printf("enter your 2nd Z score : ");
   scanf("%lf",&num3);

   printf("\nFavorite letter  : %c",let);
   printf("\nStudent No  : %d",num1);
   printf("\nZ Score     : %.4f",num2);
   printf("\nZ Score 2   : %.4lf",num3);
return;
}