/*Input employee number, and hours worked by employees, and to display the following:
Employee number, Over Time Payment, and the percentage of employees whose Over Time
Payment exceeding the Rs. 4000/-.
The user should input –999 as employee number to end the program,
and the normal Over Time Rate is Rs.150 per hour and Rs. 200 per hour for hours in excess of 40.*/

#include<stdio.h>
#include <string.h>
void main ()
{
    int x, emp_no, hours=0, end,ot_pay,extra_h;

    for (x=1;x>=1;x++)
    {
        printf("Enter your Employee Number\n(If you want to Stop this programme Plese Enter '000'  :");
        scanf("%d",&emp_no);

        end=000;
        if(emp_no=end)
        
        {
            printf("thanks");
            break;
        }

        else
        {   
            printf("Enter yours Houres Worked :");
            scanf("%d",&hours);
            
            if(hours<=40)
            ot_pay=150*hours;

            else if(hours>40)
            extra_h=(hours-40);
            ot_pay=(150*40)+(extra_h*200);

            printf("Your Emplyee NO :%d\n",emp_no);
            printf("Your OT Payent is :%d",ot_pay);

            continue;
        }
    }
    
}



/*#include <stdio.h>

int main() {
    // initialization
    int emp_num, hours_worked, overtime_hours, overtime_pay, count_over_4k = 0,total_emp;
    float overtime_rate = 150.0;
    char prompt[] = "Enter employee number (-999 to end): ";
    
    // input employee number and hours worked
    printf(prompt);
    scanf("%d", &emp_num);
    
    // loop through input until -999 is entered
    while (emp_num != -999) {
        printf("Enter hours worked: ");
        scanf("%d", &hours_worked);
        
        // calculate overtime hours and pay
        if (hours_worked > 40) {
            overtime_hours = hours_worked - 40;
            overtime_pay = overtime_hours * overtime_rate + overtime_hours * 50;
        } else {
            overtime_pay = 0;
        }
        
        // output employee number and overtime pay
        printf("Employee number: %d, Over Time Payment: Rs. %d\n", emp_num, overtime_pay);
        
        // count number of employees with overtime pay over 4000
        if (overtime_pay > 4000) {
            count_over_4k++;
        }
        
        // prompt for next input
        printf(prompt);
        scanf("%d", &emp_num);
    }
     
    // calculate percentage of employees with overtime pay over 4000
    float percent_over_4k = (float)count_over_4k / (float)(total_emp - 1) * 100.0;
    
    // output percentage of employees with overtime pay over 4000
    printf("Percentage of employees with Over Time Payment exceeding Rs. 4000/-: %.2f%%\n", percent_over_4k);
    
    return 0;
}

*/

