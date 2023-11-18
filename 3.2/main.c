#include <stdio.h>
#include <stdlib.h>

//Write a program to compute Fahrenheit from centigrade (f=1.8*c +32)

int main()
{
    float c;
    printf("enter temperature in centigrade: ");
    scanf("%f",&c);

    printf("temperature in Fahrenheit from centigrade: %.1f",1.8*c +32);
    return 0;

}
