// Input Marks of 10 students and output the maximum , minimum and average Marks.

#include<stdio.h>
void main()
{
    int marks=0, min=0,max=0, no, total=0,num;
    float avg;

    for(no=1;no<=10;no++)
    {
        printf("Enter marks of student %d :",no);
        scanf("%d",&marks);
    
        if(marks>max)
        {
            max=marks;
        }

        else (marks<min);
        {
            min=marks;
        }
        total+=marks;
        }        
        avg=(float)total/10;

        printf("Maximum Mark is : %d\n",max);
        printf("Minimum Mark is : %d\n",min);
        printf("Averange Mark is : %.2f\n",avg);
return;
}

