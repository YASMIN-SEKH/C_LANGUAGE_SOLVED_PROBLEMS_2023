#include <stdio.h>
#include <stdlib.h>

int main()
{
   // This program takes input and prints the given input

    char character;
    printf("enter a chararcter \n");
    scanf("%c", &character);
    printf("The character you have entered is %c \n", character);

    int integer;
    printf("enter an integer \n");
    scanf("%d", &integer);
    printf("The integer you have entered is %d \n", integer);

    float decimal_number;
    printf("enter a decimal number \n");
    scanf("%f", &decimal_number);
    printf("The decimal number you have entered is %f \n", decimal_number);
    return 0;
}
