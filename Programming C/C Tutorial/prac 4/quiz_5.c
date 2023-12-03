/*Input the Employee no  and the Basic Salary of the  Employees
in an organisation ending with the  dummy value -999  for
Employee no  and count the number Employees whose Basic Salary  >=5000.*/

#include<stdio.h>
void main ()
{
    int x,no,bsalery,count=0;

    for(x=1;x<=10;x++)
    {
        printf("Enter Your Employee no :");
        scanf("%d",&no);
        printf("Now Enter your basic salery :");
        scanf("%d",&bsalery);

        if(bsalery>=5000)
        count++;
        
        
    }
    printf("Number of Employees Who have basic salery more than 5000 :%d",count);
return;
}