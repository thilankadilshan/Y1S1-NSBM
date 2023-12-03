/*The gross remuneration of a company salesman comprises the Basic Salary and
certain additional allowances and bonuses as given below:

Salesmen with over 5 years’ service receive a 10% additional allowance of
Basic Salary each month.

Salesmen working in Colombo ( Input character ‘C’ if the city is Colombo)
receive an additional allowance of  Rs. 2,500/- per month.

The monthly bonus payment is computed as given below:

Monthly Sales(Rs)	        Bonus as a percentage
                                of monthly sales

0-25000                          10
25000-50000                      12
>=50000                          15
	
Write a c program to output the gross monthly remuneration of a salesman.
*/

#include<stdio.h>
void main()
{
char city ;
float ad_all=0,ad_bon1=0,ad_bon2=0,year,salery,sales,bsalery;

printf("Enter Your no of Service years :");
scanf("%f",&year);
printf("Enter your working city,\n(if it is colombo, enter 'c')\n(if not colombo, enter 'n') :");
scanf("%s",&city);
printf("Enter your Monthly sales price :");
scanf("%f",&sales);
printf("Emter your basic Salery :");
scanf("%f",&bsalery);

if (city == 'c') 
{ad_all += 2500;}
else
{ad_all=0;}

if(year>=5)
{ad_bon1=bsalery*0.1;}
else
{ad_bon1=0;}

if(sales<25000)
{ad_bon2=sales*0.1;}

else if(sales<50000)
{ad_bon2=sales*0.12;}

else
{ad_bon2=sales*0.15;}

salery=(ad_all+ad_bon1+ad_bon2+bsalery);

printf("Your Final Salery is : %.2f",salery);

return;
}


