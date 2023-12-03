#include <stdio.h>
void main()

{

    float cel,fah,x;

    printf("enter the temperature in Faranhiet : ");
    scanf("%f",&fah);

    x=fah-32;
    cel=x*5/9;
    
    printf("Answer in celcius : %.2f", cel);
    return;
}
