#include <stdio.h>
#include <stdlib.h>

//Write a program to enter a distance in to kilometer and convert it in to meter, feet, inches,
//and centimeter.

int main()
{
    float km
    printf("enter a distance in to kilometer: ");
    scanf("%f",&km);

    printf("distance in to meter: %.2f",km/1000);
    printf("distance in to feet: %.2f",km*3280.84);
    printf("distance in to inches: %.f",km*39370.1);
    printf("distance in to centimeter: %.f",km/100000);
    return 0;
}
