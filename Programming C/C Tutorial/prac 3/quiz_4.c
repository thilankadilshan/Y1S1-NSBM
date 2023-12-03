/*Diameter, Circumference and Area of a Circle) Write a program that reads in the radius
of a circle and prints the circle’s diameter, circumference and area. 
Use the constant value 3.14159 for π. Perform each of these calculations 
inside the printf statement(s) and use the conversion specifier %f.*/

#include<stdio.h>
void main()
{
    float dia, circ, radi,fie=3.12159;

    printf("Enter the Radius of circle :");
    scanf("%f",&radi);

    dia=radi*2;
    printf("Diameter is :%.2f\n",dia);
    circ=(2*fie*radi);
    printf("Circumference is : %.4f",circ);

    return;
}

