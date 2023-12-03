/*write a c programme to check whether a number is product of 5 (use functions)
   1 no arguments & no return*/  

#include <stdio.h>
void checkProductOfFive() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        printf("The number %d is a product of 5.\n", num);
    } else {
        printf("The number %d is not a product of 5.\n", num);
    }
}

int main() {
    checkProductOfFive();

    return 0;
}





