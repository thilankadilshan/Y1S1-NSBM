#include<stdio.h>
void main()
{
    int num1,num2, opera, ans;

    printf("Enter two numbers \n");
    scanf("%d %d",&num1,&num2);
    printf("Enter the arithmetic operation 1-4 and 5 to exit\n");
    printf(" 1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide \n 5. Exit\n");
    printf("Your Answer Plz :");
    scanf("%d",&opera);

    switch (opera)
    {
    case 1:
        ans=num1+num2;
        printf("Your Ans is : %d",ans);
        break;
    case 2:
        ans=num1-num2;
        printf("Your Ans is : %d",ans);
        break;
    case 3:
        ans=num1*num2;
        printf("Your Ans is : %d",ans);
        break;
    case 4:
        ans=num1/num2;
        printf("Your Ans is : %d",ans);
        break;
    case 5:
        printf("thank You");
        break;
    
    default:
        printf("Wrong answer");
        break;
    }
return;

}









/*#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator");
            return 1;
    }

    printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);
    return 0;
}
*/