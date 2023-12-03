/*Display employee name, new salary, when the user inputs employee name,
and basic salary. You can refer following formula and the table to calculate new salary:
   	
    New Salary = Basic Salary + Increment
	
   	Basic Salary                              Increment
  	 Less than 5000                         5% of Basic Salary
   	More than or equal 5000
   	and less than 10000                 10% of Basic Salary
   	More than or equal 10,000       15% of Basic Salary*/


#include<stdio.h>
void main()

{
	float nsalery, bsalery, num1,num2,num3,num4,add;
	char name[20];

	printf("Enter your Name :");
	scanf("%s",&name);
	printf("Enter your basic salery :");
	scanf("%f",&bsalery);

	printf("Your name is : %s\n",name);

	num1=5000;
	if(num1>bsalery)
	add=bsalery*0.05;

	num2=5000;
	num3=10000;

	if(bsalery>=num1 && bsalery<10000)
	add=bsalery*0.1;

	num4=10000;
	if(bsalery>=num2)
	add=bsalery*0.15;

	nsalery=bsalery+add;
	printf("Your new slery is : %.2f",nsalery);

	return;
}